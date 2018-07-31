#pragma once
#include <QDialog>
#include "ui_DialogAddStuInfo.h"
#include "StuSqlOper.h"


class stu_manager_gui;
class DialogChangeStu : public QDialog
{
	Q_OBJECT
public:
	DialogChangeStu(stu_manager_gui* pMainLayer = nullptr ,QWidget* pParent = Q_NULLPTR);
	~DialogChangeStu();
public slots:
	void OnTouchOk();
	void OnTouchCancel();
private:
	stu_manager_gui*			m_pMainLayer;
	Ui::DialogAddStuInfo		ui;
};



