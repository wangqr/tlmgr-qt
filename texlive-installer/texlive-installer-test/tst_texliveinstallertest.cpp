#include <QString>
#include <QtTest>
#include <QCoreApplication>
#include <QtDebug>

#include "installerguicontroller.h"

class TexliveInstallerTest : public QObject
{
	Q_OBJECT
	
public:
	TexliveInstallerTest();
	
private Q_SLOTS:
	void initTestCase();
	void cleanupTestCase();
	void testCase1();
};

TexliveInstallerTest::TexliveInstallerTest()
{
}

void TexliveInstallerTest::initTestCase()
{
}

void TexliveInstallerTest::cleanupTestCase()
{
}

void TexliveInstallerTest::testCase1()
{
	InstallerGuiController guiController(this);
	
    if(guiController.kernelType() == WIN){
        QVERIFY(guiController.texDir() == QString("C:\\texlive\\2016"));
        QVERIFY(guiController.texMfLocal() == QString("C:\\texlive\\texmf-local"));
        QVERIFY(guiController.texMfSysVar() == QString("C:\\texlive\\2016\\texmf-var"));
        QVERIFY(guiController.texMfSysConfig() == QString("C:\\texlive\\2016\\texmf-config"));
		QCOMPARE(guiController.texMfHome(), QString("~\\texmf"));   
    }else if(guiController.kernelType() == UNIX ){
		QCOMPARE(guiController.texDir() , QString("/opt/texlive/2016"));
        QCOMPARE(guiController.texMfLocal() , QString("/opt/texlive/texmf-local"));
        QCOMPARE(guiController.texMfSysVar() , QString("/opt/texlive/2016/texmf-var"));
        QCOMPARE(guiController.texMfSysConfig() , QString("/opt/texlive/2016/texmf-config"));
        QCOMPARE(guiController.texMfHome(), QString("~/texmf"));
    }

}

QTEST_MAIN(TexliveInstallerTest)

#include "tst_texliveinstallertest.moc"
