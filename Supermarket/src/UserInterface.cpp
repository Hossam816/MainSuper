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
    system("cls");
    int choice;
    do
    {
       cout<<"\n\n\t\t\t\t_______Buyer Menu\n"<<endl;
       cout<<"\n\n\t\t\t\t\t 1)Set Your Balance\n"<<endl;
       cout<<"\n\n\t\t\t\t\t 2)View Product\n"<<endl;
       cout<<"\n\n\t\t\t\t\t 3)Add to Cart\n"<<endl;
       cout<<"\n\n\t\t\t\t\t 4)View Cart\n"<<endl;
       cout<<"\n\n\t\t\t\t\t 5)Checkout\n"<<endl;
       cout<<"\n\n\t\t\t\t\t 6)Return to main menu \n"<<endl;

       cout<<"\n\n\t\t\t Enter Your Choice: ";
       cin>>choice;

       switch(choice){
       case 1:
        cout<<"Enter Your Balance: ";
        float balance;
        cin>>balance;
        buyer.setBalance(balance);
        case 2:
            buyer.viewProducts();
            break;
        case 3:
            int productCode,quantity;
            cout<<"Enter product code: ";
            cin>>productCode;
            cout<<"Enter Quantity: ";
            cin>>quantity;
            buyer.addToCart(productCode,quantity);
            break;
        case 4:
            buyer.viewCart();
            break;
        case 5:
            buyer.checkout();
            break;
        case 6:
            break;
        default:
            cout<<"Invalid choice!, Please try again"<<endl;
       }
    }while(choice !=6 );
}

