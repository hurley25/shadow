// =====================================================================================
// 
//       Filename:  mainwindow.h
//
//    Description:  主窗口的类声明头文件
//
//        Version:  1.0
//        Created:  2013年03月05日 21时11分58秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef MAINWINDOW_H_
#define MAINWINDOW_H_

#include <QMainWindow>

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

protected:
	//void closeEvent(QCloseEvent *event);
};

#endif // MAINWINDOW_H_