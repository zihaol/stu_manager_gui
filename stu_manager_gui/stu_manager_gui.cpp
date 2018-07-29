#include "stu_manager_gui.h"

stu_manager_gui::stu_manager_gui(QWidget *parent)
	: QMainWindow(parent)
	//, m_pStuSqlOper(pStuSqlOper)
{
	ui.setupUi(this);
	//创建子窗口
	m_pDialogAddStu = new DialogAddStu(this, this);
	//设置响应
	QObject::connect(ui.m_pActionShowStu, SIGNAL(triggered()), this, SLOT(OnTouchShow()));
	QObject::connect(ui.m_pActionAddStu, SIGNAL(triggered()), this, SLOT(OnTouchAddStu()));
}

void stu_manager_gui::OnTouchAddStu()
{
	if (nullptr == m_pDialogAddStu)
	{
		return;
	}
	m_pDialogAddStu->show();
}

//刷新结果
void stu_manager_gui::UpdateResult(QAbstractItemModel *pModel)
{
	do 
	{
		if (nullptr == pModel)
		{
			break;
		}

		if (ui.m_pTableViewResult != nullptr)
		{
			ui.m_pTableViewResult->setModel(pModel);
		}
	} while (false);
}

void stu_manager_gui::OnTouchShow()
{
	QSqlQueryModel* pModel = new QSqlQueryModel(ui.m_pTableViewResult);
	StuSqlOper::GetInstance()->GetAllStuInfo();
	pModel->setQuery(*(StuSqlOper::GetInstance()->GetQueryOper()));
	UpdateResult(pModel);
}
