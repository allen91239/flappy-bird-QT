#ifndef FLOOR_H
#define FLOOR_H

#include <QWidget>
#include <QTimer>

class floors : public QWidget
{
    Q_OBJECT
public:
    explicit floors(QWidget *parent = 0);
    ~floors();
protected:
    void paintEvent(QPaintEvent *);
private:
    QTimer *floortimer;
    int j;
signals:

public slots:
};

#endif // FLOOR_H
