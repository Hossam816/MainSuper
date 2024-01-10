#ifndef PRODUCT_H
#define PRODUCT_H
#include <string>

//applying Encapsulation concept

using namespace std;

class Product
{
   private:
       int code;
       float price;
       float discount;
       string name;

   public:
    Product(int code,string name,float price,float discount);
    //Getters
    int getCode();
    string getName();
    float getPrice();
    float getDiscount();

    //Setters
    void setCode(int code);
    void setName(string name);
    void setPrice(float price);
    void setDiscount(float discount);

    void displayProduct();

    ~Product();
};

#endif // PRODUCT_H
