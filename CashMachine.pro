QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Cpp\adminpanel.cpp \
    Cpp\db.cpp \
    Cpp\errorpassword.cpp \
    Cpp\exceedingwithdrawalamount.cpp \
    Cpp\exitmessage.cpp \
    Cpp\main.cpp \
    Cpp\mainwindow.cpp \
    Cpp\nobills.cpp \
    Cpp\outofmoney.cpp \
    Cpp\password.cpp \
    Cpp\readerror.cpp \
    Cpp\successfuladd.cpp \
    Cpp\successfuldelete.cpp \
    Cpp\successfulupdate.cpp \
    Cpp\successfulwithdraw.cpp \
    Cpp\withdrawfunds.cpp

HEADERS += \
    Headers\adminpanel.h \
    Headers\cash.h \
    Headers\db.h \
    Headers\errorpassword.h \
    Headers\exceedingwithdrawalamount.h \
    Headers\exitmessage.h \
    Headers\mainwindow.h \
    Headers\nobills.h \
    Headers\outofmoney.h \
    Headers\password.h \
    Headers\readerror.h \
    Headers\successfuladd.h \
    Headers\successfuldelete.h \
    Headers\successfulupdate.h \
    Headers\successfulwithdraw.h \
    Headers\withdrawfunds.h

FORMS += \
    Ui\adminpanel.ui \
    Ui\errorpassword.ui \
    Ui\exceedingwithdrawalamount.ui \
    Ui\exitmessage.ui \
    Ui\mainwindow.ui \
    Ui\nobills.ui \
    Ui\outofmoney.ui \
    Ui\password.ui \
    Ui\readerror.ui \
    Ui\successfuladd.ui \
    Ui\successfuldelete.ui \
    Ui\successfulupdate.ui \
    Ui\successfulwithdraw.ui \
    Ui\withdrawfunds.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    sources.qrc
