#include "DialogDelStuInfoui.h"
#include "stu_manager_gui.h"

DialogDelStu::DialogDelStu(stu_manager_gui* pMainLayer, QWidget* pParent)
	: QDialog(pParent)
	, m_pMainLayer(pMainLayer)
{
	ui.setupUi(this);
	//¹ØÁª°´Å¥
	QObject::connect(ui.m_pBtnOK, SIGNAL(clicked()), this, SLOT(OnTouchOk()));
	QObject::connect(ui.m_pBtnCancel, SIGNAL(clicked()), this, SLOT(OnTouchCancel()));
}

DialogDelStu::~DialogDelStu()
{

}

void DialogDelStu::OnTouchOk()
{
	StuSqlOper::GetInstance()->DelStuInfo(ui.m_pEditDelStuID->toPlainText().toInt());
	m_pMainLayer->OnTouchShow();
}

void DialogDelStu::OnTouchCancel()
{
	hide();
}

