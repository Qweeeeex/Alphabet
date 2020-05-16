#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <locale.h>
#include <iomanip>
#define maxline 256
#define maxzn 256
#define maxword 48

#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_Knopka_clicked();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
