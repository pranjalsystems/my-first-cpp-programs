// Day 6 - Task 2
//Restraunt automated billing system with switch!
//
//======== MENU ========
//
//1. Burger   - ₹120
//2. Pizza    - ₹250
//3. Pasta    - ₹180
//4. Coffee   - ₹80
//
//Choose item:
//
//Output
//
//Pizza selected
//Price = ₹250
//
//or
//
//Invalid selection
//🎯 Extra challenge (optional)
//
//After showing the price, ask:
//
//Quantity:
//
//Then calculate
//
//Total = price × quantity
//
//No if needed.
//Only switch.

#include <iostream>

//int main(){
//    int choice;
//    int selected_price;
//    int qty;
//    std::cout<<"======== MENU ========\n1. Burger   - 120Rs\n2. Pizza    - 250Rs\n3. Pasta    - 180Rs\n4. Coffee   - 80Rs\n\n";
//    std::cout<<"Choose item: ";
//    std::cin>>choice;
//    switch(choice)
//    {
//        case 1:
//            std::cout<<"Burger selected\nPrice = 120Rs";
//            selected_price=120;
//            break;
//        case 2:
//            std::cout<<"Pizza selected\nPrice = 250Rs";
//            selected_price=250;
//            break;
//        case 3:
//            std::cout<<"Pasta selected\nPrice = 180Rs";
//            selected_price=180;
//            break;
//        case 4:
//            std::cout<<"Coffee selected\nPrice = 80Rs";
//            selected_price=80;
//            break;
//        default:
//            std::cout<<"Invalid option";
//    }
//    std::cout<<"\nQuantity: ";
//    std::cin>>qty;
//    std::cout<<"Total = "<<selected_price<<"Rs x "<<qty<<"="<<selected_price*qty<<"Rs";
//    std::cout<<"\nEnjoy your order.";
//    return 0;
//}

int main(){
    int choice;
    int selected_price;
    int qty;
    std::cout<<"======== MENU ========\n1. Burger   - 120Rs\n2. Pizza    - 250Rs\n3. Pasta    - 180Rs\n4. Coffee   - 80Rs\n\n";
    std::cout<<"Choose item: ";
    std::cin>>choice;
    switch(choice)
    {
        case 1:
            std::cout<<"Burger selected\nPrice = 120Rs";
            selected_price=120;
            std::cout<<"\nQuantity: ";
            std::cin>>qty;
            std::cout<<"Total = "<<selected_price<<"Rs x "<<qty<<"="<<selected_price*qty<<"Rs";
            std::cout<<"\nEnjoy your order.";
            break;
        case 2:
            std::cout<<"Pizza selected\nPrice = 250Rs";
            selected_price=250;
            std::cout<<"\nQuantity: ";
            std::cin>>qty;
            std::cout<<"Total = "<<selected_price<<"Rs x "<<qty<<"="<<selected_price*qty<<"Rs";
            std::cout<<"\nEnjoy your order.";
            break;
        case 3:
            std::cout<<"Pasta selected\nPrice = 180Rs";
            selected_price=180;
            std::cout<<"\nQuantity: ";
            std::cin>>qty;
            std::cout<<"Total = "<<selected_price<<"Rs x "<<qty<<"="<<selected_price*qty<<"Rs";
            std::cout<<"\nEnjoy your order.";
            break;
        case 4:
            std::cout<<"Coffee selected\nPrice = 80Rs";
            selected_price=80;
            std::cout<<"\nQuantity: ";
            std::cin>>qty;
            std::cout<<"Total = "<<selected_price<<"Rs x "<<qty<<"="<<selected_price*qty<<"Rs";
            std::cout<<"\nEnjoy your order.";
            break;
        default:
            std::cout<<"Invalid option";
    }
    return 0;
}