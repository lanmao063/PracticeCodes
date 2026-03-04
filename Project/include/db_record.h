
#ifndef CPPPROJECT_DB_RECORD_H
#define CPPPROJECT_DB_RECORD_H
#include <string>
#include "json.hpp"
using json = nlohmann::json;

bool db_add_record(int user_id, double amount, const std::string &type,
                   const std::string &note, const std::string &date,
                   const std::string &month, const std::string &time);

json db_get_records_by_day(int user_id, const std::string &date);
json db_get_records_by_month(int user_id, const std::string &month);
double db_sum_day(int user_id, const std::string &date);
double db_sum_month(int user_id, const std::string &month);
json db_pie_month(int user_id, const std::string &month);
json db_bar_month(int user_id, const std::string &month);

#endif //CPPPROJECT_DB_RECORD_H