#include <QApplication>
#include "LoginPage.h"
#include "ApiService.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    ApiService api;
    LoginPage login(&api);
    login.show();

    return a.exec();
}
