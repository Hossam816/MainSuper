#ifndef SUPERMRKET_H
#define SUPERMRKET_H

//main class that integrates all components
#include "UserInterface.h"
#include "Admin.h"
#include "Buyer.h"
#include "Inventory.h"

class MainClass
{
private:
    Inventory inventory;
    Admin admin;
    Buyer buyer;
    UserInterface ui;
public:
    MainClass(string inventoryFileName);
    void run();

    ~MainClass();
};

#endif // SUPERMRKET_H
