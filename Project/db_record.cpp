#include "db_record.h"
#include "db.h"
#include <iostream>
#include "sqlite3.h"
//添加账单
bool db_add_record(int user_id, double amount, const std::string &type,
                   const std::string &note, const std::string &date,
                   const std::string &month, const std::string &time) {

    sqlite3 *db = get_db();
    const char *sql =
        "INSERT INTO records (user_id, amount, type, note, date, month, time)"
        "VALUES (?, ?, ?, ?, ?, ?, ?);";

    sqlite3_stmt *stmt;
    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    sqlite3_bind_int(stmt, 1, user_id);
    sqlite3_bind_double(stmt, 2, amount);
    sqlite3_bind_text(stmt, 3, type.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 4, note.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 5, date.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 6, month.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 7, time.c_str(), -1, SQLITE_TRANSIENT);

    bool ok = (sqlite3_step(stmt) == SQLITE_DONE);
    sqlite3_finalize(stmt);
    return ok;
}
//按天查询账单
json db_get_records_by_day(int user_id, const std::string &date) {
    sqlite3 *db = get_db();
    const char *sql = "SELECT id, amount, type, note, time FROM records WHERE user_id=? AND date=? ORDER BY time DESC;";

    sqlite3_stmt *stmt;
    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    sqlite3_bind_int(stmt, 1, user_id);
    sqlite3_bind_text(stmt, 2, date.c_str(), -1, SQLITE_TRANSIENT);

    json arr = json::array();

    while (sqlite3_step(stmt) == SQLITE_ROW) {
        json obj;
        obj["id"] = sqlite3_column_int(stmt, 0);
        obj["amount"] = sqlite3_column_double(stmt, 1);
        obj["type"] = (const char*)sqlite3_column_text(stmt, 2);
        obj["note"] = (const char*)sqlite3_column_text(stmt, 3);
        obj["time"] = (const char*)sqlite3_column_text(stmt, 4);
        arr.push_back(obj);
    }

    sqlite3_finalize(stmt);
    return arr;
}
//按月查询账单
json db_get_records_by_month(int user_id, const std::string &month) {
    sqlite3 *db = get_db();
    const char *sql = "SELECT id, amount, type, note, date FROM records WHERE user_id=? AND month=? ORDER BY date DESC;";

    sqlite3_stmt *stmt;
    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    sqlite3_bind_int(stmt, 1, user_id);
    sqlite3_bind_text(stmt, 2, month.c_str(), -1, SQLITE_TRANSIENT);

    json arr = json::array();

    while (sqlite3_step(stmt) == SQLITE_ROW) {
        json obj;
        obj["id"] = sqlite3_column_int(stmt, 0);
        obj["amount"] = sqlite3_column_double(stmt, 1);
        obj["type"] = (const char*)sqlite3_column_text(stmt, 2);
        obj["note"] = (const char*)sqlite3_column_text(stmt, 3);
        obj["date"] = (const char*)sqlite3_column_text(stmt, 4);
        arr.push_back(obj);
    }

    sqlite3_finalize(stmt);
    return arr;
}
//按天汇总账单
double db_sum_day(int user_id, const std::string &date) {
    sqlite3 *db = get_db();
    const char *sql = "SELECT SUM(amount) FROM records WHERE user_id=? AND date=?;";

    sqlite3_stmt *stmt;
    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);
    sqlite3_bind_int(stmt, 1, user_id);
    sqlite3_bind_text(stmt, 2, date.c_str(), -1, SQLITE_TRANSIENT);

    double result = 0;
    if (sqlite3_step(stmt) == SQLITE_ROW)
        result = sqlite3_column_double(stmt, 0);

    sqlite3_finalize(stmt);
    return result;
}
//按月汇总账单
double db_sum_month(int user_id, const std::string &month) {
    sqlite3 *db = get_db();
    const char *sql = "SELECT SUM(amount) FROM records WHERE user_id=? AND month=?;";

    sqlite3_stmt *stmt;
    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    sqlite3_bind_int(stmt, 1, user_id);
    sqlite3_bind_text(stmt, 2, month.c_str(), -1, SQLITE_TRANSIENT);

    double result = 0;
    if (sqlite3_step(stmt) == SQLITE_ROW)
        result = sqlite3_column_double(stmt, 0);

    sqlite3_finalize(stmt);
    return result;
}
//饼状图按类型汇总月金额
json db_pie_month(int user_id, const std::string &month) {
    sqlite3 *db = get_db();
    const char *sql =
        "SELECT type, SUM(amount) FROM records WHERE user_id=? AND month=? GROUP BY type;";

    sqlite3_stmt *stmt;
    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    sqlite3_bind_int(stmt, 1, user_id);
    sqlite3_bind_text(stmt, 2, month.c_str(), -1, SQLITE_TRANSIENT);

    json arr = json::array();
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        json item;
        item["type"] = (const char*)sqlite3_column_text(stmt, 0);
        item["sum"]  = sqlite3_column_double(stmt, 1);
        arr.push_back(item);
    }
    sqlite3_finalize(stmt);
    return arr;
}

json db_bar_month(int user_id, const std::string &month) {
    sqlite3 *db = get_db();
    const char *sql =
        "SELECT date, SUM(amount) FROM records "
        "WHERE user_id=? AND month=? GROUP BY date ORDER BY date;";

    sqlite3_stmt *stmt;
    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    sqlite3_bind_int(stmt, 1, user_id);
    sqlite3_bind_text(stmt, 2, month.c_str(), -1, SQLITE_TRANSIENT);

    json arr = json::array();
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        json item;
        item["date"] = (const char*)sqlite3_column_text(stmt, 0);
        item["sum"]  = sqlite3_column_double(stmt, 1);
        arr.push_back(item);
    }
    sqlite3_finalize(stmt);
    return arr;
}
