#ifndef BUYER_H
#define BUYER_H
//applying aggregation with Inventory
//Manages buyer interactions, like show products and handling purchases

#include "Inventory.h"
class Buyer
{
private:
    Inventory& inventory;
public:
    Buyer(Inventory& inventory);
    void purchaseProduct();

    ~Buyer();
};

#endif // BUYER_H
