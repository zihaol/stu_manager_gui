#include "stu_manager_gui.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	stu_manager_gui w;
	w.show();
	return a.exec();
}
