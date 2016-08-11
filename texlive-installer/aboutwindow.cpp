#include "aboutwindow.h"
#include "ui_aboutwindow.h"
#include <QtDebug>

AboutWindow::AboutWindow(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::AboutWindow)
{
	ui->setupUi(this);
}

AboutWindow::~AboutWindow()
{
	delete ui;
}

void AboutWindow::on_buttonBox_clicked(QAbstractButton *button)
{
    this->close();
}
