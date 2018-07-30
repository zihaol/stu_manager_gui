#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_stu_manager_gui.h"
#include <QString>
#include <QSqlQueryModel>
#include "StuSqlOper.h"
#include "DialogAddStu.h"

class stu_manager_gui : public QMainWindow
{
	Q_OBJECT

public:
	stu_manager_gui(QWidget *parent = Q_NULLPTR);
	void UpdateResult(QAbstractItemModel *pModel);
	//void setStuSqlOper(StuSqlOper* pStuSqlOper = nullptr) { m_pStuSqlOper = pStuSqlOper; }
public slots:
	void OnTouchShow();
	void OnTouchAddStu();
	void OnMyShow(int nNum);
private:
	Ui::stu_manager_guiClass	ui;
	DialogAddStu*				m_pDialogAddStu;
	//StuSqlOper*					m_pStuSqlOper;
};
