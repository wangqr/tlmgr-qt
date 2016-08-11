#ifndef SELECTCOLLECTIONDIALOG_H
#define SELECTCOLLECTIONDIALOG_H

#include <QDialog>

namespace Ui {
class SelectCollectionDialog;
}

class SelectCollectionDialog : public QDialog
{
	Q_OBJECT
	
public:
	explicit SelectCollectionDialog(QWidget *parent = 0);
	~SelectCollectionDialog();
	
private slots:

	
	void on_cancelBt_clicked();
	
private:
	Ui::SelectCollectionDialog *ui;
};

#endif // SELECTCOLLECTIONDIALOG_H
