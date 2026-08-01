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

// int main(){
//     int choice;
//     int balance=1000;
//     int amt;
//     std::cout<<"======== ATM ========\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n\n";
//     std::cout<<"Choose item: ";
//     std::cin>>choice;
//     switch(choice)
//     {
//         case 1:
//             std::cout<<"Balance: "<<balance;
//             break;
//         case 2:
//             std::cout<<"Enter Amount: ";
//             std::cin>>amt;
//             balance=balance+amt;
//             std::cout<<"Balance: "<<balance;
//             break;
//         case 3:
//             std::cout<<"Enter Amount: ";
//             std::cin>>amt;
//             if (balance>=amt)
//             {
//                 balance=balance-amt;
//                 std::cout<<"Balance: "<<balance;
//             }
//             else{
//                 std::cout<<"<Insufficient Funds>";
//             }
//             break;
//         case 4:
//             std::cout<<"Have a Good Day !\nXYZATM CO. LTD.";
//             break;        
//         default:
//             std::cout<<"Invalid option";
//             break;
//     }
//     return 0;
// }

//now we are upgrading it a bit further


int main(){
    int choice;
    int account_1=1111;                         //i think this is fetched from a particular database of bank
    int account_1_pin=1234;
    int account_2=1222;
    int account_2_pin=2345;
    int account_3=1233;
    int account_3_pin=3456;
    int account_4=1234;
    int account_4_pin=4567;
    int account_5=5432;
    int account_5_pin=5678;
    int account_6=6543;
    int account_6_pin=6789;
    int balance1=1000;
    int balance2=2000;
    int balance3=3000;
    int balance4=4000;
    int balance5=5000;
    int balance6=6000;
    do{
        int acc;
        int pwd;
        int amt;
        std::cout<<"======== ATM ========\n1. Check Balance\n2. Deposit\n3. Withdraw\n4. Exit\n\n";
        std::cout<<"Choose item: ";
        std::cin>>choice;
        std::cout<<"Enter Account ID: ";
        std::cin>>acc;
        std::cout<<"pin: ";
        std::cin>>pwd;
        if (acc!=1111 and acc!=1222 and acc!=1233 && acc!=1234 && acc!=5432 && acc!=6543){
            std::cout<<"ID not found\n";
            continue;
        }
        else{
            switch(acc){
            case 1111:
                if (pwd==account_1_pin){
                    if (choice ==1){
                        std::cout<<"Balance: "<<balance1;
                    }
                    else if (choice ==2){
                        std::cout<<"Enter Amount: ";
                        std::cin>>amt;
                        balance1=balance1+amt;
                        std::cout<<"Balance: "<<balance1;
                        }
                    else if (choice ==3){
                        std::cout<<"Enter Amount: ";
                        std::cin>>amt;
                        if (balance1>=amt)
                        {
                            balance1=balance1-amt;
                            std::cout<<"Balance: "<<balance1;
                        }
                        else{
                            std::cout<<"<Insufficient Funds>";
                        }
                    }
                    else if (choice ==4){
                        std::cout<<"Have a Good Day !\nXYZATM CO. LTD.";
                    }
                    std::cout<<"\n";
                    break;
                }
                else{
                        std::cout<<"Wrong PIN try again...";
                    }
                    std::cout<<"\n";
                    break;
            case 1222:
                if (pwd==account_2_pin){
                    if (choice ==1){
                        std::cout<<"Balance: "<<balance2;
                    }
                    else if (choice ==2){
                        std::cout<<"Enter Amount: ";
                        std::cin>>amt;
                        balance2=balance2+amt;
                        std::cout<<"Balance: "<<balance2;
                        }
                    else if (choice ==3){
                        std::cout<<"Enter Amount: ";
                        std::cin>>amt;
                        if (balance2>=amt)
                        {
                            balance2=balance2-amt;
                            std::cout<<"Balance: "<<balance2;
                        }
                        else{
                            std::cout<<"<Insufficient Funds>";
                        }
                    }
                    else if (choice ==4){
                        std::cout<<"Have a Good Day !\nXYZATM CO. LTD.";
                    }
                    std::cout<<"\n";
                    break;
                }
                else{
                        std::cout<<"Wrong PIN try again...";
                    }
                    std::cout<<"\n";
                    break;
            case 1233:
                if (pwd==account_3_pin){
                    if (choice ==1){
                        std::cout<<"Balance: "<<balance3;
                    }
                    else if (choice ==2){
                        std::cout<<"Enter Amount: ";
                        std::cin>>amt;
                        balance3=balance3+amt;
                        std::cout<<"Balance: "<<balance3;
                        }
                    else if (choice ==3){
                        std::cout<<"Enter Amount: ";
                        std::cin>>amt;
                        if (balance3>=amt)
                        {
                            balance3=balance3-amt;
                            std::cout<<"Balance: "<<balance3;
                        }
                        else{
                            std::cout<<"<Insufficient Funds>";
                        }
                    }
                    else if (choice ==4){
                        std::cout<<"Have a Good Day !\nXYZATM CO. LTD.";
                    }
                    std::cout<<"\n";
                    break;
                }
                else{
                        std::cout<<"Wrong PIN try again...";
                    }
                    std::cout<<"\n";
                    break;
            case 1234:
                if (pwd==account_3_pin){
                    if (choice ==1){
                        std::cout<<"Balance: "<<balance3;
                    }
                    else if (choice ==2){
                        std::cout<<"Enter Amount: ";
                        std::cin>>amt;
                        balance4=balance4+amt;
                        std::cout<<"Balance: "<<balance4;
                        }
                    else if (choice ==3){
                        std::cout<<"Enter Amount: ";
                        std::cin>>amt;
                        if (balance4>=amt)
                        {
                            balance4=balance4-amt;
                            std::cout<<"Balance: "<<balance4;
                        }
                        else{
                            std::cout<<"<Insufficient Funds>";
                        }
                    }
                    else if (choice ==4){
                        std::cout<<"Have a Good Day !\nXYZATM CO. LTD.";
                    }
                    std::cout<<"\n";
                    break;
                }
                else{
                        std::cout<<"Wrong PIN try again...";
                    }
                    std::cout<<"\n";
                    break;
            case 5432:
                if (pwd==account_5_pin){
                    if (choice ==1){
                        std::cout<<"Balance: "<<balance5;
                    }
                    else if (choice ==2){
                        std::cout<<"Enter Amount: ";
                        std::cin>>amt;
                        balance5=balance5+amt;
                        std::cout<<"Balance: "<<balance5;
                        }
                    else if (choice ==3){
                        std::cout<<"Enter Amount: ";
                        std::cin>>amt;
                        if (balance5>=amt)
                        {
                            balance5=balance5-amt;
                            std::cout<<"Balance: "<<balance5;
                        }
                        else{
                            std::cout<<"<Insufficient Funds>";
                        }
                    }
                    else if (choice ==4){
                        std::cout<<"Have a Good Day !\nXYZATM CO. LTD.";
                    }
                    std::cout<<"\n";
                    break;
                }
                else{
                        std::cout<<"Wrong PIN try again...";
                    }
                    std::cout<<"\n";
                    break;
            case 6543:
                if (pwd==account_6_pin){
                    if (choice ==1){
                        std::cout<<"Balance: "<<balance6;
                    }
                    else if (choice ==2){
                        std::cout<<"Enter Amount: ";
                        std::cin>>amt;
                        balance6=balance6+amt;
                        std::cout<<"Balance: "<<balance6;
                        }
                    else if (choice ==3){
                        std::cout<<"Enter Amount: ";
                        std::cin>>amt;
                        if (balance6>=amt)
                        {
                            balance6=balance6-amt;
                            std::cout<<"Balance: "<<balance6;
                        }
                        else{
                            std::cout<<"<Insufficient Funds>";
                        }
                    }
                    else if (choice ==4){
                        std::cout<<"Have a Good Day !\nXYZATM CO. LTD.";
                    }
                    std::cout<<"\n";
                    break;
                }
                else{
                        std::cout<<"Wrong PIN try again...";
                    }
                    std::cout<<"\n";
                    break;
                }
        }
    }while (true);
    
    return 0;
}


