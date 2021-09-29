#ifndef START_BUTTON_H
#define START_BUTTON_H

#include <QWidget>

class start_button : public QWidget
{
    Q_OBJECT
public:
    explicit start_button(QWidget *parent = 0);
    ~start_button();
protected:
    void paintEvent(QPaintEvent *);
signals:

public slots:
};

#endif // START_BUTTON_H
