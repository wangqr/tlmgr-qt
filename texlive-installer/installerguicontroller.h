#ifndef INSTALLERGUICONTROLLER_H
#define INSTALLERGUICONTROLLER_H

#include <QObject>
#include <QDir>
#include <QString>

/** 
 * These enum tends to be used only for this class.
 */
enum OS_TYPE{
	LINUX_X86_64,
	LINUX_I386,
	WIN_32
};

enum KERNEL_TYPE{
	UNIX,
	WIN
};

class InstallerGuiController : public QObject
{
	Q_OBJECT
public:
	explicit InstallerGuiController(QObject *parent = 0);
	
	const char* const RELEASE = "2016";
	KERNEL_TYPE kernelType() const;
	
	QString texDir() const;	
	QString texMfLocal() const;
	
	QString texMfSysVar() const;
	
	QString texMfSysConfig() const;
	
	QString texMfHome() const;
	
signals:
	
public slots:
	
private:
	OS_TYPE clientOsType;
	KERNEL_TYPE clientKernelType;
	
	QDir* texliveRoot;
	QDir* _texDir,
		* _texMfLocal,
		* _texMfSysVar,
		* _texMfSysConfig,
		* _texMfHome;
};

#endif // INSTALLERGUICONTROLLER_H
