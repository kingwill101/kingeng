TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    draw.cpp \
    object.cpp \
    image.cpp \
    audio.cpp \
    manager.cpp \
    types.cpp \
    player.cpp \
    block.cpp \
    obstacle.cpp \
    camera.cpp \
    game.cpp

HEADERS += \
    draw.hpp \
    types.hpp \
    object.hpp \
    image.hpp \
    audio.h \
    manager.hpp \
    player.hpp \
    block.h \
    obstacle.h \
    camera.hpp \
    game.hpp


unix: CONFIG += link_pkgconfig
unix: PKGCONFIG += sdl2

unix: PKGCONFIG += libvlc

OTHER_FILES += \
    level/level1.txt
CONFIG += c++11
