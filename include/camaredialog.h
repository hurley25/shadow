// =====================================================================================
// 
//	   Filename:  camaredialog.h
//
//	Description:  摄像头对话框头文件
//
//		Version:  1.0
//		Created:  2013年03月07日 20时12分20秒
//	   Revision:  none
//	   Compiler:  cl
//
//		 Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//		Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include "ui_camaredialog.h"

class CamaraGet;

class CamareDialog : public QDialog, public Ui::CamareDialog
{
	Q_OBJECT

protected:
	void closeEvent(QCloseEvent *event);

private slots:
	void CamareButton();

public:
	CamareDialog(QWidget *parent = 0);
	~CamareDialog();

private:
	CamaraGet *camaraGet;
};