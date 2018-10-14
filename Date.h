#include <string>
#include <time.h>
#ifndef DATA_DATA_H
#define DATA_DATA_H


class Date {
public:
    Date();
    Date(long);
    Date (int, int, int);
    std::string getDate();
    long getDateMs();
    void setDate(long);
    void setDate(int,int,int);
    void setCurrentTime();
    int compare(Date&);

private:
    tm *dateTime;
    time_t ms;
    void toYmd();
    void toMs();
};


#endif //DATA_DATA_H

