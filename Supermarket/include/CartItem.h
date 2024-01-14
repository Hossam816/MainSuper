#ifndef CARTITEM_H
#define CARTITEM_H


#include <string>
#include "Product.h"

class CartItem
{
private:
    Product* product; //pointer point to "Product" object
    int quantity;
public:
    CartItem(Product* product, int quantity);


    int getProductCode();
    string getProductName();
    float getProductPrice() ;
    int getQuantity() ;
    void setQuantity(int newQuantity);

};

#endif // CARTITEM_H
