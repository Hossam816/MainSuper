#include "UserInterface.h"

UserInterface::UserInterface(Admin& admin, Buyer& buyer):admin(admin),buyer(buyer) {}

void UserInterface::displayMainMenu(){}
void UserInterface::displayAdminMenu(){}
void UserInterface::displayBuyerMenu(){}

UserInterface::~UserInterface(){}
