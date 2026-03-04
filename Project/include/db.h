#ifndef CPPPROJECT_DB_H
#define CPPPROJECT_DB_H
#include "json.hpp"
#include "sqlite3.h"

using json = nlohmann::json;

// 初始化数据库
void init_db();
sqlite3* get_db();
#endif //CPPPROJECT_DB_H
