#pragma once
#include <QDialog>
#include <ui_DialogDelStuInfoui.h>
#include "StuSqlOper.h"

class stu_manager_gui;
class DialogDelStu : public QDialog
{
	Q_OBJECT
public:
	DialogDelStu(stu_manager_gui* pMainLayer = nullptr, QWidget* pParent = Q_NULLPTR);
	~DialogDelStu();
public slots:
	void OnTouchOk();
	void OnTouchCancel();
private:
	Ui::DialogDelStu ui;
	stu_manager_gui*			m_pMainLayer;
};



