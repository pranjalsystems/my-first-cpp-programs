// Day 6 - Task 1
// Basic Calculator using switch statement


//Target:>
//Enter first number: 10
//Enter operator (+ - * /): *
//Enter second number: 7
//
//Result = 70

#include <iostream>
//int main(){
//    int no1;
//    int no2;
//    char op;//basically string(.py) of c++
//    std::cout<<"Enter first number: ";
//    std::cin>>no1;
//    std::cout<<"Enter operator (+ - * /): ";
//    std::cin>>op;
//    switch(op)
//    {
//        case '+':
//            std::cout<<"Enter second number: ";
//            std::cin>>no2;
//            std::cout<<"Result = "<<no2+no1;
//            break;  
//        case '-':
//            std::cout<<"Enter second number: ";
//            std::cin>>no2;
//            std::cout<<"Result = "<<no2-no1;
//            break;
//        case '*':
//            std::cout<<"Enter second number: ";
//            std::cin>>no2;
//            std::cout<<"Result = "<<no2*no1;
//            break;
//        case '/':
//            std::cout<<"Enter second number: ";
//            std::cin>>no2;
//            std::cout<<"Result = "<<no2/no1;
//            break;
//        default:
//            std::cout<<"Invalid operator";
//    }
//    return 0;
//}


//Added zero division error and applied DRY(dont repeat yourself)
int main(){
    int no1;
    int no2;
    char op;//basically string(.py) of c++
    std::cout<<"Enter first number: ";
    std::cin>>no1;
    std::cout<<"Enter operator (+ - x /): ";
    std::cin>>op;
    std::cout<<"Enter second number: ";
    std::cin>>no2;
    switch(op)
    {
        case '+':
            std::cout<<"Result ("<<no1<<" + "<<no2<<")= "<<no1+no2;
            break;  
        case '-':
            std::cout<<"Result ("<<no1<<" - "<<no2<<")= "<<no1-no2;
            break;
        case 'x':
            std::cout<<"Result ("<<no1<<" x "<<no2<<")= "<<no1*no2;
            break;
        case '/':
            switch(no2)
            {
                case 0:
                    std::cout<<"Cannot divide by zero.";
                    break;
                default:
                std::cout<<"Result ("<<no1<<" / "<<no2<<")= "<<no1/no2;
                    //break; not important here i guess
            }
            break;
        default:
            std::cout<<"Invalid operator";
    }
    return 0;
}