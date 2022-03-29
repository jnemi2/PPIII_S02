//
// Created by Usuario on 3/29/2022.
//

#include "stock.h"
#include <iostream>
#include <string>

using namespace std;

void check_stock(Product list[], int length){
    printf("Stock info.:\n");
    for (int i = 0; i < length; i++){
        if (list[i].stock < list[i].min_stock){
            cout<<generate_purchase_order(list[i])<<endl;
        }
    }
}

string generate_purchase_order(Product product){
    int quantity = product.max_stock - product.stock;
    string order = "(" + to_string(product.code) + ") " + product.name + ": in stock " +
                    to_string(product.stock) + " | min " + to_string(product.min_stock) +
                   " --> ordering " + to_string(quantity) + " ($" + to_string(product.price) + ") total $" +
                   to_string(quantity * product.price);
    return order;
}

Product new_product(std::string name, int code, int stock, int min_s, int max_s, float price){
    Product p;
    p.name = name;
    p.code = code;
    p.stock = stock;
    p.min_stock = min_s;
    p.max_stock = max_s;
    p.price = price;
    return p;
}