#include "start_page.h"
#include<QPixmap>
#include<QPainter>

start_page::start_page(QWidget *parent) : QWidget(parent)
{
    setFixedSize(380,450);
}

void start_page::paintEvent(QPaintEvent *)
{
    QPixmap stp;
    QPainter painter(this);
    stp.load(":/Image/bg1.png");
    painter.drawPixmap(0,0,380,450,stp);
}

start_page::~start_page()
{

}

