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

class QWidget;
class QToolBar;
class QTextEdit;
class QLineEdit;
class QLabel;
class FileTreeView;
class ProcessTreeView;
class ServerTreeView;
class QPushButton;
class QHBoxLayout;
class QVBoxLayout;

class MainTabWidget : public QTabWidget
{
	Q_OBJECT

public:
	MainTabWidget();
	~MainTabWidget();

	void createActions();			// 创建动作
	void createToolBars();			// 创建工具栏
	void createMainWeiget();		// 创建主显示

private:
	QWidget *fileListWidget;		// 文件浏览标签的显示控件
	QWidget *processWidget;			// 进程管理标签的显示控件
	QWidget *serverWidget;			// 服务管理标签的显示控件
	QWidget *linkControlWidget;		// 远程控制命令标签的显示控件
	QWidget *cmdWidget;				// 远程 cmd 标签的显示控件

	QAction *cutAction;				// 文件剪切动作
	QAction *copyAction;			// 文件复制动作
	QAction *pasteAction;			// 文件粘贴动作
	QAction *deleteAction;			// 文件删除动作
	QAction *uploadAction;			// 文件上传动作
	QAction *downloadAction;		// 文件下载动作
	
	QToolBar *fileToolBar;			// 文件显示的工具栏
	FileTreeView *fileListView;		// 文件浏览显示

	ProcessTreeView *processTreeView; 	// 进程显示列表
	QPushButton *getProcessButton;		// 获取进程列表按钮
	QPushButton *killProcessButton;		// 结束选中进程按钮

	ServerTreeView *serverTreeView;		// 服务显示列表
	QPushButton *getServerButton;		// 获取服务列表按钮
	QPushButton *runServerButton;		// 自动运行服务按钮
	QPushButton *killServerButton;		// 关闭选中服务按钮

	QTextEdit *cmdTextEdit;			// cmd 输出显示窗口
	QLabel *cmdLabel;				// 命令输入标签
	QLineEdit *cmdInputEdit;		// cmd 命令输入框
	QPushButton *sendButton;		// 发送 cmd 命令按钮

	QVBoxLayout *fileListLayout;		// 文件浏览标签的窗口控制
	QVBoxLayout *processLayout;			// 进程列表窗口控制
	QHBoxLayout *processButtonLayout;	// 进程列表底部窗口控制
	QVBoxLayout *serverLayout;			// 服务列表窗口控制
	QHBoxLayout *serverbuttonLayout;	// 服务列表底部窗口控制
	QVBoxLayout *cmdLayout;				// cmd 窗口控制
	QHBoxLayout *cmdButtonLayout;		// cmd 底部窗口控制
};

#endif	// TABWIDGET_H_
