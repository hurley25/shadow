// =====================================================================================
// 
//       Filename:  LinkControlWidget.h
//
//    Description:  命令管理标签 Widget
//
//        Version:  1.0
//        Created:  2013年03月15日 17时48分05秒
//       Revision:  none
//       Compiler:  cl
//
//         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//        Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef LINKCONTROLWIDGET_H_
#define LINKCONTROLWIDGET_H_

#include <QWidget>

class QHBoxLayout;
class QVBoxLayout;
class QPushButton;

class LinkControlWidget : public QWidget
{
	Q_OBJECT

public:
	LinkControlWidget();
	~LinkControlWidget();

	void createMainWeiget();		// 创建主显示

private:

};

#endif	// LINKCONTROLWIDGET_H_
