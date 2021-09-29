#ifndef ROLE_H
#define ROLE_H

#include <QWidget>
#include <QPainter>
#include <QPixmap>
#include <QTimer>
#include <math.h>

class ROLE : public QWidget
{
    Q_OBJECT
public:
    explicit ROLE(QWidget *parent = 0);
    ~ROLE();
public:
    void paintEvent(QPaintEvent *);

private:
    int i;
    int j;
    QTimer *srcTimer;
    QString srcImg[3];

};

#endif // ROLE_H
