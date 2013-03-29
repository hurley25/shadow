// =====================================================================================
// 
//       Filename:  ProcessTreeView.h
//
//    Description:  进程浏览显示
//
//        Version:  1.0
//        Created:  2013年03月09日 19时45分01秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef PROCESSTREEVIEW_H_
#define PROCESSTREEVIEW_H_

#include <QTreeView>
#include <QString>

class QStandardItemModel;
class QModelIndex;

class ProcessTreeView : public QTreeView
{
	Q_OBJECT

public:
	ProcessTreeView();
	~ProcessTreeView();

	void rebuildInfo();

	void addOneProcessItem(QString strProcess, QString strPID, QString strMem, 
								QString strPart, QString strDes);

	void setNowSelectProcess(QModelIndex &index);

	QString getStrNowProcess();

private:
	QStandardItemModel *mainModel;
	QString strNowProcess;
	int iPosition;
};

#endif	// PROCESSTREEVIEW_H_
