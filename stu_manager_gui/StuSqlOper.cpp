//管理系统所有数据操作
#include "StuSqlOper.h"

StuSqlOper* StuSqlOper::s_pStuOper = nullptr;

StuSqlOper::StuSqlOper()
{
	if (!ConnectDataBase())
	{
		return;
	}
	m_pOper = new QSqlQuery;
}

StuSqlOper::~StuSqlOper()
{
	delete m_pOper;
}

QSqlQuery* StuSqlOper::GetQueryOper()
{
	return m_pOper;
}

void StuSqlOper::GetAllStuInfo()
{
	m_pOper->prepare("select * from stu_info");
	m_pOper->exec();
}

void StuSqlOper::AddStuInfo(int nStuID, QString strName, int nAge)
{
	if (nullptr == m_pOper)
	{
		return;
	}
	m_pOper->prepare("exec addStuInfo ?, ?, ?");
	m_pOper->bindValue(0, nStuID);
	m_pOper->bindValue(1, strName.toStdString().c_str());
	m_pOper->bindValue(2, nAge);
	m_pOper->exec();
}

StuSqlOper* StuSqlOper::GetInstance()
{
	if (nullptr == s_pStuOper)
	{
		s_pStuOper = new StuSqlOper;
	}
	return s_pStuOper;
}

bool StuSqlOper::ConnectDataBase()
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
			//qDebug() << sqlDataBase.lastError().text();
			break;
		}
		else
		{
			//qDebug() << "open !!!!!";
			bRet = true;
		}
	} while (false);
	return bRet;
}

