#include "floor.h"
#include <QPixmap>
#include <QPainter>
floors::floors(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(410, 50);
    j = 0;
    floortimer = new QTimer (this);
    connect(floortimer,SIGNAL(timeout()),this,SLOT(update()));
    floortimer->start(500);
}
void floors::paintEvent(QPaintEvent *)
{
    QPixmap floorImg1;
    QPainter painter(this);
    floorImg1.load(":/Image/floor.png");
    painter.drawPixmap(j,0,450,50,floorImg1);
    j -= 3;
    if(j <= -8)
        j = 0;
}

floors::~floors()
{

}

