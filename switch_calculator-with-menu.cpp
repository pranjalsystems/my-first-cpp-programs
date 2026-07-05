//✅ Task 4 — Calculator Menu ⭐⭐⭐ (Unchanged)
// Day 6 - Task 4
//Calculator with Menu

//Instead of typing operators:
//
//1 Addition
//2 Subtraction
//3 Multiplication
//4 Division
//
//Use
//
//switch(choice)
//
//Then ask for two numbers.

#include <iostream>
int main(){
    int choice,no1,no2;
    std::cout<<"======Calculator======\n1>Addition\n2>Subtraction\n3>Multiplication\n4>Divison\nEnter Choice: ";
    std::cin>>choice;
    switch(choice)
    {
        case 1:
            std::cout<<"\nEnter First Number: ";
            std::cin>>no1;
            std::cout<<"Enter Second Number: ";
            std::cin>>no2;
            std::cout<<"\nResult ("<<no1<<" + "<<no2<<")= "<<no1+no2;
            break;  
        case 2:
            std::cout<<"\nEnter First Number: ";
            std::cin>>no1;
            std::cout<<"Enter Second Number: ";
            std::cin>>no2;
            std::cout<<"\nResult ("<<no1<<" - "<<no2<<")= "<<no1-no2;
            break;
        case 3:
            std::cout<<"\nEnter First Number: ";
            std::cin>>no1;
            std::cout<<"Enter Second Number: ";
            std::cin>>no2;
            std::cout<<"\nResult ("<<no1<<" x "<<no2<<")= "<<no1*no2;
            break;
        case 4:
            std::cout<<"\nEnter First Number: ";
            std::cin>>no1;
            std::cout<<"Enter Second Number: ";
            std::cin>>no2;
            switch(no2)
            {
                case 0:
                    std::cout<<"\nCannot divide by zero.";
                    break;
                default:
                std::cout<<"\nResult ("<<no1<<" / "<<no2<<")= "<<no1/no2;
                    //break; not important here i guess
            }
            break;
        default:
            std::cout<<"\nInvalid operator";
    }
    return 0;
}