// =====================================================================================
// 
//       Filename:  filelistview.h
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

#ifndef FILELISTVIEW_H_
#define FILELISTVIEW_H_

#include <QListView>

class FileListView : public QListView
{
	Q_OBJECT

public:
	FileListView();
	~FileListView();

};

#endif	// FILELISTVIEW_H_
