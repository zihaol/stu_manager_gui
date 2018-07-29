/********************************************************************************
** Form generated from reading UI file 'DialogAddStuInfo.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGADDSTUINFO_H
#define UI_DIALOGADDSTUINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogAddStuInfo
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QTextEdit *m_pEditStuNum;
    QTextEdit *m_pEditStuName;
    QTextEdit *m_pEditStuAge;
    QPushButton *m_pBtnOK;
    QPushButton *m_pBtnCancel;

    void setupUi(QDialog *DialogAddStuInfo)
    {
        if (DialogAddStuInfo->objectName().isEmpty())
            DialogAddStuInfo->setObjectName(QStringLiteral("DialogAddStuInfo"));
        DialogAddStuInfo->setWindowModality(Qt::WindowModal);
        DialogAddStuInfo->resize(357, 265);
        DialogAddStuInfo->setSizeGripEnabled(false);
        DialogAddStuInfo->setModal(false);
        label = new QLabel(DialogAddStuInfo);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 30, 81, 31));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(DialogAddStuInfo);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 70, 81, 31));
        label_2->setFont(font);
        label_3 = new QLabel(DialogAddStuInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 110, 81, 31));
        label_3->setFont(font);
        m_pEditStuNum = new QTextEdit(DialogAddStuInfo);
        m_pEditStuNum->setObjectName(QStringLiteral("m_pEditStuNum"));
        m_pEditStuNum->setGeometry(QRect(150, 30, 151, 31));
        m_pEditStuName = new QTextEdit(DialogAddStuInfo);
        m_pEditStuName->setObjectName(QStringLiteral("m_pEditStuName"));
        m_pEditStuName->setGeometry(QRect(150, 70, 151, 31));
        m_pEditStuAge = new QTextEdit(DialogAddStuInfo);
        m_pEditStuAge->setObjectName(QStringLiteral("m_pEditStuAge"));
        m_pEditStuAge->setGeometry(QRect(150, 110, 151, 31));
        m_pBtnOK = new QPushButton(DialogAddStuInfo);
        m_pBtnOK->setObjectName(QStringLiteral("m_pBtnOK"));
        m_pBtnOK->setGeometry(QRect(40, 190, 91, 41));
        QFont font1;
        font1.setPointSize(13);
        m_pBtnOK->setFont(font1);
        m_pBtnCancel = new QPushButton(DialogAddStuInfo);
        m_pBtnCancel->setObjectName(QStringLiteral("m_pBtnCancel"));
        m_pBtnCancel->setGeometry(QRect(230, 190, 91, 41));
        m_pBtnCancel->setFont(font1);

        retranslateUi(DialogAddStuInfo);

        QMetaObject::connectSlotsByName(DialogAddStuInfo);
    } // setupUi

    void retranslateUi(QDialog *DialogAddStuInfo)
    {
        DialogAddStuInfo->setWindowTitle(QApplication::translate("DialogAddStuInfo", "\346\267\273\345\212\240\345\255\246\347\224\237", nullptr));
        label->setText(QApplication::translate("DialogAddStuInfo", "\345\255\246\347\224\237\345\255\246\345\217\267:", nullptr));
        label_2->setText(QApplication::translate("DialogAddStuInfo", "\345\255\246\347\224\237\345\220\215\345\255\227:", nullptr));
        label_3->setText(QApplication::translate("DialogAddStuInfo", "\345\255\246\347\224\237\345\271\264\351\276\204:", nullptr));
        m_pBtnOK->setText(QApplication::translate("DialogAddStuInfo", "\346\267\273\345\212\240", nullptr));
        m_pBtnCancel->setText(QApplication::translate("DialogAddStuInfo", "\345\217\226\346\266\210", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAddStuInfo: public Ui_DialogAddStuInfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGADDSTUINFO_H
