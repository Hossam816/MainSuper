/*
 * Author : Basma Emad, Omima Abd ellatif, Hossam ragab
 * Date : 04/01/2024
*/

#include <iostream>
#include "Supermrket.h"
#include "Product.h"
#include "Buyer.h"
#include "Inventory.h"


using namespace std;

int main()
{
    string inventoryFileName = "inventory.txt";
    MainClass main(inventoryFileName);
    main.run();
Inventory inve(inventoryFileName);
inve.displayProduct();
    cout << "Hello world!" << endl;
    return 0;
}




