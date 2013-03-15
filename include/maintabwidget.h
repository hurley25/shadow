// =====================================================================================
// 
//       Filename:  tabwidget.h
//
//    Description:  标签显示管理
//
//        Version:  1.0
//        Created:  2013年03月06日 14时06分05秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef TABWIDGET_H_
#define TABWIDGET_H_

#include <QTabWidget>

class LinkFileWidget;
class LinkProcessWidget;
class LinkServerWidget;
class LinkControlWidget;
class LinkCmdWidget;

class MainTabWidget : public QTabWidget
{
	Q_OBJECT

public:
	MainTabWidget();
	~MainTabWidget();

	void createMainWeiget();					// 创建主显示

private:
	LinkFileWidget *linkFileWidget;				// 文件浏览标签的显示控件
	LinkProcessWidget *linkProcessWidget;		// 进程管理标签的显示控件
	LinkServerWidget *linkServerWidget;			// 服务管理标签的显示控件
	LinkControlWidget *linkControlWidget;		// 远程控制命令标签的显示控件
	LinkCmdWidget *linkCmdWidget;				// 远程 cmd 标签的显示控件
};

#endif	// TABWIDGET_H_
