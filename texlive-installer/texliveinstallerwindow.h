#ifndef TEXLIVEINSTALLERWINDOW_H
#define TEXLIVEINSTALLERWINDOW_H

#include <QMainWindow>

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
	Ui::TexLiveInstallerWindow *ui;
};

#endif // TEXLIVEINSTALLERWINDOW_H
