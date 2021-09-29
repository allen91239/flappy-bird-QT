#include "bg.h"
#include <QPixmap>
#include <QPainter>
bg::bg(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(380, 450);
    s[0] = "./Image/font_0.png";
    s[1] = "./Image/font_1.png";
    s[2] = "./Image/font_2.png";
    s[3] = "./Image/font_3.png";
    s[4] = "./Image/font_4.png";
    s[5] = "./Image/font_5.png";
    s[6] = "./Image/font_6.png";
    s[7] = "./Image/font_7.png";
    s[8] = "./Image/font_8.png";
    s[9] = "./Image/font_9.png";
}
void bg::paintEvent(QPaintEvent *)
{
    QPixmap bgImg;
    QPixmap num1,num2,num3;
    QPainter painter(this);
    bgImg.load(":/Image/end.png");
    num1.load(s[(sc/100)%10]);
    num2.load(s[(sc/10)%10]);
    num3.load(s[sc%10]);
    painter.drawPixmap(0,0,380,450,bgImg);
    painter.drawPixmap(170,300,20,25,num1);
    painter.drawPixmap(190,300,20,25,num2);
    painter.drawPixmap(210,300,20,25,num3);
}

bg::~bg()
{

}

