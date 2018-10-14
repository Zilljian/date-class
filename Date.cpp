#include "Date.h"
#include <iostream>

using namespace std;

Date::Date(){
    setCurrentTime();
}

Date::Date (long ms) {
    dateTime = new (tm);
    this->ms = ms;
    toYmd();
}

Date::Date (int year, int month, int day) : ms(0) {
    dateTime = new (tm);
    dateTime->tm_year = year;
    dateTime->tm_mon = month -1;
    dateTime->tm_mday = day;
    toMs();
}


void Date::toYmd(){
    long temp = ms / 1000;
    dateTime = localtime(&temp);
}

void Date::toMs() {
    ms = mktime(dateTime) * 1000;
}

string Date::getDate() {
    return to_string(dateTime->tm_mday) + '/' + to_string(dateTime->tm_mon + 1) + '/' + to_string(dateTime->tm_year);
}

long Date::getDateMs() {
    return ms;
}

void Date::setCurrentTime() {
    ms = time(nullptr);
    dateTime = localtime(&ms);
    dateTime->tm_year += 1900;
    ms = mktime(dateTime) * 1000;
}

void Date::setDate(long ms) {
    this->ms = ms;
    toYmd();
}

void Date::setDate(int year, int month, int day) {
    dateTime->tm_year = year;
    dateTime->tm_mon = month;
    dateTime->tm_mday = day;
}

int Date::compare(Date& rValue) {
    if (rValue.getDateMs() > this->getDateMs()) return -1;
    else if (rValue.getDateMs() == this->getDateMs()) return 0;
    return 1;
}

