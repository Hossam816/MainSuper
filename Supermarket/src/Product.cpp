#include "Product.h"
#include <iostream>
using namespace std;
Product::Product(int code, string name,float price,float discount)
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

void Product::displayProduct(){
    cout<<code<<"\t\t\t"<<name<<"\t\t"<<price<<"\t\t"<<discount<< "\n";
}



Product::~Product(){}
