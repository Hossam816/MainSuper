#include "Product.h"
#include <iostream>
using namespace std;
Product::Product(int code, const string& name,float price,float discount, int quantity)
{
    this->code = code;
    this->name = name;
    this->price = price;
    this->discount = discount;
    this->quantity = quantity;
}
Product::Product(int code, const string& name,float price,float discount)
{
    this->code = code;
    this->name = name;
    this->price = price;
    this->discount = discount;
}

int Product::getCode()
{
    return code;
}
string Product::getName()
{
    return name;
}
float Product::getPrice()
{
    return price;
}
float Product::getDiscount()
{
    return discount;
}

int Product::getQuantity()
{
    return quantity;
}

void Product::setCode(int newCode)
{
    code = newCode;
}
void Product::setName(string newName)
{
    name = newName;
}
void Product::setPrice(float newPrice)
{
    price = newPrice;
}
void Product::setDiscount(float newDiscount)
{
    discount = newDiscount;
}
void Product::setQuantity(int buyerQuantity)
{
    buyerQuantity = quantity;
}

void Product::displayMainProduct(){
    cout<<code<<"\t\t\t"<<name<<"\t\t\t"<<price<<"\t\t\t"<<discount<<"\t\t\t"<<quantity<< "\n";
}



Product::~Product(){}
