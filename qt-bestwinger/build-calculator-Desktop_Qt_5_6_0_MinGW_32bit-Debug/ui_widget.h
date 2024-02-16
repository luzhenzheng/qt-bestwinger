/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QPushButton *oneBtn;
    QPushButton *minusBtn;
    QPushButton *twoBtn;
    QPushButton *threeBtn;
    QPushButton *clearBtn;
    QPushButton *addBtn;
    QPushButton *eightBtn;
    QPushButton *sevenBtn;
    QPushButton *fourBtn;
    QPushButton *fiveBtn;
    QPushButton *multiBtn;
    QPushButton *deleteBtn;
    QPushButton *sixBtn;
    QPushButton *divideBtn;
    QPushButton *nineBtn;
    QPushButton *equalBtn;
    QPushButton *pushButton_17;
    QPushButton *pushButton_19;
    QPushButton *zeroBtn;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(505, 427);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(40, 10, 211, 31));
        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(40, 40, 211, 261));
        gridLayout = new QGridLayout(widget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        oneBtn = new QPushButton(widget);
        oneBtn->setObjectName(QStringLiteral("oneBtn"));
        oneBtn->setMinimumSize(QSize(40, 40));
        oneBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(oneBtn, 1, 0, 1, 2);

        minusBtn = new QPushButton(widget);
        minusBtn->setObjectName(QStringLiteral("minusBtn"));
        minusBtn->setMinimumSize(QSize(40, 40));
        minusBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(minusBtn, 0, 5, 1, 1);

        twoBtn = new QPushButton(widget);
        twoBtn->setObjectName(QStringLiteral("twoBtn"));
        twoBtn->setMinimumSize(QSize(40, 40));
        twoBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(twoBtn, 1, 3, 1, 2);

        threeBtn = new QPushButton(widget);
        threeBtn->setObjectName(QStringLiteral("threeBtn"));
        threeBtn->setMinimumSize(QSize(40, 40));
        threeBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(threeBtn, 1, 5, 1, 1);

        clearBtn = new QPushButton(widget);
        clearBtn->setObjectName(QStringLiteral("clearBtn"));
        clearBtn->setMinimumSize(QSize(40, 40));
        clearBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(clearBtn, 0, 0, 1, 2);

        addBtn = new QPushButton(widget);
        addBtn->setObjectName(QStringLiteral("addBtn"));
        addBtn->setMinimumSize(QSize(40, 40));
        addBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(addBtn, 0, 3, 1, 2);

        eightBtn = new QPushButton(widget);
        eightBtn->setObjectName(QStringLiteral("eightBtn"));
        eightBtn->setMinimumSize(QSize(40, 40));
        eightBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(eightBtn, 3, 3, 1, 1);

        sevenBtn = new QPushButton(widget);
        sevenBtn->setObjectName(QStringLiteral("sevenBtn"));
        sevenBtn->setMinimumSize(QSize(40, 40));
        sevenBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(sevenBtn, 3, 0, 1, 1);

        fourBtn = new QPushButton(widget);
        fourBtn->setObjectName(QStringLiteral("fourBtn"));
        fourBtn->setMinimumSize(QSize(40, 40));
        fourBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(fourBtn, 2, 0, 1, 2);

        fiveBtn = new QPushButton(widget);
        fiveBtn->setObjectName(QStringLiteral("fiveBtn"));
        fiveBtn->setMinimumSize(QSize(40, 40));
        fiveBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(fiveBtn, 2, 3, 1, 2);

        multiBtn = new QPushButton(widget);
        multiBtn->setObjectName(QStringLiteral("multiBtn"));
        multiBtn->setMinimumSize(QSize(40, 40));
        multiBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(multiBtn, 1, 6, 1, 1);

        deleteBtn = new QPushButton(widget);
        deleteBtn->setObjectName(QStringLiteral("deleteBtn"));
        deleteBtn->setMinimumSize(QSize(40, 40));
        deleteBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(deleteBtn, 0, 6, 1, 1);

        sixBtn = new QPushButton(widget);
        sixBtn->setObjectName(QStringLiteral("sixBtn"));
        sixBtn->setMinimumSize(QSize(40, 40));
        sixBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(sixBtn, 2, 5, 1, 1);

        divideBtn = new QPushButton(widget);
        divideBtn->setObjectName(QStringLiteral("divideBtn"));
        divideBtn->setMinimumSize(QSize(40, 40));
        divideBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(divideBtn, 2, 6, 1, 1);

        nineBtn = new QPushButton(widget);
        nineBtn->setObjectName(QStringLiteral("nineBtn"));
        nineBtn->setMinimumSize(QSize(40, 40));
        nineBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(nineBtn, 3, 5, 1, 1);

        equalBtn = new QPushButton(widget);
        equalBtn->setObjectName(QStringLiteral("equalBtn"));
        equalBtn->setMinimumSize(QSize(40, 40));
        equalBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(equalBtn, 3, 6, 1, 1);

        pushButton_17 = new QPushButton(widget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setMinimumSize(QSize(40, 40));
        pushButton_17->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_17, 4, 0, 1, 1);

        pushButton_19 = new QPushButton(widget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setMinimumSize(QSize(40, 40));
        pushButton_19->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(pushButton_19, 4, 5, 1, 1);

        zeroBtn = new QPushButton(widget);
        zeroBtn->setObjectName(QStringLiteral("zeroBtn"));
        zeroBtn->setMinimumSize(QSize(40, 40));
        zeroBtn->setMaximumSize(QSize(40, 40));

        gridLayout->addWidget(zeroBtn, 4, 3, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        oneBtn->setText(QApplication::translate("Widget", "1", 0));
        minusBtn->setText(QApplication::translate("Widget", "-", 0));
        twoBtn->setText(QApplication::translate("Widget", "2", 0));
        threeBtn->setText(QApplication::translate("Widget", "3", 0));
        clearBtn->setText(QApplication::translate("Widget", "C", 0));
        addBtn->setText(QApplication::translate("Widget", "+", 0));
        eightBtn->setText(QApplication::translate("Widget", "8", 0));
        sevenBtn->setText(QApplication::translate("Widget", "7", 0));
        fourBtn->setText(QApplication::translate("Widget", "4", 0));
        fiveBtn->setText(QApplication::translate("Widget", "5", 0));
        multiBtn->setText(QApplication::translate("Widget", "*", 0));
        deleteBtn->setText(QApplication::translate("Widget", "del", 0));
        sixBtn->setText(QApplication::translate("Widget", "6", 0));
        divideBtn->setText(QApplication::translate("Widget", "/", 0));
        nineBtn->setText(QApplication::translate("Widget", "9", 0));
        equalBtn->setText(QApplication::translate("Widget", "=", 0));
        pushButton_17->setText(QApplication::translate("Widget", "(", 0));
        pushButton_19->setText(QApplication::translate("Widget", ")", 0));
        zeroBtn->setText(QApplication::translate("Widget", "0", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
