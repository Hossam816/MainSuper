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
