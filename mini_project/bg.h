#ifndef BG_H
#define BG_H

#include <QWidget>

class bg : public QWidget
{
    Q_OBJECT
public:
    int sc;
    explicit bg(QWidget *parent = 0);
    ~bg();
protected:
    void paintEvent(QPaintEvent *);
private:
    QString s[10];
signals:

public slots:

};

#endif // BG_H
