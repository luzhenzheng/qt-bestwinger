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

private slots:
    void on_oneBtn_clicked();

    void on_twoBtn_clicked();

    void on_threeBtn_clicked();

    void on_fourBtn_clicked();

    void on_fiveBtn_clicked();

    void on_sixBtn_clicked();

    void on_sevenBtn_clicked();

    void on_eightBtn_clicked();

    void on_nineBtn_clicked();

    void on_addBtn_clicked();

    void on_minusBtn_clicked();

    void on_multiBtn_clicked();

    void on_divideBtn_clicked();

    void on_clearBtn_clicked();

    void on_deleteBtn_clicked();

private:
    Ui::Widget *ui;
    QString expression;
};

#endif // WIDGET_H
