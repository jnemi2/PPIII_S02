#include <iostream>
#include "stock.h"

using namespace std;

int main()
{
    Product stock[25];
    stock[0] = new_product("Croissant", 707, 7, 10, 32, 3.5);
    stock[1] = new_product("Coke", 124, 14, 25, 50, 1.1);
    stock[2] = new_product("Cupcakes", 304, 5, 5, 16, 1.4);
    check_stock(stock, 3);

    return 0;
}
