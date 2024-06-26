QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    createdogmodal.cpp \
    dogslist.cpp \
    main.cpp \
    mainwindow.cpp \
    viewdogwindow.cpp

HEADERS += \
    createdogmodal.h \
    database.h \
    dogslist.h \
    events.h \
    images.h \
    mainwindow.h \
    viewdogwindow.h

FORMS += \
    createdogmodal.ui \
    dogslist.ui \
    mainwindow.ui \
    viewdogwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
