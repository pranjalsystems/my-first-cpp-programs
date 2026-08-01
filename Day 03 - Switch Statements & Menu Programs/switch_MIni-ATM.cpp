//// Day 6 - Task 6
// Mini ATM using switch
//
//Balance starts at
//
//1000
//
//Menu
//
//1 Check Balance
//2 Deposit
//3 Withdraw
//4 Exit
//
//Requirements
//
//Deposit adds money.
//Withdraw subtracts money.
//If withdrawing more than the balance:
//Insufficient Balance
//
//No loops yet.

#include <iostream>

int main(){
    int choice;
    int balance=1000;
    int amt;
    std::cout<<"======== ATM ========\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n\n";
    std::cout<<"Choose item: ";
    std::cin>>choice;
    switch(choice)
    {
        case 1:
            std::cout<<"Balance: "<<balance;
            break;
        case 2:
            std::cout<<"Enter Amount: ";
            std::cin>>amt;
            balance=balance+amt;
            std::cout<<"Balance: "<<balance;
            break;
        case 3:
            std::cout<<"Enter Amount: ";
            std::cin>>amt;
            if (balance>=amt)
            {
                balance=balance-amt;
                std::cout<<"Balance: "<<balance;
            }
            else{
                std::cout<<"<Insufficient Funds>";
            }
            break;
        case 4:
            std::cout<<"Have a Good Day !\nXYZATM CO. LTD.";
            break;        
        default:
            std::cout<<"Invalid option";
            break;
    }
    return 0;
}