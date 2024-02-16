#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void timerEvent(QTimerEvent*e);

private slots:
    void on_startBtn_clicked();

    void on_stopBtn_clicked();

private:
    Ui::Widget *ui;
    int m_timerID;
};

#endif // WIDGET_H
