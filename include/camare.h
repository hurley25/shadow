// =====================================================================================
// 
//	   Filename:  camare.h
//
//	Description:  摄像头处理类头文件
//
//		Version:  1.0
//		Created:  2013年03月07日 18时31分20秒
//	   Revision:  none
//	   Compiler:  cl
//
//		 Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//		Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#ifndef CAMARAGET_H_
#define CAMARAGET_H_

#include <QWidget>

class QWidget;
class QImage;
class QTimer;
class QLabel;

#include <highgui.h>  //包含opencv库头文件
#include <cv.h>

class CamaraGet : public QWidget
{
	Q_OBJECT

public:
	CamaraGet(QWidget * parent = 0);
	~CamaraGet();

	void setLabel(QLabel * label);

private slots:
	void openCamara();      	// 打开摄像头
	void readFarme();       	// 读取当前帧信息
	void closeCamara();     	// 关闭摄像头
	void takingPictures();  	// 拍照

private:
	QTimer     *timer;
	QImage     *imag;
	QLabel	   *label;
	CvCapture  *cam;			// 视频获取结构， 用来作为视频获取函数的一个参数
	IplImage   *frame;			// 申请IplImage类型指针，就是申请内存空间来存放每一帧图像
};

#endif // CAMARAGET_H_