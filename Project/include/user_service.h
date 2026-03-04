#ifndef USER_SERVICE_H
#define USER_SERVICE_H

#include <string>

class UserService {
public:
    bool registerUser(const std::string &username, const std::string &password);
    int loginUser(const std::string &username, const std::string &password);
};

#endif
