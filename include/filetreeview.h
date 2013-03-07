// =====================================================================================
// 
//       Filename:  filetreeview.h
//
//    Description:  文件浏览显示
//
//        Version:  1.0
//        Created:  2013年03月06日 11时10分01秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef FILETREEVIEW_H_
#define FILETREEVIEW_H_

#include <QTreeView>

class QFileSystemModel;

class FileTreeView : public QTreeView
{
	Q_OBJECT

public:
	FileTreeView();
	~FileTreeView();

private:
	QFileSystemModel *fileModel;	// 系统文件显示模式
};

#endif	// FILETREEVIEW_H_
