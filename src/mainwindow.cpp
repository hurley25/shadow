// =====================================================================================
// 
//       Filename:  mainwindow.cpp
//
//    Description:  主窗口的类实现文件
//
//        Version:  1.0
//        Created:  2013年03月05日 21时11分08秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include <QtGui>

#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)	
{
	// 设置窗口大小
	this->setFixedSize(800, 600);
	createMainWeiget();
	createActions();
	createMenus();
	createToolBars();
	createStatusBar();

	setWindowIcon(QIcon(":/res/ico/main.ico"));
	setWindowTitle(tr("Shadow -- Alpha 1"));
}

MainWindow::~MainWindow()	
{

}

void MainWindow::about()
{
	QMessageBox::about(this, tr("关于 Shadow"),
			tr("<h2>Shadow 远程控制</h2>"
				"<p>Copyright (C) 2013 hurley liuhuan1992@gmail.com"
				"<p><h3>一个基于 Windows NT 平台的远程控制软件，GUI By Qt4.X 。</h3>"
				"<p>严正声明：本程序仅用于技术研究，任何集体和个人使用该"
				"程序造成的任何违法后果由使用者个人承担！"));
}

void MainWindow::createMainWeiget()
{

}

void MainWindow::createActions()
{
	auto_connAction = new QAction(tr("自动上线"), this);
	auto_connAction->setIcon(QIcon(":/res/images/auto_conn.png"));
	auto_connAction->setStatusTip(tr("自动上线设置"));

	capture_screenAction = new QAction(tr("屏幕捕获"), this);
	capture_screenAction->setIcon(QIcon(":/res/images/capture_screen.png"));
	capture_screenAction->setStatusTip(tr("捕获被控端的屏幕"));

	camareAction = new QAction(tr("开启摄像头"), this);
	camareAction->setIcon(QIcon(":/res/images/camare.png"));
	camareAction->setStatusTip(tr("开启被控端的摄像头"));

	configAction = new QAction(tr("服务端配置"), this);
	configAction->setIcon(QIcon(":/res/images/config.png"));
	configAction->setStatusTip(tr("服务端配置"));

	settingAction = new QAction(tr("软件设置"), this);
	settingAction->setIcon(QIcon(":/res/images/auto_conn.png"));
	settingAction->setStatusTip(tr("软件设置"));

	minAction = new QAction(tr("最小化窗口"), this);
	minAction->setIcon(QIcon(":/res/images/min.png"));
	minAction->setStatusTip(tr("最小化程序窗口"));

	exitAction = new QAction(tr("退出程序"), this);
	exitAction->setIcon(QIcon(":/res/images/exit.png"));
	exitAction->setStatusTip(tr("退出程序"));

	aboutAction = new QAction(tr("关本于程序"), this);
	aboutAction->setIcon(QIcon(":/res/images/about.png"));
	aboutAction->setStatusTip(tr("关于本程序"));
	connect(aboutAction, SIGNAL(triggered()), this, SLOT(about()));
}

void MainWindow::createMenus()
{
	fileMenu = this->menuBar()->addMenu(tr("文件"));
	fileMenu->addAction(auto_connAction);
	fileMenu->addAction(capture_screenAction);
	fileMenu->addAction(camareAction);

	fileMenu->addSeparator();
	fileMenu->addAction(exitAction);

	setsMenu = this->menuBar()->addMenu(tr("设置"));
	setsMenu->addAction(configAction);
	setsMenu->addSeparator();
	setsMenu->addAction(settingAction);

	toolsMenu = this->menuBar()->addMenu(tr("工具"));

	helpMenu = this->menuBar()->addMenu(tr("帮助"));
	helpMenu->addAction(aboutAction);
}

void MainWindow::createToolBars()
{
	fileToolBar = addToolBar(tr("文件"));
	fileToolBar->setIconSize(QSize(60, 60));
	fileToolBar->addAction(auto_connAction);
	fileToolBar->addAction(capture_screenAction);
	fileToolBar->addAction(camareAction);

	workToolBar = addToolBar(tr("设置"));
	workToolBar->setIconSize(QSize(60, 60));
	workToolBar->addAction(configAction);

	infoToolBar = addToolBar(tr("其它"));
	infoToolBar->setIconSize(QSize(60, 60));
	infoToolBar->addAction(minAction);
	infoToolBar->addAction(exitAction);
}

void MainWindow::createStatusBar()
{
	statusLabel = new QLabel("Shadow -- Alpha 1");
	statusLabel->setAlignment(Qt::AlignHCenter);
	statusLabel->setMinimumSize(statusLabel->sizeHint());

	this->statusBar()->addWidget(statusLabel);
}
