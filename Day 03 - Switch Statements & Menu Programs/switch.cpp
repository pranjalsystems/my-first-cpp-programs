#include <iostream>
int main(){
    int choice;
    std::cout<<"Enter number from 1 to 3: ";

    switch (choice)
    {
    case 1:
        std::cout<<"Apple.";
        break;
    case 2:
        std::cout<<"Banana.";
        break;
    case 3:
        std::cout<<"Orange.";
        break;
    default:
        std::cout<<"Invalid";
        break;
    }
    return 0;
}