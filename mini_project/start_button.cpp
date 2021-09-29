#include "start_button.h"
#include <QPixmap>
#include <QPainter>

start_button::start_button(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(80,50);
}

void start_button::paintEvent(QPaintEvent *)
{
    QPixmap btn;
    QPainter painter(this);
    btn.load(":/Image/Start_button.png");
    painter.drawPixmap(0,0,80,50,btn);
}

start_button::~start_button()
{

}

