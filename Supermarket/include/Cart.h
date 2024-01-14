#ifndef CART_H
#define CART_H

#include "CartItem.h"
#include <vector>

class Cart
{
    private:
    vector<CartItem> items;

    public:
    void addItem(CartItem item);
    float getTotalCost();
    void displayCart();
    void clearItems();
    bool removeItem(int productCode);

};
#endif // CART_H
