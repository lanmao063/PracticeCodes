#ifndef CPPPROJECT_DB_USER_H
#define CPPPROJECT_DB_USER_H

#include <string>

bool db_add_user(const std::string &username, const std::string &passHash);
int db_login_user(const std::string &username, const std::string &passHash);
#endif //CPPPROJECT_DB_USER_H