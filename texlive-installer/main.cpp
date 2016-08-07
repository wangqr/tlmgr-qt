#include "texliveinstallerwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TexLiveInstallerWindow w;
	w.show();
	
	return a.exec();
}
