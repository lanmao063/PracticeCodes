#ifndef LOGINPAGE_H
#define LOGINPAGE_H

#include <QDialog>
#include "ApiService.h"

namespace Ui {
class LoginPage;
}

class LoginPage : public QDialog
{
    Q_OBJECT

public:
    explicit LoginPage(ApiService *api, QWidget *parent = nullptr);
    ~LoginPage();

signals:
    void loginSuccess(int userId);
    void goRegisterPage();

private slots:
    void onLoginClicked();
    void onRegisterClicked();
    void onLoginResult(int code, int userId);

private:
    Ui::LoginPage *ui;
    ApiService *apiService;
};

#endif // LOGINPAGE_H
