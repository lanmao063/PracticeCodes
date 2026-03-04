#include "db.h"
#include <iostream>
#include <filesystem>
#include "sqlite3.h"

namespace fs = std::filesystem;
sqlite3 *g_db = nullptr;

// 对外提供数据库指针
sqlite3* get_db() {
    static sqlite3* db = nullptr;

    if (db == nullptr) {
        if (sqlite3_open("./database/account.db", &db) != SQLITE_OK) {
            std::cerr << "[DB] Failed to open database\n";
            return nullptr;
        }
    }
    return db;
}


void init_db() {
    //创建 database 目录
    if (!fs::exists("./database")) {
        fs::create_directory("./database");
        std::cout << "[DB] Created ./database folder\n";
    }

    //打开或创建数据库文件
    sqlite3 *db;
    if (sqlite3_open("./database/account.db", &db) != SQLITE_OK) {
        std::cerr << "[DB] Failed to open database\n";
        return;
    }

    char *errMsg = nullptr;

    //创建 users 表
    const char *sql_users =
        "CREATE TABLE IF NOT EXISTS users ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "username TEXT UNIQUE,"
        "password TEXT"
        ");";

    if (sqlite3_exec(db, sql_users, nullptr, nullptr, &errMsg) != SQLITE_OK) {
        std::cerr << "[DB] Create users table failed: " << errMsg << "\n";
        sqlite3_free(errMsg);
    } else {
        std::cout << "[DB] users table ready\n";
    }

    //创建 records 表
    const char *sql_records =
        "CREATE TABLE IF NOT EXISTS records ("
        "id INTEGER PRIMARY KEY AUTOINCREMENT,"
        "user_id INTEGER,"
        "amount REAL,"
        "type TEXT,"
        "note TEXT,"
        "date TEXT,"   // yyyy-mm-dd
        "month TEXT,"  // yyyy-mm
        "time TEXT"    // hh:mm:ss
        ");";

    if (sqlite3_exec(db, sql_records, nullptr, nullptr, &errMsg) != SQLITE_OK) {
        std::cerr << "[DB] Create records table failed: " << errMsg << "\n";
        sqlite3_free(errMsg);
    } else {
        std::cout << "[DB] records table ready\n";
    }
    std::cout << "[DB] Initialization completed!\n";
}



bool add_record(int user_id, double amount, const std::string &type,
                const std::string &note, const std::string &date,
                const std::string &month, const std::string &time) {

    sqlite3 *db = get_db();
    if (!db) return false;

    const char *sql =
        "INSERT INTO records (user_id, amount, type, note, date, month, time) "
        "VALUES (?, ?, ?, ?, ?, ?, ?);";

    sqlite3_stmt *stmt;

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "[DB] Failed to prepare insert record SQL\n";
        return false;
    }

    sqlite3_bind_int(stmt, 1, user_id);
    sqlite3_bind_double(stmt, 2, amount);
    sqlite3_bind_text(stmt, 3, type.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 4, note.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 5, date.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 6, month.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 7, time.c_str(), -1, SQLITE_TRANSIENT);

    int rc = sqlite3_step(stmt);
    sqlite3_finalize(stmt);

    return rc == SQLITE_DONE;
}
json list_records(int user_id) {
    sqlite3 *db = get_db();
    json arr = json::array();

    const char *sql =
        "SELECT id, amount, type, note, date, month, time "
        "FROM records WHERE user_id = ? ORDER BY id DESC;";

    sqlite3_stmt *stmt;

    if (sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr) != SQLITE_OK) {
        std::cerr << "[DB] Failed to prepare select records SQL\n";
        return arr;
    }

    sqlite3_bind_int(stmt, 1, user_id);

    while (sqlite3_step(stmt) == SQLITE_ROW) {
        json item;
        item["id"]    = sqlite3_column_int(stmt, 0);
        item["amount"] = sqlite3_column_double(stmt, 1);
        item["type"]   = (const char*)sqlite3_column_text(stmt, 2);
        item["note"]   = (const char*)sqlite3_column_text(stmt, 3);
        item["date"]   = (const char*)sqlite3_column_text(stmt, 4);
        item["month"]  = (const char*)sqlite3_column_text(stmt, 5);
        item["time"]   = (const char*)sqlite3_column_text(stmt, 6);

        arr.push_back(item);
    }

    sqlite3_finalize(stmt);
    return arr;
}


