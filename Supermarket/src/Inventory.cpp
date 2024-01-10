#include "Inventory.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <algorithm>

using namespace std;
Inventory::Inventory(string fileName): fileName(fileName){
    loadProducts();
}

//Reads the product data file and populates the products vector.
void Inventory::loadProducts(){
    ifstream database(fileName);
    string line;
    while(getline(database, line))
    {
        istringstream iss(line);
        int code;
        string name;
        float price,discount;
        if(iss>>code>>name>>price>>discount)
        {
            products.push_back(Product(code,name,price,discount));
        }
    }
    database.close();
};

//Writes the current state of the products vector back to the file.
void Inventory::saveProducts()
{
    ofstream database(fileName);
    for(auto& product:products)
    {
        database<<product.getCode()<<" "<<product.getName()<<" "<<product.getPrice()<<" "<<product.getDiscount()<<endl;
    }
    database.close();
}

void Inventory::addProduct(Product product)
{
    //check if the product has the same code already exists
    for(auto&p : products)
    {
        if(p.getCode() == product.getCode())
        {
            cout<<"Product with code "<<product.getCode()<<"already exists.\n";
            return;
        }
    }
    //add new product to the vector
    products.push_back(product);
    //update text file file with new data
    saveProducts();

    cout<<"Record Inserted.\n";

}
//Edit Method
void Inventory::modifiyProduct(int code, Product newProduct)
{
    //this looping through "products" vector to find the matching code
    for(auto& p: products)
    {
        //once product is found we update "p" with it's new name,price,discount
        if(p.getCode() == code)
        {
            p.setName(newProduct.getName());
            p.setPrice(newProduct.getPrice());
            p.setDiscount(newProduct.getDiscount());

            //save the updated data
            saveProducts();
            cout<<"Record updated successfully";
            return;
        }
    }
    cout<<"Product Not Found = "<<code<<endl;
};

//this method designed to remove a product from the inventory
bool Inventory::removeProduct(int code)
{
    /*
     *"find_if" use to locate product in "products" vector by matching the product code
     *auto keyword used so that compiler automatically deduces the type of "item" based on return value
     *"products.begin(),products.end()" is the range that "find_if" will work in
     *each Product object from products vector will passed to this "lambda" while it looping over the container
    */
    auto item = find_if(products.begin(),products.end(),[code](Product product){
                            return product.getCode() == code;});
    //if item != products.end
    if(item != products.end())
    {
        products.erase(item); //it's erase from the vector
        saveProducts(); //update the change in inventory
        cout<<"Record Removed.\n";
        return true;//if it's true then the productwas successfullly remove
    }else
    {
        cout<<"Product Not Found = "<<code<<endl;
        return false;//if it's false then the productwas unsuccessfullly remove
    }
};
Product* Inventory::searchProduct(int code){
    for(auto &p : products)
    {
        if(p.getCode() == code)
        {
            return &p;
        }
    }
    return nullptr; //when it's not product with the given code is found, it returns nullptr
};
void Inventory::displayProduct(){
    if(products.empty())
    {
        cout<<"There is no Data Found."<<endl;
    }
    cout<<"Inventory Products."<<endl;
    for(auto& p: products)
    {
        p.displayProduct();
    }
}

Inventory::~Inventory(){}
