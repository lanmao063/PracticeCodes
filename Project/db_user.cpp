#include "db_user.h"
#include "db.h"
#include "sqlite3.h"
#include <iostream>

bool db_add_user(const std::string &username, const std::string &passHash) {
    sqlite3 *db = get_db();
    const char *sql = "INSERT INTO users (username, password) VALUES (?, ?);";

    sqlite3_stmt *stmt;
    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    sqlite3_bind_text(stmt, 1, username.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 2, passHash.c_str(), -1, SQLITE_TRANSIENT);

    bool ok = (sqlite3_step(stmt) == SQLITE_DONE);
    sqlite3_finalize(stmt);
    return ok;
}

int db_login_user(const std::string &username, const std::string &passHash) {
    sqlite3 *db = get_db();
    const char *sql = "SELECT id FROM users WHERE username=? AND password=?;";

    sqlite3_stmt *stmt;
    sqlite3_prepare_v2(db, sql, -1, &stmt, nullptr);

    sqlite3_bind_text(stmt, 1, username.c_str(), -1, SQLITE_TRANSIENT);
    sqlite3_bind_text(stmt, 2, passHash.c_str(), -1, SQLITE_TRANSIENT);

    int rc = sqlite3_step(stmt);
    int uid = (rc == SQLITE_ROW ? sqlite3_column_int(stmt, 0) : -1);

    sqlite3_finalize(stmt);
    return uid;
}
