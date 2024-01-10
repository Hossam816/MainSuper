#include "Supermrket.h"


MainClass::MainClass(UserInterface& ui):ui(ui){}
void MainClass::run(){
    ui.displayMainMenu();
}

MainClass::~MainClass(){}
