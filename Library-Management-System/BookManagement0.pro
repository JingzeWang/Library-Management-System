#-------------------------------------------------
#
# Project created by QtCreator 2020-10-05T12:10:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BookManagement0
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    dialogsearch.cpp \
    dialogborrow.cpp \
    dialogreturn.cpp \
    borrowerdialog.cpp \
    librariandialog.cpp \
    borrowerinformation.cpp \
    librarianaddbook.cpp \
    cJSON.c \
    librariandeletebook.cpp \
    librarianmodifybook.cpp \
    testmethod.cpp \
    addborrower.cpp \
    deleteborrower.cpp \
    searchborrower.cpp \
    changecode.cpp \
    changecodebyid.cpp \
    currentborrow.cpp \
    historyborrow.cpp \
    myinformation.cpp \
    payfine.cpp

HEADERS += \
        widget.h \
    dialogsearch.h \
    dialogborrow.h \
    dialogreturn.h \
    borrowerdialog.h \
    librariandialog.h \
    borrowerinformation.h \
    librarianaddbook.h \
    cJSON.h \
    librariandeletebook.h \
    librarianmodifybook.h \
    testh.h \
    addborrower.h \
    deleteborrower.h \
    searchborrower.h \
    changecode.h \
    changecodebyid.h \
    currentborrow.h \
    historyborrow.h \
    payfine.h \
    myinformation.h

FORMS += \
        widget.ui \
    dialogsearch.ui \
    dialogborrow.ui \
    dialogreturn.ui \
    borrowerdialog.ui \
    librariandialog.ui \
    borrowerinformation.ui \
    librarianaddbook.ui \
    librariandeletebook.ui \
    librarianmodifybook.ui \
    addborrower.ui \
    deleteborrower.ui \
    searchborrower.ui \
    changecode.ui \
    changecodebyid.ui \
    currentborrow.ui \
    historyborrow.ui \
    myinformation.ui \
    payfine.ui

RESOURCES += \
    resources.qrc
