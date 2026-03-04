#ifndef CPPPROJECT_APISERVICE_H
#define CPPPROJECT_APISERVICE_H

#include <QObject>
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <functional>

class ApiService : public QObject {
    Q_OBJECT

public:
    explicit ApiService(QObject *parent = nullptr);
    ~ApiService(); // 析构函数用于释放资源

    // 用户接口
    void registerUser(const QString &username, const QString &password);
    void loginUser(const QString &username, const QString &password);

    // 账单接口
    void addRecord(int userId, double amount, const QString &type, const QString &note);
    void getRecordsByDay(int userId, const QString &date);
    void getRecordsByMonth(int userId, const QString &month);

    // 图表接口
    void getPieMonth(int userId, const QString &month);
    void getBarMonth(int userId, const QString &month);

    signals:
        // 回调信号
    void registerResult(int code, QString msg);         // 注意加分号
    void loginResult(int code, int userId);            // 注意加分号
    void addRecordResult(bool ok);                     // 注意加分号
    void dayRecordsResult(QJsonObject data);           // 注意加分号
    void monthRecordsResult(QJsonObject data);         // 注意加分号
    void pieResult(QJsonObject data);                  // 注意加分号
    void barResult(QJsonObject data);                  // 注意加分号

private:
    QNetworkAccessManager *manager;

    void postJson(const QString &url, const QJsonObject &obj,
                  std::function<void(const QJsonObject&)> onSuccess);

    void getRequest(const QString &url,
                    std::function<void(const QJsonObject&)> onSuccess);
};

#endif //CPPPROJECT_APISERVICE_H
