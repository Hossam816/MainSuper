#ifndef BUYER_H
#define BUYER_H
//applying aggregation with Inventory
//Manages buyer interactions, like show products and handling purchases

#include "Inventory.h"
class Buyer
{
private:
    Inventory& inventory;
    float balance; //buyer balance

public:
    Buyer(Inventory& inventory);
    void viewProducts();
    void purchaseProduct();
    void addBalance(float amount);

    ~Buyer();
};

#endif // BUYER_H
