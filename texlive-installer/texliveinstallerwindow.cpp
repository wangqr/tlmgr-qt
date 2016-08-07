#include "texliveinstallerwindow.h"
#include "ui_texliveinstallerwindow.h"

TexLiveInstallerWindow::TexLiveInstallerWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::TexLiveInstallerWindow)
{
	ui->setupUi(this);
}

TexLiveInstallerWindow::~TexLiveInstallerWindow()
{
	delete ui;
}
