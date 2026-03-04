#include "record_service.h"
#include "db_record.h"
#include <ctime>
static std::string now_date() {
    time_t t = time(0);
    tm *p = localtime(&t);
    char buf[20];
    sprintf(buf, "%04d-%02d-%02d", p->tm_year+1900, p->tm_mon+1, p->tm_mday);
    return buf;
}

static std::string now_time() {
    time_t t = time(0);
    tm *p = localtime(&t);
    char buf[20];
    sprintf(buf, "%02d:%02d:%02d", p->tm_hour, p->tm_min, p->tm_sec);
    return buf;
}
bool RecordService::addRecord(int user_id, double amount,
                              const std::string &type, const std::string &note) {

    std::string date  = now_date();
    std::string month = date.substr(0, 7);
    std::string time  = now_time();

    return db_add_record(user_id, amount, type, note, date, month, time);
}
json RecordService::getRecordsByDay(int user_id, const std::string &date) {
    return db_get_records_by_day(user_id, date);
}

json RecordService::getRecordsByMonth(int user_id, const std::string &month) {
    return db_get_records_by_month(user_id, month);
}

double RecordService::sumDay(int user_id, const std::string &date) {
    return db_sum_day(user_id, date);
}

double RecordService::sumMonth(int user_id, const std::string &month) {
    return db_sum_month(user_id, month);
}
json RecordService::getPieMonth(int user_id, const std::string &month) {
    return db_pie_month(user_id, month);
}

json RecordService::getBarMonth(int user_id, const std::string &month) {
    return db_bar_month(user_id, month);
}

