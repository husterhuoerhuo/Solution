#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Solution.h"
#include<qsystemtrayicon.h>
#include<qpushbutton.h>
#include<QCloseEvent>
#include<qmessagebox.h>
class Solution : public QMainWindow
{
    Q_OBJECT

public:
    Solution(QWidget *parent = Q_NULLPTR);
    void closeEvent(QCloseEvent* event);

public slots:
    void on_clicked();
    void activate_mSysTrayIcon(QSystemTrayIcon::ActivationReason reason);
private:
    Ui::SolutionClass ui;
    QSystemTrayIcon* mSystemTrayIcon;
    QPushButton* Btn;
};
