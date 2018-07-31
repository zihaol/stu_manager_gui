#include "DialogChangeStuInfo.h"
#include "stu_manager_gui.h"

DialogChangeStu::DialogChangeStu(stu_manager_gui* pMainLayer, QWidget* pParent)
	: QDialog(pParent)
	, m_pMainLayer(pMainLayer)
{
	ui.setupUi(this);
	QObject::connect(ui.m_pBtnOK, SIGNAL(clicked()), this, SLOT(OnTouchOk()));
	QObject::connect(ui.m_pBtnCancel, SIGNAL(clicked()), this, SLOT(OnTouchCancel()));
}
DialogChangeStu::~DialogChangeStu()
{

}

void DialogChangeStu::OnTouchOk()
{
	int nID = ui.m_pEditStuNum->toPlainText().toInt();
	QString strName = ui.m_pEditStuName->toPlainText();
	int nAge = ui.m_pEditStuAge->toPlainText().toInt();
	StuSqlOper::GetInstance()->ChangeStuInfo(nID, strName.toStdString().c_str(), nAge);
	if (m_pMainLayer != nullptr)
	{
		m_pMainLayer->OnTouchShow();
	}
}

void DialogChangeStu::OnTouchCancel()
{
	hide();
}