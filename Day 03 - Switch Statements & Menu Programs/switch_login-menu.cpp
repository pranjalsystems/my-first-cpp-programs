//// Day 6 - Task 9
// Login menu by using if-else and switch
//
//Menu
//
//1 Login
//2 Exit
//
//If Login is chosen
//
//Username
//
//admin
//
//Password
//
//1234
//
//If correct
//
//Welcome Admin
//
//Otherwise
//
//Access Denied

//#include <iostream>
//int main(){
//    int choice;
//    char user1;
//    char passkey1;
//    char users;
//    char passkey;
//    std::cout<<"Menu\n1 Login\n2 Exit\nEnter Choice: ";
//    std::cin>>choice;
//    switch(choice)
//    {
//        case 1:
//            std::cout<<"Enter Username: ";
//            std::cin>>users;
//
//            if (users=='admin')
//            {
//                std::cout<<"Enter Passkey: ";
//                std::cin>>passkey;
//                if(passkey=='1234')
//                {
//                    std::cout<<"Welcome Admin";
//                }
//                else
//                {
//                    std::cout<<"Access Denied";
//                }
//            }
//            else
//            {
//                std::cout<<"No such user named: "<<users<<" found";
//            }
//            break;
//        default:
//        std::cout<<"Invalid Choice";
////        break;
//    }
//    return 0;
//}
#include <iostream>
#include <string>////NOTE asked for help as char only take one letter input

int main(){
    int choice;
    std::string users;////NOTE asked for help as char only take one letter input
    std::string passkey;////NOTE asked for help as char only take one letter input
    std::cout<<"Menu\n1 Login\n2 Exit\nEnter Choice: ";
    std::cin>>choice;
    switch(choice)
    {
        case 1:
            std::cout<<"Enter Username: ";
            std::cin>>users;

            if (users=="admin")//Noticed '' is for char and ""is for string (unlike python)
            {
                std::cout<<"Enter Passkey: ";
                std::cin>>passkey;
                if(passkey=="1234")
                {
                    std::cout<<"Welcome Admin";
                }
                else
                {
                    std::cout<<"Access Denied";
                }
            }
            else
            {
                std::cout<<"No such user named: "<<users<<" found";
            }
            break;
        case 2:
        std::cout<<"-<XYZ Locker>-";
        default:
        std::cout<<"Invalid Choice";
//        break;
    }
    return 0;
}