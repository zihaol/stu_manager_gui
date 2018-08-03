#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_stu_manager_gui.h"
#include <QString>
#include <QSqlQueryModel>
#include "StuSqlOper.h"
#include "DialogAddStu.h"
#include "DialogDelStuInfoui.h"
#include "DialogChangeStuInfo.h"
#include "ShouShiCmd.h"
#include <QMouseEvent>
#include <QPoint>

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
	void OnTouchDelStu();
	void OntouchChangeStu();
	void OnMyShow(int nNum);
protected:
	//手势功能
	void mouseMoveEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
private:
	Ui::stu_manager_guiClass	ui;
	DialogAddStu*				m_pDialogAddStu;
	DialogDelStu*				m_pDialogDelStu;
	DialogChangeStu*			m_pDialogChangeStu;
	ShouShiCmd*					m_pShouShiCmd;
	//StuSqlOper*					m_pStuSqlOper;
};
