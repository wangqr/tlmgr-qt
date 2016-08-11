#include <QDir>
#include <QDebug>

#include "installerguicontroller.h"

InstallerGuiController::InstallerGuiController(QObject *parent) : QObject(parent)
{
	// get Info about OS
	const QString kernelType = QSysInfo::kernelType();
	const QString archType = QSysInfo::currentCpuArchitecture();
	if (kernelType == "linux"){
		clientKernelType = UNIX;
		if (archType == "x86_64"){
			clientOsType = LINUX_X86_64;
		}else if(archType == "i368"){
			clientOsType = LINUX_I386;
		}
	}else if(kernelType == "winnt"){
		clientKernelType = WIN;
		clientOsType =WIN_32;
	}
	switch(clientKernelType){
		case UNIX:{
			texliveRoot = new QDir(QString("/opt/texlive"));
			break;
		}
		case WIN:{
            texliveRoot = new QDir(QString("C:/texlive"));
			break;
		}
	}
	_texDir = new QDir(texliveRoot->filePath(RELEASE));
	_texMfLocal = new QDir(texliveRoot->filePath("texmf-local"));
	_texMfSysVar = new QDir(_texDir->filePath("texmf-var"));
	_texMfSysConfig = new QDir(_texDir->filePath("texmf-config"));
	_texMfHome = new QDir(QDir::home().filePath("texmf"));
}

KERNEL_TYPE InstallerGuiController::kernelType() const{
	return clientKernelType;
}

QString InstallerGuiController::texDir() const{
    return QDir::toNativeSeparators(_texDir->absolutePath());
}

QString InstallerGuiController::texMfLocal() const
{
	return QDir::toNativeSeparators(_texMfLocal->absolutePath());
}

QString InstallerGuiController::texMfSysVar() const
{
	return QDir::toNativeSeparators(_texMfSysVar->absolutePath());
}

QString InstallerGuiController::texMfSysConfig() const
{
	return QDir::toNativeSeparators(_texMfSysConfig->absolutePath());
}

QString InstallerGuiController::texMfHome() const
{
	QString homePath = _texMfHome->absolutePath();
	if (homePath.startsWith(QDir::homePath(), Qt::CaseSensitivity::CaseInsensitive)){
		return QDir::toNativeSeparators("~/texmf");
	}
	return QDir::toNativeSeparators(_texMfHome->absolutePath());
}
