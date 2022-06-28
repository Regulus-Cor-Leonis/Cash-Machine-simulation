QT       += core gui
QT += sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    adminpanel.cpp \
    cash.cpp \
    cash_withdrawal.cpp \
    db.cpp \
    errorpassword.cpp \
    exceedingwithdrawalamount.cpp \
    exitmessage.cpp \
    main.cpp \
    mainwindow.cpp \
    nobills.cpp \
    outofmoney.cpp \
    password.cpp \
    readerror.cpp \
    successfuladd.cpp \
    successfuldelete.cpp \
    successfulupdate.cpp \
    successfulwithdraw.cpp \
    withdrawfunds.cpp

HEADERS += \
    adminpanel.h \
    cash.h \
    cash_withdrawal.h \
    db.h \
    errorpassword.h \
    exceedingwithdrawalamount.h \
    exitmessage.h \
    mainwindow.h \
    mainwindow.h \
    nobills.h \
    outofmoney.h \
    password.h \
    readerror.h \
    successfuladd.h \
    successfuldelete.h \
    successfulupdate.h \
    successfulwithdraw.h \
    withdrawfunds.h

FORMS += \
    adminpanel.ui \
    errorpassword.ui \
    exceedingwithdrawalamount.ui \
    exitmessage.ui \
    mainwindow.ui \
    nobills.ui \
    outofmoney.ui \
    password.ui \
    readerror.ui \
    successfuladd.ui \
    successfuldelete.ui \
    successfulupdate.ui \
    successfulwithdraw.ui \
    withdrawfunds.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    sources.qrc
