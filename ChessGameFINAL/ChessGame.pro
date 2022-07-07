
TEMPLATE = app
TARGET = ChessGame
INCLUDEPATH += .

QT += widgets
CONFIG += c++11

# Input
HEADERS += chessboard.h chesspiece.h
SOURCES += chessboard.cpp chesspiece.cpp main.cpp
RESOURCES +=
