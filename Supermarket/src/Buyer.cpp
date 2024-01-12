#include <iostream>

#include "Buyer.h"

using namespace std;
Buyer::Buyer(Inventory& inventory):inventory(inventory){}

void Buyer::viewProducts()
{
    inventory.displayProduct();
}

void Buyer::purchaseProduct()
{
    int productCode,quantity;
    cout<<"Enter the product code to purchase: ";
    cin>>productCode;
    cout<<"Enter the quantity to purchase";
    cin>>quantity;

    Product *product = inventory.searchProduct(productCode);
    if(product != nullptr && product->getQuantity()>=quantity)//if the product were found && buyer quantity is equal to product quantity
    {
        //implement payment logic
        float totalCost = product->getPrice() * quantity;
        cout<<"Total cost for purchase: "<<totalCost<<endl;
        //update product quantity
        product->setQuantity(product->getQuantity() - quantity);
        //update file to reflect the new quantity
        inventory.saveProducts();

        cout<<"Purchase successful: "<<quantity<<" units of "<<product->getName()<<"Purchased"<<endl;
    }else if(product != nullptr)
    {
        cout<<product->getQuantity()<<" units availabe."<<endl;
    }else
    {
        cout<<"Product not found."<<endl;
    }
}

Buyer::~Buyer()
{
    //dtor
}
