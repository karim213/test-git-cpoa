#-------------------------------------------------
#
# Project created by QtCreator 2018-11-16T08:19:46
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Anki
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Administrateur.cpp \
    Carte.cpp \
    Evaluation.cpp \
    Gestionnaire_de_dialogue.cpp \
    Moderateur.cpp \
    Paquet.cpp \
    Utilisateur.cpp

HEADERS  += mainwindow.h \
    gestionnaire_de_dialogue.h \
    carte.h \
    evaluation.h \
    moderateur.h \
    administrateur.h \
    Utilisateur.h \
    Paquet.h

FORMS    += mainwindow.ui
