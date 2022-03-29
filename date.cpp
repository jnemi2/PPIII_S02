#include "date.h"
#include <string>


using namespace std;

Date newDate(string data){
    Date date;
    char txt[3];
    txt[2] = '\0';
    txt[0] = data[0];
    txt[1] = data[1];
    date.day = txt;
    txt[0] = data[3];
    txt[1] = data[4];
    date.month = txt;
    txt[0] = data[6];
    txt[1] = data[7];
    date.year = txt;
    return date;
}