// =====================================================================================
// 
//	   Filename:  screenshotdialog.h
//
//	Description:  捕获屏幕对话框头文件
//
//		Version:  1.0
//		Created:  2013年03月08日 21时12分25秒
//	   Revision:  none
//	   Compiler:  cl
//
//		 Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//		Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "ui_screenshotdialog.h"

class QPixmap;

class ScreenShotDialog : public QDialog, public Ui::ScreenShotDialog
{
	Q_OBJECT

public:
	ScreenShotDialog(QWidget *parent = 0);
	~ScreenShotDialog();

public slots:
	void newScreenShot();
	void saveScreenShot();
	void ScreenShotNative();

private:
	QPixmap originalPixmap;
};