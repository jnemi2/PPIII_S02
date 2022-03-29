#include <iostream>
#include "date.h"

using namespace std;

float calculate_fee(float price, int hours, int minutes);

int main()
{
    int hours, minutes;
    printf("Hours:");
    cin>>hours;
    printf("Minutes:");
    cin>>minutes;
    printf("You owe $%.2f", calculate_fee(2.0, hours, minutes));

    return 0;
}

float calculate_fee(float price, int hours, int minutes){
    float fee = price * hours;
    if (minutes >= 15) fee += price;
    return fee;
}