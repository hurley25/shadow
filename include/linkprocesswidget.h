// =====================================================================================
// 
//       Filename:  linkprocesswidget.h
//
//    Description:  进程管理标签 Widget
//
//        Version:  1.0
//        Created:  2013年03月11日 09时14分05秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef LINKPROCESSWIDGET_H_
#define LINKPROCESSWIDGET_H_

#include <QWidget>

class QPushButton;
class QVBoxLayout;
class QHBoxLayout;
class FileTreeView;

class ProcessTreeView;

class LinkProcessWidget : public QWidget
{
	Q_OBJECT

public:
	LinkProcessWidget();
	~LinkProcessWidget();
	
	void createMainWeiget();		// 创建主显示

private:
	ProcessTreeView *processTreeView; 	// 进程显示列表
	QPushButton *getProcessButton;		// 获取进程列表按钮
	QPushButton *killProcessButton;		// 结束选中进程按钮

	QVBoxLayout *processLayout;			// 进程列表窗口控制
	QHBoxLayout *processButtonLayout;	// 进程列表底部窗口控制
};

#endif	// LINKPROCESSWIDGET_H_
