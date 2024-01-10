#ifndef SUPERMRKET_H
#define SUPERMRKET_H


//main class that integrates all components
#include "UserInterface.h"

class MainClass
{
private:
    UserInterface ui;
public:
    MainClass();
    MainClass(UserInterface& ui);
    void run();

    ~MainClass();
};

#endif // SUPERMRKET_H
