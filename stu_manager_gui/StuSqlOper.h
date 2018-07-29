#pragma once
#include <QSql>
#include <QSqlError>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QString>
#include <QSqlQueryModel>

class StuSqlOper
{
public:
	static StuSqlOper* GetInstance();
	~StuSqlOper();
	bool ConnectDataBase();
	QSqlQuery* GetQueryOper();
	void GetAllStuInfo();
	void AddStuInfo(int nStuID, QString strName, int nAge);
private:
	QSqlQuery*	m_pOper;
	static StuSqlOper* s_pStuOper;
	StuSqlOper();
};


