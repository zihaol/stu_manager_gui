#include "stu_manager_gui.h"

stu_manager_gui::stu_manager_gui(QWidget *parent)
	: QMainWindow(parent)
	//, m_pStuSqlOper(pStuSqlOper)
{
	ui.setupUi(this);
	//创建子窗口
	m_pDialogAddStu = new DialogAddStu(this, this);
	m_pDialogDelStu = new DialogDelStu(this, this);
	m_pDialogChangeStu = new DialogChangeStu(this, this);
	m_pShouShiCmd = new ShouShiCmd();
	//设置响应
	QObject::connect(ui.m_pActionShowStu, SIGNAL(triggered()), this, SLOT(OnTouchShow()));
	QObject::connect(ui.m_pActionAddStu, SIGNAL(triggered()), this, SLOT(OnTouchAddStu()));
	QObject::connect(ui.m_pActionDelStu, SIGNAL(triggered()), this, SLOT(OnTouchDelStu()));
	QObject::connect(ui.m_pActionChangeStu, SIGNAL(triggered()), this, SLOT(OntouchChangeStu()));
}

void stu_manager_gui::OntouchChangeStu()
{

	if (m_pDialogChangeStu == nullptr)
	{
		return;
	}

	m_pDialogChangeStu->show();
}

void stu_manager_gui::OnMyShow(int nNum)
{
	int a = nNum;
	OnTouchShow();
}

void stu_manager_gui::mouseReleaseEvent(QMouseEvent *event)
{
	//if (event->type() == QMouseEvent::MouseMove)
	{
		if (m_pShouShiCmd != nullptr)
		{
			m_pShouShiCmd->MoveEnd();
			if (m_pShouShiCmd->GetCmd() == 1)
			{
				OnTouchAddStu();
			}
		}
	}
}
void stu_manager_gui::mouseMoveEvent(QMouseEvent *event)
{
	if (event->type() == QMouseEvent::MouseMove)
	{
		if (m_pShouShiCmd != nullptr)
		{
			m_pShouShiCmd->Move(&QPoint(event->x(), event->y()));
		}
	}
}

void stu_manager_gui::OnTouchDelStu()
{
	if (m_pDialogDelStu == nullptr)
	{
		return;
	}

	m_pDialogDelStu->show();
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

	////测试
	//m_pShouShiCmd->Move(&QPoint(0, 1));
	//m_pShouShiCmd->Move(&QPoint(0, -300));
	//m_pShouShiCmd->Move(&QPoint(300, -300));
	//m_pShouShiCmd->MoveEnd();
}
