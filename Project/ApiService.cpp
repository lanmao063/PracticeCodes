#include "ApiService.h"
#include <QNetworkRequest>

ApiService::ApiService(QObject *parent)
    : QObject(parent)
{
    manager = new QNetworkAccessManager(this);
}

/*--------------------- 公共 POST 封装 ----------------------*/
void ApiService::postJson(const QString &url, const QJsonObject &obj,
                          std::function<void(const QJsonObject&)> onSuccess)
{
    QNetworkRequest req(url);
    req.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QNetworkReply *reply = manager->post(req, QJsonDocument(obj).toJson());

    connect(reply, &QNetworkReply::finished, [=]() {
        QByteArray data = reply->readAll();
        QJsonObject json = QJsonDocument::fromJson(data).object();

        onSuccess(json);
        reply->deleteLater();
    });
}

/*--------------------- 公共 GET 封装 ----------------------*/
void ApiService::getRequest(const QString &url,
                            std::function<void(const QJsonObject&)> onSuccess)
{
    QNetworkReply *reply = manager->get(QNetworkRequest(url));

    connect(reply, &QNetworkReply::finished, [=]() {
        QByteArray data = reply->readAll();
        QJsonObject json = QJsonDocument::fromJson(data).object();

        onSuccess(json);
        reply->deleteLater();
    });
}

/*--------------------- 用户相关 ------------------------*/

void ApiService::registerUser(const QString &username, const QString &password)
{
    QJsonObject obj;
    obj["username"] = username;
    obj["password"] = password;

    postJson("http://127.0.0.1:8080/register", obj,
             [&](const QJsonObject &res){
        emit registerResult(res["code"].toInt(), res["msg"].toString());
    });
}

void ApiService::loginUser(const QString &username, const QString &password)
{
    QJsonObject obj;
    obj["username"] = username;
    obj["password"] = password;

    postJson("http://127.0.0.1:8080/login", obj,
             [&](const QJsonObject &res){
        int code = res["code"].toInt();
        int uid  = res["user_id"].toInt();
        emit loginResult(code, uid);
    });
}

/*--------------------- 账单接口 ------------------------*/

void ApiService::addRecord(int userId, double amount, const QString &type, const QString &note)
{
    QJsonObject obj;
    obj["user_id"] = userId;
    obj["amount"]  = amount;
    obj["type"]    = type;
    obj["note"]    = note;

    postJson("http://127.0.0.1:8080/add_record", obj,
             [&](const QJsonObject &res){
        emit addRecordResult(res["code"].toInt() == 0);
    });
}

void ApiService::getRecordsByDay(int userId, const QString &date)
{
    QString url = QString("http://127.0.0.1:8080/day/%1/%2")
                      .arg(userId).arg(date);

    getRequest(url, [&](const QJsonObject &res){
        emit dayRecordsResult(res);
    });
}

void ApiService::getRecordsByMonth(int userId, const QString &month)
{
    QString url = QString("http://127.0.0.1:8080/month/%1/%2")
                      .arg(userId).arg(month);

    getRequest(url, [&](const QJsonObject &res){
        emit monthRecordsResult(res);
    });
}

/*--------------------- 图表接口 ------------------------*/

void ApiService::getPieMonth(int userId, const QString &month)
{
    QString url = QString("http://127.0.0.1:8080/pie/%1/%2")
                      .arg(userId).arg(month);

    getRequest(url, [&](const QJsonObject &res){
        emit pieResult(res);
    });
}

void ApiService::getBarMonth(int userId, const QString &month)
{
    QString url = QString("http://127.0.0.1:8080/bar/%1/%2")
                      .arg(userId).arg(month);

    getRequest(url, [&](const QJsonObject &res){
        emit barResult(res);
    });
}
ApiService::~ApiService() {}
