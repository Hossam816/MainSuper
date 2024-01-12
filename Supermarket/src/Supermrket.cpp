#include "Supermrket.h"


MainClass::MainClass(string inventoryFileName):inventory(inventoryFileName),admin(inventory),buyer(inventory), ui(admin,buyer) {}
void MainClass::run(){
    ui.displayMainMenu();
}

MainClass::~MainClass(){}
