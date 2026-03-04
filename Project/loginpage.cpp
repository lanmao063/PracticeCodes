#include "LoginPage.h"
#include "ui_loginpage.h"
#include <QMessageBox>

LoginPage::LoginPage(ApiService *api, QWidget *parent)
    : QDialog(parent)               // ←← 关键改动：继承 QDialog
    , ui(new Ui::LoginPage)
    , apiService(api)
{
    ui->setupUi(this);

    // 设置为模态对话框（可选）
    setModal(true);

    // 登录按钮
    connect(ui->loginButton, &QPushButton::clicked,
            this, &LoginPage::onLoginClicked);

    // 注册按钮
    connect(ui->registerButton, &QPushButton::clicked,
            this, &LoginPage::onRegisterClicked);

    // API 返回信号
    connect(apiService, &ApiService::loginResult,
            this, &LoginPage::onLoginResult);
}

LoginPage::~LoginPage()
{
    delete ui;
}

void LoginPage::onLoginClicked()
{
    QString username = ui->username->text().trimmed();
    QString password = ui->password->text().trimmed();

    if (username.isEmpty() || password.isEmpty()) {
        QMessageBox::warning(this, "错误", "用户名或密码不能为空");
        return;
    }

    apiService->loginUser(username, password);
}

void LoginPage::onRegisterClicked()
{
    emit goRegisterPage();
}

void LoginPage::onLoginResult(int code, int userId)
{
    if (code == 0) {
        QMessageBox::information(this, "成功", "登录成功！");
        emit loginSuccess(userId);

        accept();  // ← 登录成功自动关闭对话框
    } else {
        QMessageBox::warning(this, "失败", "用户名或密码错误");
    }
}
