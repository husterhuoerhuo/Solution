#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Solution.h"

class Solution : public QMainWindow
{
    Q_OBJECT

public:
    Solution(QWidget *parent = Q_NULLPTR);

private:
    Ui::SolutionClass ui;
};
