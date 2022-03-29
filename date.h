#ifndef PPIII_S02_H
#define PPIII_S02_H
#include <string>

typedef struct {
    std::string year;
    std::string month;
    std::string day;
} Date;

Date newDate(std::string data);

#endif
