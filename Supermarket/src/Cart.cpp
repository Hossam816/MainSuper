#include <Vector>
#include <iostream>
#include "Cart.h"

using namespace std;



void Cart::addItem(CartItem item)
{
    for(auto cartItem: items)
    {
        if(cartItem.getProductCode()==item.getProductCode())
        {
            cartItem.setQuantity(cartItem.getQuantity() + item.getQuantity());
        }
    }

    //if item is new, add to cart
    items.push_back(item);
}

bool Cart::removeItem(int productCode)
{
    for(auto item = items.begin(); item!=items.end();item++)
    {
        if(item->getProductCode() == productCode)
        {
            items.erase(item);
            cout<<"Item Removed From Cart";
            return true;
        }
    }
    return false;
}

float Cart::getTotalCost()
{
    float totalCost = 0.0f;
    for(auto item:items)
    {
        totalCost+=item.getProductPrice() * item.getQuantity();
    }
    return totalCost;
}

void Cart::clearItems(){
    items.clear();
}

void Cart::displayCart(){

if(items.empty())
{
    cout<<"the cart is empty"<<endl;

}
    cout<<"Name\t\t"<<"Quantity\t\t"<<"Price\t\t"<<"Total\n\n"<<endl;
    for(auto item:items)
    {
        cout<<item.getProductName()<<"\t\t"<<item.getQuantity()<<"\t\t\t"<<item.getProductPrice()<<"\t\t"<<getTotalCost()<<endl;
    }
}

