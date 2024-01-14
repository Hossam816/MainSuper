#include <string>

#include "Product.h"
#include "CartItem.h"

CartItem::CartItem(Product* product,int quantity):product(product),quantity(quantity){}

int CartItem::getProductCode()  {
    return product->getCode();
}

string CartItem::getProductName()  {
    return product->getName();
}

float CartItem::getProductPrice()  {
    return product->getPrice();
}

int CartItem::getQuantity()  {
    return quantity;
}

void CartItem::setQuantity(int newQuantity) {
    quantity = newQuantity;
}

