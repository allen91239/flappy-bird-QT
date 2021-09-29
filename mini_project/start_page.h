#ifndef START_PAGE_H
#define START_PAGE_H

#include <QWidget>

class start_page : public QWidget
{
    Q_OBJECT
public:
    explicit start_page(QWidget *parent = 0);
    ~start_page();
protected:
    void paintEvent(QPaintEvent *);
signals:

public slots:
};

#endif // START_PAGE_H
