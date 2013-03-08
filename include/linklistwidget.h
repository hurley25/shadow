// =====================================================================================
// 
//       Filename:  linklistwidget.h
//
//    Description:  自动上线主机显示
//
//        Version:  1.0
//        Created:  2013年03月07日 11时03分08秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef LINKLISTWIDGET_H_
#define LINKLISTWIDGET_H_

#include <QListWidget>

class QStandardItemModel;

class LinkListWidget : public QListWidget
{
	Q_OBJECT

public:
	LinkListWidget();
	~LinkListWidget();
};

#endif	// LINKLISTWIDGET_H_
