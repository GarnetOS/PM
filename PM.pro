TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        install.cpp \
        main.cpp \
        md5.cpp \
        update.cpp

HEADERS += \
    install.h \
    md5.h \
    update.h
