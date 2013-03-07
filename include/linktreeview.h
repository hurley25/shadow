// =====================================================================================
// 
//       Filename:  linktreeview.h
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

#ifndef LINKREEVIEW_H_
#define LINKREEVIEW_H_

#include <QTreeView>

class QStandardItemModel;

class LinkTreeView : public QTreeView
{
	Q_OBJECT

public:
	LinkTreeView();
	~LinkTreeView();

private:
	QStandardItemModel *mainModel;
};

#endif	// LINKTREEVIEW_H_
