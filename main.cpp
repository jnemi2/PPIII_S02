#include <iostream>
#include "date.h"

using namespace std;

int main()
{
    Date date;
    date.month = 3;
    cout<<abbreviate(date);

    return 0;
}
