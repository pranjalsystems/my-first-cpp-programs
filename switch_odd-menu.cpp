//// Day 6 - Task 6
// Even/Odd number distinctor using switch
#include <iostream>

int main(){
    int choice;
    int number;
    std::cout<<"1 Check Even\n2 Check Odd\n3 Check if a Number entered iseven or odd\nEnter Choice: ";
    std::cin>>choice;
    switch (choice)
    {
        case 1:
            std::cout<<"Enter The Number: ";
            std::cin>>number;
            if (number%2==0)
            {
                std::cout<<"Yes,It's Even.";
            } 
            else{
                std::cout<<"No,It's Odd.";
            }
            break;
        case 2:
                std::cout<<"Enter The Number: ";
                std::cin>>number;
            if (number%2==1)
            {
                std::cout<<"Yes,It's Odd.";
            } 
            else{
                std::cout<<"No,It's Even.";
            }
            break;
        case 3:
                std::cout<<"Enter The Number: ";
                std::cin>>number;
            if (number%2==0)
            {
                std::cout<<number<<" is Even";
            } 
            else{
                std::cout<<number<<" is Odd";
            }
            break;
        default:
            std::cout<<"Invalid Choice";
            break;
    }

}