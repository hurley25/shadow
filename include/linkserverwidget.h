// =====================================================================================
// 
//       Filename:  LinkServerWidget.h
//
//    Description:  服务管理标签 Widget
//
//        Version:  1.0
//        Created:  2013年03月11日 09时26分05秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef LINKSERVERWIDGET_H_
#define LINKSERVERWIDGET_H_

#include <QWidget>

class QHBoxLayout;
class QVBoxLayout;
class QPushButton;
class ServerTreeView;

class LinkServerWidget : public QWidget
{
	Q_OBJECT

public:
	LinkServerWidget();
	~LinkServerWidget();

	void createMainWeiget();		// 创建主显示

private:
	ServerTreeView *serverTreeView;		// 服务显示列表
	QPushButton *getServerButton;		// 获取服务列表按钮
	QPushButton *runServerButton;		// 自动运行服务按钮
	QPushButton *killServerButton;		// 关闭选中服务按钮

	QVBoxLayout *serverLayout;			// 服务列表窗口控制
	QHBoxLayout *serverbuttonLayout;	// 服务列表底部窗口控制
};

#endif	// LINKSERVERWIDGET_H_
