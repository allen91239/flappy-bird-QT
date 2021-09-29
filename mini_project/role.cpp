#include "role.h"

ROLE::ROLE(QWidget *parent) : QWidget(parent)
{
    this->setFixedSize(35,35);
    i = 0;
    j = 1;
    srcImg[0]=":/Image/bird1.png";
    srcImg[1]=":/Image/bird2.png";
    srcImg[2]=":/Image/bird3.png";
    srcTimer = new QTimer(this);
    connect(srcTimer, SIGNAL(timeout()), this, SLOT());
    srcTimer->start(10000);
}

ROLE::~ROLE()
{

}

void ROLE::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    QPixmap pix;
    if(i==1){
        pix.load(srcImg[0]);
        painter.drawPixmap(0,0,35,35,srcImg[0]);
        i++;
    }else if(i==2){
        pix.load(srcImg[1]);
        painter.drawPixmap(0,0,35,35,srcImg[1]);
        i++;
    }else{
        pix.load(srcImg[2]);
        painter.drawPixmap(0,0,35,35,srcImg[2]);
        i=1;
    }
}

