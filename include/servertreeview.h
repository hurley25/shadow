// =====================================================================================
// 
//       Filename:  ServerTreeView.h
//
//    Description:  服务浏览显示
//
//        Version:  1.0
//        Created:  2013年03月09日 19时43分06秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef SERVERTREEVIEW_H_
#define SERVERTREEVIEW_H_

#include <QTreeView>
#include <QString>

class QStandardItemModel;
class QModelIndex;

class ServerTreeView : public QTreeView
{
	Q_OBJECT

public:
	ServerTreeView();
	~ServerTreeView();

	void rebuildInfo();

	void addOneServerItem(QString strServer, QString strPID, QString strDes, 
								QString strState, QString strWorkGroup);

	void setNowSelectServer(QModelIndex &index);

	QString getStrNowServer();

private:
	QStandardItemModel *mainModel;
	QString strNowServer;
	int iPosition;
};

#endif	// SERVERTREEVIEW_H_
