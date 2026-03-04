#ifndef CPPPROJECT_RECORD_SERVICE_H
#define CPPPROJECT_RECORD_SERVICE_H

#include <string>
#include "json.hpp"
using json = nlohmann::json;

class RecordService {
public:
    bool addRecord(int user_id, double amount, const std::string &type,
                   const std::string &note);
    json getRecordsByDay(int user_id, const std::string &date);
    json getRecordsByMonth(int user_id, const std::string &month);
    double sumDay(int user_id, const std::string &date);
    double sumMonth(int user_id, const std::string &month);
    json getPieMonth(int user_id, const std::string &month);
    json getBarMonth(int user_id, const std::string &month);
};

#endif //CPPPROJECT_RECORD_SERVICE_H