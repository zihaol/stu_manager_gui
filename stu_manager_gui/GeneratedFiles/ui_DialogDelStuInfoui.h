/********************************************************************************
** Form generated from reading UI file 'DialogDelStuInfoui.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGDELSTUINFOUI_H
#define UI_DIALOGDELSTUINFOUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogDelStu
{
public:
    QLabel *label;
    QTextEdit *m_pEditDelStuID;
    QPushButton *m_pBtnOK;
    QPushButton *m_pBtnCancel;

    void setupUi(QDialog *DialogDelStu)
    {
        if (DialogDelStu->objectName().isEmpty())
            DialogDelStu->setObjectName(QStringLiteral("DialogDelStu"));
        DialogDelStu->resize(323, 144);
        label = new QLabel(DialogDelStu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 101, 31));
        QFont font;
        font.setPointSize(13);
        label->setFont(font);
        m_pEditDelStuID = new QTextEdit(DialogDelStu);
        m_pEditDelStuID->setObjectName(QStringLiteral("m_pEditDelStuID"));
        m_pEditDelStuID->setGeometry(QRect(170, 20, 104, 31));
        m_pBtnOK = new QPushButton(DialogDelStu);
        m_pBtnOK->setObjectName(QStringLiteral("m_pBtnOK"));
        m_pBtnOK->setGeometry(QRect(50, 90, 81, 31));
        m_pBtnOK->setFont(font);
        m_pBtnCancel = new QPushButton(DialogDelStu);
        m_pBtnCancel->setObjectName(QStringLiteral("m_pBtnCancel"));
        m_pBtnCancel->setGeometry(QRect(190, 90, 81, 31));
        m_pBtnCancel->setFont(font);

        retranslateUi(DialogDelStu);

        QMetaObject::connectSlotsByName(DialogDelStu);
    } // setupUi

    void retranslateUi(QDialog *DialogDelStu)
    {
        DialogDelStu->setWindowTitle(QApplication::translate("DialogDelStu", "\345\210\240\351\231\244", nullptr));
        label->setText(QApplication::translate("DialogDelStu", "\345\210\240\351\231\244\345\255\246\347\224\237ID:", nullptr));
        m_pBtnOK->setText(QApplication::translate("DialogDelStu", "\347\241\256\345\256\232", nullptr));
        m_pBtnCancel->setText(QApplication::translate("DialogDelStu", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDelStu: public Ui_DialogDelStu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGDELSTUINFOUI_H
