#include "selectcollectiondialog.h"
#include "ui_selectcollectiondialog.h"

SelectCollectionDialog::SelectCollectionDialog(QWidget *parent) :
	QDialog(parent),
	ui(new Ui::SelectCollectionDialog)
{
	ui->setupUi(this);
	//TODO: move this string to a text file.
	this->setStyleSheet(
	"QCheckBox::indicator:hover {\
		background-color:rgb(25, 236, 255);\
	}\
	QCheckBox::hover {\
		background-color: white;\
	}");
}

SelectCollectionDialog::~SelectCollectionDialog()
{
	delete ui;
}


void SelectCollectionDialog::on_cancelBt_clicked()
{
    this->close();
}
