#include <iostream>
#include "httplib.h"
#include "json.hpp"

#include "db.h"
#include "user_service.h"
#include "record_service.h"

using json = nlohmann::json;

int main() {
    init_db();

    UserService userService;
    RecordService recordService;

    httplib::Server svr;
// 测试
    svr.Get("/", [](const httplib::Request&, httplib::Response& res) {
        res.set_content("Server is running", "text/plain");
    });

    // 注册
    svr.Post("/register", [&](const httplib::Request &req, httplib::Response &res) {
        auto body = json::parse(req.body);
        if (userService.registerUser(body["username"], body["password"])) {
            res.set_content("{\"code\":0,\"msg\":\"Register OK\"}", "application/json");
        } else {
            res.set_content("{\"code\":1,\"msg\":\"Username exists\"}", "application/json");
        }
    });

    // 登录
    svr.Post("/login", [&](const httplib::Request &req, httplib::Response &res) {
        auto body = json::parse(req.body);
        int uid = userService.loginUser(body["username"], body["password"]);

        if (uid > 0) {
            res.set_content("{\"code\":0,\"user_id\":" + std::to_string(uid) + "}", "application/json");
        } else {
            res.set_content("{\"code\":1,\"msg\":\"Wrong username or password\"}", "application/json");
        }
    });

    // 添加账单
    svr.Post("/add_record", [&](const httplib::Request &req, httplib::Response &res) {
        auto b = json::parse(req.body);
        bool ok = recordService.addRecord(b["user_id"], b["amount"], b["type"], b["note"]);

        res.set_content(ok ? "{\"code\":0}" : "{\"code\":1}", "application/json");
    });

    // 查询某天账单
    svr.Get(R"(/day/(\d+)/(\d{4}-\d{2}-\d{2}))",
        [&](const httplib::Request &req, httplib::Response &res) {
            int uid = std::stoi(req.matches[1]);
            std::string date = req.matches[2];

            json result = recordService.getRecordsByDay(uid, date);
            res.set_content(result.dump(), "application/json");
    });

    // 查询某月账单
    svr.Get(R"(/month/(\d+)/(\d{4}-\d{2}))",
        [&](const httplib::Request &req, httplib::Response &res) {
            int uid = std::stoi(req.matches[1]);
            std::string month = req.matches[2];

            json result = recordService.getRecordsByMonth(uid, month);
            res.set_content(result.dump(), "application/json");
    });
    // 饼图：按类别统计
    svr.Get(R"(/pie/(\d+)/(\d{4}-\d{2}))",
        [&](const httplib::Request &req, httplib::Response &res) {
            int uid = std::stoi(req.matches[1]);
            std::string month = req.matches[2];

            json result = recordService.getPieMonth(uid, month);
            res.set_content(result.dump(), "application/json");
    });

    // 条形图：每日趋势
    svr.Get(R"(/bar/(\d+)/(\d{4}-\d{2}))",
        [&](const httplib::Request &req, httplib::Response &res) {
            int uid = std::stoi(req.matches[1]);
            std::string month = req.matches[2];

            json result = recordService.getBarMonth(uid, month);
            res.set_content(result.dump(), "application/json");
    });

    std::cout << "Server OK: http://127.0.0.1:8080\n";
    svr.listen("0.0.0.0", 8080);
}
