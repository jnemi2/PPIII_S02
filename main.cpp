#include <iostream>
#include "date.h"
#define N 10

using namespace std;

int main()
{
    Date date[N];
    string txt;
    int index = 0;
input_date:
    printf("Enter a date (dd/mm/aa) [%d remaining]. Don't enter anything to quit: ", N-index);
    getline(cin, txt);
    if (txt == "") goto end;
    if (txt[2] == '/' && txt[5] == '/') {
        int boolean = 1;
        for (int i = 0; i < 8; i++){
            if (i == 2 || i == 5) i++;
            if (!isdigit(txt[i])){
                boolean = 0;
                break;
            }
        }
        if (boolean) {
            Date someDate = newDate(txt);
            index++;
            goto input_date;
        }else { goto input_date;}
    }
    cout<<txt<<endl;
end:
    for (int i = 0; i <= index; i++){
        cout<<date[i].day<<'/'<<date[i].month<<'/'<<date[i].year<<endl;
    }
    return 0;
}
