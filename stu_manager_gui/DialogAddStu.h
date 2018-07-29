#pragma once
#include <QDialog>
#include "ui_DialogAddStuInfo.h"
#include "StuSqlOper.h"

class stu_manager_gui;
class DialogAddStu : public QDialog
{
	Q_OBJECT
public:
	DialogAddStu(stu_manager_gui* pMainLayer = nullptr,QWidget* pParent = Q_NULLPTR);
	~DialogAddStu();
public slots:
	void OnTouchOk();
	void OnTouchCancel();
private:
	Ui::DialogAddStuInfo ui;
	stu_manager_gui*			m_pMainLayer;
};




