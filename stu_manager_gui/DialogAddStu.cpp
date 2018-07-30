#include "DialogAddStu.h"
#include "stu_manager_gui.h"

DialogAddStu::DialogAddStu(stu_manager_gui* pMainLayer, QWidget* pParent)
	:QDialog(pParent)
	, m_pMainLayer(pMainLayer)
{
	ui.setupUi(this);
	//添加响应
	QObject::connect(ui.m_pBtnCancel, SIGNAL(clicked()), this, SLOT(OnTouchCancel()));
	QObject::connect(ui.m_pBtnOK, SIGNAL(clicked()), this, SLOT(OnTouchOk()));

	QObject::connect(this, SIGNAL(MyShow(int)), m_pMainLayer, SLOT(OnMyShow(int)));
}

DialogAddStu::~DialogAddStu()
{

}


void DialogAddStu::OnTouchOk()
{
	//显示文件
	StuSqlOper::GetInstance()->AddStuInfo(ui.m_pEditStuNum->toPlainText().toInt(), ui.m_pEditStuName->toPlainText(), ui.m_pEditStuAge->toPlainText().toInt());
	if (nullptr != m_pMainLayer)
	{
		m_pMainLayer->OnTouchShow();
		//emit MyShow(77);
	}
}

void DialogAddStu::OnTouchCancel()
{
	hide();
}

