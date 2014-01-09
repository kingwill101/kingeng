TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    draw.cpp \
    object.cpp \
    types.cpp \
    image.cpp

HEADERS += \
    draw.hpp \
    types.hpp \
    object.hpp \
    image.h


unix: CONFIG += link_pkgconfig
unix: PKGCONFIG += sdl2
