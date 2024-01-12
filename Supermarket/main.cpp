#include <iostream>
#include "Supermrket.h"
#include "Product.h"
using namespace std;

int main()
{

    string inventoryFileName = "inventory.txt";
    MainClass main(inventoryFileName);
    main.run();
    cout << "Hello world!" << endl;
    return 0;
}
