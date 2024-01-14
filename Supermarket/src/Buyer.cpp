#include <iostream>
#include "CartItem.h"
#include "Product.h"
#include "Cart.h"
#include "Buyer.h"

using namespace std;


Buyer::Buyer(Inventory& inventory):inventory(inventory), balance(0.0f){}


void Buyer::viewProducts()
{
    inventory.displayProduct();
}


void Buyer::setBalance(float newBalance)
{
    balance = newBalance;
}


void Buyer::addBalance(float amount)
{
    balance +=amount;
}
//cart logic implementation

void Buyer::addToCart(int productCode,int quantity)
{
     Product *product = inventory.searchProduct(productCode);
    if(product != nullptr && product->getQuantity()>=quantity)//if the product were found && buyer quantity is equal to product quantity
    {
        //implement payment logic
        float totalCost = product->getPrice() * quantity;
        cout<<"Total cost for purchase: "<<totalCost<<endl;
            if(inventory.updateProductQuantity(productCode,quantity))
            {
                cart.addItem(CartItem(product, quantity));
                cout << "Added to cart: " << product->getName() << ", Quantity: " << quantity << endl;}
            else
            {
                cerr<<"Error in update."<<endl;
            }
    }

    else if(product != nullptr){
        cout<<"There is not enough quantity of "<< product->getName()<<"\n Available quantity"<<product->getQuantity() <<endl;
    }
    else{
        cout<<"Product not found."<<endl;
    }
}

void Buyer::viewCart() {
    cart.displayCart();
}

//void Buyer::purchaseProduct()
//{
//    int productCode,quantity;
//    cout<<"Enter the product code to purchase: ";
//    cin>>productCode;
//    cout<<"Enter the quantity to purchase";
//    cin>>quantity;
//    addToCart(productCode,quantity);
//
//
////    Product *product = inventory.searchProduct(productCode);
////    if(product != nullptr && product->getQuantity()>=quantity)//if the product were found && buyer quantity is equal to product quantity
////    {
////        //implement payment logic
////        float totalCost = product->getPrice() * quantity;
////        cout<<"Total cost for purchase: "<<totalCost<<endl;
////            if(inventory.updateProductQuantity(productCode,quantity))
////            {
////                cout<<"Purchase Successfull: "<<quantity<<"units of "<<product->getName()<<endl;
////            }else
////            {
////                cerr<<"Error in update."<<endl;
////            }
////    }
////
////    else if(product != nullptr){
////        cout<<"There is not enough quantity of"<< product->getName()<<"\n Available quantity"<<product->getQuantity() <<endl;
////    }
////    else{
////        cout<<"Product not found."<<endl;
////    }
//}
void Buyer::checkout() {
    float totalCost = cart.getTotalCost();  // Assuming Cart class has this method

    if (balance >= totalCost) {
        balance -= totalCost;
        cart.clearItems();
        cout << "Purchase successful. Remaining balance: " << balance << endl;
    } else {
        cout << "Insufficient balance." << endl;
    }
}


