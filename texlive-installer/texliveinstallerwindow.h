#ifndef TEXLIVEINSTALLERWINDOW_H
#define TEXLIVEINSTALLERWINDOW_H

#include <QMainWindow>
#include <QLineEdit>

#include "aboutwindow.h"
#include "selectcollectiondialog.h"
#include "installerguicontroller.h"

namespace Ui {
class TexLiveInstallerWindow;
}



class TexLiveInstallerWindow : public QMainWindow
{
	Q_OBJECT
	
public:
	explicit TexLiveInstallerWindow(QWidget *parent = 0);
	~TexLiveInstallerWindow();
	
private:
	void selectDirectory(const QString& dialogTitle, QLineEdit* const directoryPath) ;
	
private slots:
	void on_aboutBt_clicked();
	
	void on_changeTexDirBt_clicked();
	
	void on_changeTexMfLocalBt_clicked();
	
	void on_changeTexMfSysVar_clicked();
	
	void on_changeTexMfSysConfigBt_clicked();
	
	void on_changeTexMfHomeBt_clicked();
	
	void on_pushButton_clicked();
	
private:
	Ui::TexLiveInstallerWindow *ui;
	AboutWindow* aboutWindow;
	SelectCollectionDialog* selectCollectionWindow;
	InstallerGuiController* guiController;
};

#endif // TEXLIVEINSTALLERWINDOW_H
