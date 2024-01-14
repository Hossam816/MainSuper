#ifndef INVENTORY_H
#define INVENTORY_H

//applaying composition with Product class means this will be not a inventory without product

#include "Product.h"
#include <vector>

class Inventory
{
private:
    vector<Product> products;
    string fileName;
public:
    Inventory();
    Inventory(string fileName);
    void loadProducts();
    void saveProducts();
    void addProduct(Product product); //add product to inventory
    void modifiyProduct(int code, Product newProduct);//edit product in inventory
    bool removeProduct(int code);//remove product from inventory
    bool updateProductQuantity(int productCode,int quantity);
    Product *searchProduct(int code);//search for product in inventory (pointer that point to product)
    void displayProduct();

    ~Inventory();
};

#endif // INVENTORY_H
