# =====================================================================================
# 
#       Filename:  shadow.pro
#
#    Description:  为 Win32 环境书写的 Qt 项目文件
#
#        Created:  2013年03月05日 20时30分01秒
#
#         Author:  Hurley (LiuHuan), liuhuan1992@gmail.com
#        Company:  Class 1107 of Computer Science and Technology
#
# =====================================================================================

TEMPLATE = app
TARGET = 
DEPENDPATH += .
INCLUDEPATH += include \
				E:/OpenCV2.2/include \
				E:/OpenCV2.2/include/opencv

# debug control
#DEFINES+= QT_NO_DEBUG_OUTPUT

# Input

# lib file
LIBS += E:/OpenCV2.2/lib/*.lib

# include file
HEADERS +=  include/MainWindow.h include/Debug.h include/LinkListWidget.h include/FileTreeView.h  \
			include/MainTabWidget.h include/CamareGet.h include/CamareDialog.h include/ScreenShotDialog.h \
			include/ProcessTreeView.h include/ServerTreeView.h include/LinkFileWidget.h include/LinkProcessWidget.h \
			include/LinkServerWidget.h include/LinkCmdWidget.h include/LinkControlWidget.h

# code file
SOURCES +=  src/Main.cpp src/MainWindow.cpp src/LinkListWidget.cpp src/FileTreeView.cpp	\
			src/MainTabWidget.cpp src/CamareGet.cpp src/CamareDialog.cpp src/ScreenShotDialog.cpp \
			src/ProcessTreeView.cpp src/ServerTreeView.cpp src/LinkFileWidget.cpp src/LinkProcessWidget.cpp \
			src/LinkServerWidget.cpp src/LinkCmdWidget.cpp src/LinkControlWidget.cpp

# ui file
FORMS += ui/CamareDialog.ui ui/ScreenShotDialog.ui

RESOURCES += shadow.qrc
RC_FILE = logo.rc
