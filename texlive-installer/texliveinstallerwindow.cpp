#include "texliveinstallerwindow.h"
#include "ui_texliveinstallerwindow.h"
#include "aboutwindow.h"

#include <QDebug>
#include <QSysInfo>
#include <QDir>
#include <QFileDialog>

TexLiveInstallerWindow::TexLiveInstallerWindow(QWidget *parent) :
	QMainWindow(parent),
	ui(new Ui::TexLiveInstallerWindow),
	aboutWindow(new AboutWindow(parent)),
	selectCollectionWindow(new SelectCollectionDialog (parent))
{
	ui->setupUi(this);
	guiController = new InstallerGuiController(parent);
	
	ui->texDirPath->setText(guiController->texDir());
	ui->texMfLocalPath->setText(guiController->texMfLocal());
	ui->texMfSysVarPath -> setText(guiController->texMfSysVar());
	ui->texMfSysConfigPath -> setText(guiController->texMfSysConfig());
	ui->texMfHomePath ->setText(guiController->texMfHome());
}

TexLiveInstallerWindow::~TexLiveInstallerWindow()
{
	delete ui;
	delete aboutWindow;
	delete selectCollectionWindow;
	delete guiController;
}

void TexLiveInstallerWindow::selectDirectory(const QString& dialogTitle, QLineEdit *const directoryPath) 
{
	QString dir = QFileDialog::getExistingDirectory(
			this, 
			dialogTitle,
			QDir::homePath() ,
			QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks
	);
	if(!dir.isEmpty()){
		directoryPath->setText(dir);
	}
}

void TexLiveInstallerWindow::on_aboutBt_clicked()
{
    qDebug() << "Open about Window" ;
	aboutWindow->show();
}

void TexLiveInstallerWindow::on_changeTexDirBt_clicked()
{
    selectDirectory(tr("TEXDIR (the main TeX diretory)"), ui->texDirPath);
}

void TexLiveInstallerWindow::on_changeTexMfLocalBt_clicked()
{
     selectDirectory(tr("TEXMFLOCAL (directory for site-wide local files)"), ui->texMfLocalPath );
}

void TexLiveInstallerWindow::on_changeTexMfSysVar_clicked()
{
    selectDirectory(tr("TEXMFSYSVAR (directory for autogenerated data)"), ui->texMfSysVarPath );
}

void TexLiveInstallerWindow::on_changeTexMfSysConfigBt_clicked()
{
    selectDirectory(tr("TEXMFSYSCONFIG (directory for local config)"), ui->texMfSysVarPath );
}

void TexLiveInstallerWindow::on_changeTexMfHomeBt_clicked()
{
    selectDirectory(tr("TEXMFHOME (directory for user specific files)"), ui->texMfHomePath );
}

void TexLiveInstallerWindow::on_pushButton_clicked()
{
    qDebug() << "Open Select Collections Window";
    selectCollectionWindow -> show();
}
