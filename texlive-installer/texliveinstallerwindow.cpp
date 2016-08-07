#include "texliveinstallerwindow.h"
#include "ui_texliveinstallerwindow.h"
#include "aboutwindow.h"

#include <QDebug>

TexLiveInstallerWindow::TexLiveInstallerWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::TexLiveInstallerWindow),
	aboutWindow(new AboutWindow(parent))
{
	ui->setupUi(this);
}

TexLiveInstallerWindow::~TexLiveInstallerWindow()
{
	delete ui;
}

void TexLiveInstallerWindow::on_aboutBt_clicked()
{
    qDebug() << "test" ;
	aboutWindow->show();
}
