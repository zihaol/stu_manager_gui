#include "stu_manager_gui.h"

stu_manager_gui::stu_manager_gui(QWidget *parent)
	: QMainWindow(parent)
{
	//连接数据库
	if (!ConnectDataBase())
	{
		return;
	}
	ui.setupUi(this);
	//设置响应
	QObject::connect(ui.m_pActionShowStu, SIGNAL(triggered()), this, SLOT(OnTouchShow()));
}


bool stu_manager_gui::ConnectDataBase()
{
	bool bRet = false;
	do 
	{
		QSqlDatabase sqlDataBase = QSqlDatabase::addDatabase("QODBC");
		QString strDsn = QString::fromLocal8Bit("QTDSN");
		sqlDataBase.setHostName("localhost");
		sqlDataBase.setDatabaseName(strDsn);
		sqlDataBase.setUserName("sa");
		sqlDataBase.setPassword("123456");
		if (!sqlDataBase.open())
		{
			qDebug() << sqlDataBase.lastError().text();
			break;
		}
		else
		{
			qDebug() << "open !!!!!";
			bRet = true;
		}
	} while (false);
	return bRet;
}

void stu_manager_gui::OnTouchShow()
{

	//执行一条插入
	QSqlQuery query;
	//query.exec("select * from stu_info");
	QSqlQueryModel* pModel = new QSqlQueryModel(ui.m_pTableViewResult);
	pModel->setQuery(query);
	//ui.m_pTableViewResult->setModel(pModel);
	query.prepare("exec addStuInfo ?, ?, ?");
	query.bindValue(0, 111);
	query.bindValue(1, "sqlProc");
	query.bindValue(2, 123);
	query.exec();
	pModel->setQuery(query);
	ui.m_pTableViewResult->setModel(pModel);


}
