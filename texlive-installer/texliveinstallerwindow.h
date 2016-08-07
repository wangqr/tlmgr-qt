#ifndef TEXLIVEINSTALLERWINDOW_H
#define TEXLIVEINSTALLERWINDOW_H

#include <QMainWindow>
#include "aboutwindow.h"

namespace Ui {
class TexLiveInstallerWindow;
}

class TexLiveInstallerWindow : public QMainWindow
{
	Q_OBJECT
	
public:
	explicit TexLiveInstallerWindow(QWidget *parent = 0);
	~TexLiveInstallerWindow();
	
private slots:
	void on_aboutBt_clicked();
	
private:
	Ui::TexLiveInstallerWindow *ui;
	AboutWindow* aboutWindow;
};

#endif // TEXLIVEINSTALLERWINDOW_H
