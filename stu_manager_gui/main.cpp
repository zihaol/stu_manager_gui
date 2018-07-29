#include "stu_manager_gui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//StuSqlOper* pStuSqlOper = new StuSqlOper;
	stu_manager_gui w;
	//w.setStuSqlOper(pStuSqlOper);
	w.OnTouchShow();
	w.show();
	return a.exec();
}
