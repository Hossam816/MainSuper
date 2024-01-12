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
       int quantity;
       string name;

   public:
    Product(int code, const string& name, float price, float discount);
    Product(int code, const string& name, float price, float discount, int quantity);


    //Getters
    int getCode();
    string getName();
    float getPrice();
    float getDiscount();
    int getQuantity();

    //Setters
    void setCode(int code);
    void setName(string name);
    void setPrice(float price);
    void setDiscount(float discount);
    void setQuantity(int quantity);
    void displayProduct();

    ~Product();
};

#endif // PRODUCT_H
