#ifndef USERINTERFACE_H
#define USERINTERFACE_H
#include "Admin.h"
#include "Buyer.h"
//applying composition with admin & buyer
//manges user interface, providing diffrent menus for admin and buyer

class UserInterface
{
private:
    Admin admin;
    Buyer buyer;

public:
    UserInterface(Admin& admin, Buyer& buyer);
    void displayMainMenu();
    void handleAdminMenu();
    void handleBuyerMenu();

    ~UserInterface();
};

#endif // USERINTERFACE_H
