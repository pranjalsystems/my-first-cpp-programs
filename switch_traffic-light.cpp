// Day 6 - Task 5
// Traffice light Decisions using switch statement
#include <iostream>

int main(){
    char choice;
    std::cout<<"======== Traffic Light ========\nR\nY\nG\n\nColor of Traffic Light: ";
    std::cin>>choice;
    
    switch (choice)
    {
    case 'R':
        std::cout<<"STOP!!";
        break;
    case 'Y':
        std::cout<<"WAIT..";
        break;
    case 'G':
        std::cout<<"GO!!";
        break;
    
    default:
        std::cout<<"INVALID SIGNAL";
        break;
    }
    return 0;
}