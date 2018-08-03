/********************************************************************************
** Form generated from reading UI file 'stu_manager_gui.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STU_MANAGER_GUI_H
#define UI_STU_MANAGER_GUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_stu_manager_guiClass
{
public:
    QAction *m_pActionAbout;
    QAction *m_pActionAddStu;
    QAction *m_pActionDelStu;
    QAction *m_pActionSearchStu;
    QAction *m_pActionChangeStu;
    QAction *m_pActionShowStu;
    QWidget *centralWidget;
    QTableView *m_pTableViewResult;
    QMenuBar *m_pMenuBar;
    QMenu *m_pMenuStu;
    QMenu *m_pMenuHelp;

    void setupUi(QMainWindow *stu_manager_guiClass)
    {
        if (stu_manager_guiClass->objectName().isEmpty())
            stu_manager_guiClass->setObjectName(QStringLiteral("stu_manager_guiClass"));
        stu_manager_guiClass->resize(600, 400);
        m_pActionAbout = new QAction(stu_manager_guiClass);
        m_pActionAbout->setObjectName(QStringLiteral("m_pActionAbout"));
        m_pActionAddStu = new QAction(stu_manager_guiClass);
        m_pActionAddStu->setObjectName(QStringLiteral("m_pActionAddStu"));
        m_pActionDelStu = new QAction(stu_manager_guiClass);
        m_pActionDelStu->setObjectName(QStringLiteral("m_pActionDelStu"));
        m_pActionSearchStu = new QAction(stu_manager_guiClass);
        m_pActionSearchStu->setObjectName(QStringLiteral("m_pActionSearchStu"));
        m_pActionChangeStu = new QAction(stu_manager_guiClass);
        m_pActionChangeStu->setObjectName(QStringLiteral("m_pActionChangeStu"));
        m_pActionShowStu = new QAction(stu_manager_guiClass);
        m_pActionShowStu->setObjectName(QStringLiteral("m_pActionShowStu"));
        centralWidget = new QWidget(stu_manager_guiClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        m_pTableViewResult = new QTableView(centralWidget);
        m_pTableViewResult->setObjectName(QStringLiteral("m_pTableViewResult"));
        m_pTableViewResult->setGeometry(QRect(15, 11, 401, 351));
        stu_manager_guiClass->setCentralWidget(centralWidget);
        m_pMenuBar = new QMenuBar(stu_manager_guiClass);
        m_pMenuBar->setObjectName(QStringLiteral("m_pMenuBar"));
        m_pMenuBar->setGeometry(QRect(0, 0, 600, 23));
        m_pMenuStu = new QMenu(m_pMenuBar);
        m_pMenuStu->setObjectName(QStringLiteral("m_pMenuStu"));
        m_pMenuHelp = new QMenu(m_pMenuBar);
        m_pMenuHelp->setObjectName(QStringLiteral("m_pMenuHelp"));
        stu_manager_guiClass->setMenuBar(m_pMenuBar);

        m_pMenuBar->addAction(m_pMenuStu->menuAction());
        m_pMenuBar->addAction(m_pMenuHelp->menuAction());
        m_pMenuStu->addAction(m_pActionShowStu);
        m_pMenuStu->addSeparator();
        m_pMenuStu->addAction(m_pActionAddStu);
        m_pMenuStu->addAction(m_pActionDelStu);
        m_pMenuStu->addAction(m_pActionSearchStu);
        m_pMenuStu->addAction(m_pActionChangeStu);
        m_pMenuHelp->addAction(m_pActionAbout);

        retranslateUi(stu_manager_guiClass);

        QMetaObject::connectSlotsByName(stu_manager_guiClass);
    } // setupUi

    void retranslateUi(QMainWindow *stu_manager_guiClass)
    {
        stu_manager_guiClass->setWindowTitle(QApplication::translate("stu_manager_guiClass", "\345\255\246\347\224\237\347\256\241\347\220\206\347\263\273\347\273\237", nullptr));
        m_pActionAbout->setText(QApplication::translate("stu_manager_guiClass", "\345\205\263\344\272\216", nullptr));
        m_pActionAddStu->setText(QApplication::translate("stu_manager_guiClass", "\346\267\273\345\212\240", nullptr));
        m_pActionDelStu->setText(QApplication::translate("stu_manager_guiClass", "\345\210\240\351\231\244", nullptr));
        m_pActionSearchStu->setText(QApplication::translate("stu_manager_guiClass", "\346\237\245\346\211\276", nullptr));
        m_pActionChangeStu->setText(QApplication::translate("stu_manager_guiClass", "\346\233\264\346\224\271", nullptr));
        m_pActionShowStu->setText(QApplication::translate("stu_manager_guiClass", "\346\230\276\347\244\272", nullptr));
        m_pMenuStu->setTitle(QApplication::translate("stu_manager_guiClass", "\345\237\272\346\234\254\344\277\241\346\201\257", nullptr));
        m_pMenuHelp->setTitle(QApplication::translate("stu_manager_guiClass", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class stu_manager_guiClass: public Ui_stu_manager_guiClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STU_MANAGER_GUI_H
