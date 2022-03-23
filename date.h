#ifndef PPIII_S02_H
#define PPIII_S02_H
#include <string>

typedef struct {
    int year;
    unsigned int month;
    unsigned int day;
} Date;

std::string abbreviate(Date date);

#endif
