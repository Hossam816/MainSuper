#ifndef BUYER_H
#define BUYER_H
//applying aggregation with Inventory
//Manages buyer interactions, like show products and handling purchases

#include "Inventory.h"
#include "Cart.h"
class Buyer
{
private:
    Inventory& inventory;
    float balance; //buyer balance
    Cart cart;

public:
    Buyer(Inventory& inventory);
    void setBalance(float newBalance);
    void addBalance(float amount);
    void viewProducts();
    void purchaseProduct();

    //cart handle
    void addToCart(int productCode, int quantity);
    void viewCart();
    void checkout();

};

#endif // BUYER_H
