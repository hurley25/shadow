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
INCLUDEPATH += include

# Input

# lib file
LIBS +=

# include file
HEADERS +=  include/mainwindow.h include/debug.h

# code file
SOURCES +=  src/main.cpp src/mainwindow.cpp

# ui file
FORMS += 

RESOURCES += shadow.qrc
RC_FILE = logo.rc
