#include "widget.h"
#include "./ui_widget.h"
#include <QInputDialog>


using namespace std;

Widget::Widget(QWidget *parent):
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_Knopka_clicked()
{
    ui->textBrowser->clear();
    char zn1[maxzn][maxword];
    char* zn2 = NULL;
    char* Alphavit = NULL;
    char* sep = " , ";
    int k = 0;
    int i;
    char *line;
    QString path;
    QByteArray ba;
    path = QInputDialog::getText(this, "TRPO", "Введите текст сюда");
    ba = path.toLatin1();
        line = ba.data();
    zn2 = strtok_s(line, sep, &Alphavit);
    strcpy_s(zn1[k], maxword, zn2);
    while (zn2 != NULL) {
        ++k;
        zn2 = strtok_s(NULL, sep, &Alphavit);
        if (zn2 != NULL) strcpy_s(zn1[k], maxword, zn2);
    }
    printf("\n");
    qsort(zn1, k, maxword, (int(*)(const void*, const void*))strcmp);
    printf("Фамилии в алфавитном порядке: ");
    puts("");
    for (i = 0; i != k; ++i) {
        QString mama(zn1[i]);
        ui->textBrowser->insertPlainText(mama);
        ui->textBrowser->append("");
    }
}
