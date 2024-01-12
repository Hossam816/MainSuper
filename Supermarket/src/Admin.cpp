#include <iostream>
#include "Admin.h"
using namespace std;

Admin::Admin(Inventory& inventory):inventory(inventory){}

void Admin::addProduct()
{
    int code;
    string name;
    float price, discount;
    int quantity; //track product quantity

    cout<<"Enter product code: ";
    cin>>code;
    cout<<"Enter product name: ";
    cin>>name;
    cout<<"Enter product price: ";
    cin>>price;
    cout<<"Enter product discount: ";
    cin>>discount;
    cout<<"Enter product quantity: ";
    cin>>quantity;

    Product newProduct(code,name,price,discount,quantity);
    inventory.addProduct(newProduct);
}

void Admin::modifiyProduct()
{
    int productCode;
    cout<<"Enter the product code of the product you want to modifiy: ";
    cin>>productCode;

    //search for the product that we want to modifiy
    Product* product = inventory.searchProduct(productCode);
    if(product!=nullptr)
    {
        string name;
        float price,discount;
        int quantity;

        cout << "Enter new product name: ";
        cin >> name;
        cout << "Enter new product price: ";
        cin >> price;
        cout << "Enter new product discount: ";
        cin >> discount;
        cout << "Enter new product quantity: ";
        cin >> quantity;

        //set product new properties
        product->setName(name);
        product->setPrice(price);
        product->setDiscount(discount);
        product->setQuantity(quantity);

        //update inventory file
        inventory.saveProducts();
    }else
    {
        cout<<"Product not found."<<endl;
    }
}
void Admin::removeProduct()
{
    int productCode;
    cout<<"Enter the product code you want tot delete: "<<endl;
    cin>>productCode;
    if(inventory.removeProduct(productCode))
    {
        cout<<"Product deleted successfully."<<endl;
        inventory.saveProducts();
    }else
    {
        cout<<"Product not found"<<endl;
    }
}

Admin::~Admin(){}
