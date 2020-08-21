#include "Solution.h"

Solution::Solution(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    this->setWindowIcon(QIcon(":/Solution/Resuorce/01.ico"));
    this->setWindowTitle(QString("Great Project"));

    Btn = new QPushButton(this);
    Btn->setText(QString("clicked"));
    Btn->move(200, 200);

    mSystemTrayIcon = new QSystemTrayIcon(this);
    connect(Btn, &QPushButton::clicked, this, &Solution::on_clicked);
    connect(mSystemTrayIcon, SIGNAL(activated(QSystemTrayIcon::ActivationReason)), this, SLOT(activate_mSysTrayIcon(QSystemTrayIcon::ActivationReason)));
}

//点击关闭出现消息提醒，重写closeEvent
void Solution::closeEvent(QCloseEvent* event)
{
    QMessageBox::information(this, QString("Tips"), QString("Stops"), QString("OK"), QString("No"), 0, 1);
}

//点击按钮程序托盘化
void Solution::on_clicked()
{
    this->hide();
    mSystemTrayIcon->setIcon(QIcon(":/Solution/Resuorce/01.ico"));
    mSystemTrayIcon->setToolTip(QString("hello world"));
    mSystemTrayIcon->show();
}

void Solution::activate_mSysTrayIcon(QSystemTrayIcon::ActivationReason reason)
{
    switch (reason)
    {
    case QSystemTrayIcon::Unknown:
        break;
    case QSystemTrayIcon::Context:
        break;
    case QSystemTrayIcon::DoubleClick:
        this->show();
        break;
    case QSystemTrayIcon::Trigger:
        break;
    case QSystemTrayIcon::MiddleClick:
        break;
    default:
        break;
    }
}