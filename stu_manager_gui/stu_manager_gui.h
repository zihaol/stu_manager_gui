#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_stu_manager_gui.h"
#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>
#include <QString>
#include <QDebug>
#include <QSqlQueryModel>

class stu_manager_gui : public QMainWindow
{
	Q_OBJECT

public:
	stu_manager_gui(QWidget *parent = Q_NULLPTR);
	bool ConnectDataBase();
	//对应操作回调
public slots:
	void OnTouchShow();
private:
	Ui::stu_manager_guiClass ui;
	//QSqlDatabase			m_sqlDataBase;
};
