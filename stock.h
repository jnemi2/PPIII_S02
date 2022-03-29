//
// Created by Usuario on 3/29/2022.
//

#ifndef PPIII_S02_STOCK_H
#define PPIII_S02_STOCK_H
#include <string>

typedef struct product {
    std::string name;
    int code;
    int stock;
    int min_stock;
    int max_stock;
    float price;
} Product;

void check_stock(Product list[], int length);
std::string generate_purchase_order(Product product);
Product new_product(std::string name, int code, int stock, int min_s, int max_s, float price);

#endif //PPIII_S02_STOCK_H
