QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add.cpp \
    change_stu.cpp \
    main.cpp \
    mainwindow.cpp \
    stu_login.cpp \
    student.cpp

HEADERS += \
    add.h \
    change_stu.h \
    mainwindow.h \
    stu_login.h \
    student.h

FORMS += \
    add.ui \
    change_stu.ui \
    mainwindow.ui \
    stu_login.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc
