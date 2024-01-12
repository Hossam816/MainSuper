#include <iostream>
#include "UserInterface.h"

using namespace std;
UserInterface::UserInterface(Admin& admin, Buyer& buyer):admin(admin),buyer(buyer) {}

void UserInterface::displayMainMenu()
{
    int choice;
    do{
        cout<<"\t\t\t\t_______"<<"Welcome To The AlAFRIQY Supermarket"<<"_______\t\t\t\t"<<endl;
        cout<<"\t\t\t\t"<<"1) Admin"<<endl;
        cout<<"\t\t\t\t"<<"2) Buyer"<<endl;
        cout<<"\t\t\t\t"<<"3) Exit"<<endl;
        cout<<"\t\t\t\t\n\n Enter Your Role: ";
        cin>>choice;

        switch(choice){
        case 1:
            handleAdminMenu();
            break;
        case 2:
            handleBuyerMenu();
            break;
        case 3:
            cout<<"Exiting..."<<endl;
            break;
        default:
            cout<<"Invalid Choice, please try again."<<endl;
        }
    }while (choice != 3);
}

//handle admin page view
void UserInterface::handleAdminMenu()
{
    int choice;
    do{
        cout<<"\n\n\n\t\t\t\t_______Admin Menu"<<endl;
        cout<<"\n\n\n\t\t\t\t\t 1)Add Product"<<endl;
        cout<<"\n\n\n\t\t\t\t\t 2)Edit Product"<<endl;
        cout<<"\n\n\n\t\t\t\t\t 3)Remove Product"<<endl;
        cout<<"\n\n\n\t\t\t\t\t 4)Back To Main Menu"<<endl;

        cout<<"\n\n\t\t\t Enter Your Choice: ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            admin.addProduct();
            break;
        case 2:
            admin.modifiyProduct();
            break;
        case 3:
            admin.removeProduct();
            break;
        case 4:
            break;
        default:
            cout<<"Invalid choice!, Please try again"<<endl;
        }
    }while(choice != 4);

}

//handle buyer page view
void UserInterface::handleBuyerMenu()
{
    int choice;
    do
    {
       cout<<"\n\n\n\t\t\t\t_______Buyer Menu"<<endl;
       cout<<"\n\n\n\t\t\t\t\t 1)View Product"<<endl;
       cout<<"\n\n\n\t\t\t\t\t 2)Purchase Product"<<endl;
       cout<<"\n\n\n\t\t\t\t\t 3)Back To Main Menu"<<endl;

       cout<<"\n\n\t\t\t Enter Your Choice: ";
       cin>>choice;

       switch(choice){
        case 1:
            buyer.viewProducts();
            break;
        case 2:
            buyer.purchaseProduct();
            break;
        case 3:
            break;
        default:
            cout<<"Invalid choice!, Please try again"<<endl;
       }
    }while(choice !=3 );
}

UserInterface::~UserInterface(){}
