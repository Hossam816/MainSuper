#ifndef ADMIN_H
#define ADMIN_H
//applying aggregition
//handle all administrator methods like modify, add, remove, show

#include "Inventory.h"

class Admin
{
   private:
       Inventory& inventory; //reference object from Inventory class
   public:
    Admin(Inventory& inventory);
    void addProduct();
    void modifiyProduct();
    void removeProduct();
    ~Admin();
};

#endif // ADMIN_H
