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

class QLabel;
class QSplitter;
class QMenu;
class QToolBar;
class QAction;
class QSpinBox;
class QLineEdit;
class QPushButton;

class QSplitter;
class QHBoxLayout;
class QVBoxLayout;

class LinkListWidget;
class MainTabWidget;

class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = 0);
	~MainWindow();

	void sleep(unsigned int msec);

protected:
	//void closeEvent(QCloseEvent *event);

private slots:
	void screenshot();
	void camare();
	void about();

private:
	void createMainWeiget();		// 创建主窗口
	void createActions();			// 创建动作
	void createMenus();				// 创建主菜单
	void createToolBars();			// 创建工具栏
	void createStatusBar();			// 创建状态栏

	QLabel *statusLabel;			// 状态栏文字

	QLabel *currLinkLabel;			// 主界面当前连接标签
	QLabel *currPortLabel;			// 主界面连接端口标签
	QLabel *passwordLabel;			// 主界面密码标签

	QLineEdit *currLinkIPEdit;		// 主界面当前连接输入框
	QSpinBox  *currPortSpin;		// 主界面连接端口输入框
	QLineEdit *passwordEdit;		// 主界面密码输入框

	QPushButton *linkButton;		// 手动连接按钮

	LinkListWidget *linkListWidget;	// 连接主机树形显示

	MainTabWidget *mainTabWidget;	// 标签管理

	QHBoxLayout *topLayout;			// 顶部分割窗口
	QSplitter *bottomSplitter;		// 底部切分窗口
	QVBoxLayout *mainLayout;		// 主分割窗口

	QWidget *mainWigget;			// 主窗口显示

	QMenu *fileMenu;				// 主菜单-文件子菜单指针
	QMenu *toolsMenu;				// 主菜单-工具子菜单指针
	QMenu *setsMenu;				// 主菜单-设置子菜单指针
	QMenu *helpMenu;				// 主菜单-帮助子菜单指针

	QToolBar *fileToolBar;			// 文件相关工具栏指针
	QToolBar *workToolBar;			// 设置相关工具栏指针
	QToolBar *infoToolBar;			// 帮助相关工具栏指针
	QToolBar *aboutToolBar;			// 关于相关工具栏指针

	QAction *auto_connAction;		// 自动上线
	QAction *screenShotAction;		// 屏幕捕获
	QAction *camareAction;			// 开启摄像头
	QAction *configAction;			// 服务端配置

	QAction *settingAction;			// 软件设置
	QAction *minAction;				// 最小化窗口
	QAction *exitAction;			// 退出程序
	QAction *aboutAction;			// 关本于程序
};

#endif // MAINWINDOW_H_