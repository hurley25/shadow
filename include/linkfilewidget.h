// =====================================================================================
// 
//       Filename:  LinkFileWidget.h
//
//    Description:  文件管理标签 Widget
//
//        Version:  1.0
//        Created:  2013年03月11日 09时07分05秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef LINKFILEWIDGET_H_
#define LINKFILEWIDGET_H_

#include <QWidget>

class QAction;
class QToolBar;
class QVBoxLayout;

class FileTreeView;

class LinkFileWidget : public QWidget
{
	Q_OBJECT

public:
	LinkFileWidget();
	~LinkFileWidget();

	void createActions();			// 创建动作
	void createToolBars();			// 创建工具栏
	void createMainWeiget();		// 创建主显示

private:
	QAction *cutAction;				// 文件剪切动作
	QAction *copyAction;			// 文件复制动作
	QAction *pasteAction;			// 文件粘贴动作
	QAction *deleteAction;			// 文件删除动作
	QAction *uploadAction;			// 文件上传动作
	QAction *downloadAction;		// 文件下载动作
	
	QToolBar *fileToolBar;			// 文件显示的工具栏
	FileTreeView *fileTreeView;		// 文件浏览显示

	QVBoxLayout *fileListLayout;	// 文件浏览标签的窗口控制
};

#endif	// LINKFILEWIDGET_H_
