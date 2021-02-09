QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_personneldepartmenttests.cpp \
            ../PersonnelDepartment/user.cpp \
            ../PersonnelDepartment/division.cpp

HEADERS +=  ../PersonnelDepartment/user.h \
            ../PersonnelDepartment/division.h
