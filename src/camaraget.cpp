// =====================================================================================
// 
//	   Filename:  camaraget.cpp
//
//	Description:  摄像头处理类实现文件
//
//		Version:  1.0
//		Created:  2013年03月07日 18时32分20秒
//	   Revision:  none
//	   Compiler:  cl
//
//		 Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
//		Company:  Class 1107 of Computer Science and Technology
// 
// =====================================================================================

#include <QWidget>
#include <QImage>
#include <QTimer>

#include "camaraget.h"

camaraGet::camaraGet(QWidget* parent):
{
	cam   = NULL;
	label = NULL;
	timer = new QTimer(this);
	imag  = new QImage();

	// 时间到，读取当前摄像头信息
	connect(timer, SIGNAL(timeout()), this, SLOT(readFarme()));
}

camaraGet::~camaraGet()
{

}

void camaraGet::setLabel(QLabel * label)
{
	this->label = label;
}

void camaraGet::openCamara()
{
	if (!label) {
		qDebug("没有设置显示图像的QLabel!");
		return;
	}

	// 打开摄像头，从摄像头中获取视频
	cam = cvCreateCameraCapture(0);

	// 开始计时，超时则发出timeout()信号
	timer->start(30);				
}

void camaraGet::readFarme()
{
	// 从摄像头中抓取并返回每一帧
	frame = cvQueryFrame(cam);

	// 将抓取到的帧，转换为QImage格式
	// QImage::Format_RGB888不同的摄像头用不同的格式
	QImageimage((constuchar*)frame->imageData,frame->width,frame->height,QImage::Format_RGB888);

	//将图片显示到label上
	label->setPixmap(QPixmap::fromImage(image));
}

void camaraGet::takingPictures()
{
	// 从摄像头中抓取并返回每一帧
	frame = cvQueryFrame(cam);

	// 将抓取到的帧，转换为QImage格式
	// QImage::Format_RGB888不同的摄像头用不同的格式
	QImageimage((constuchar*)frame->imageData,frame->width,frame->height,QImage::Format_RGB888);

	// 将图片显示到label上
	label->setPixmap(QPixmap::fromImage(image));
}

void camaraGet::closeCamara()
{
	// 停止读取数据
	timer->stop();

	// opencv 释放内存
	cvReleaseCapture(&cam);	
}
