#include "user_service.h"
#include "db_user.h"
#include "md5.h"

bool UserService::registerUser(const std::string &username, const std::string &password) {
    return db_add_user(username, md5(password));
}

int UserService::loginUser(const std::string &username, const std::string &password) {
    return db_login_user(username, md5(password));
}

