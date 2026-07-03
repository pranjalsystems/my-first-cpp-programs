#include <iostream>
//target
//Enter first number: 8
//Enter second number: 15
//Sum = 23
//int main(){
//    int no1;
//    int no2;
//    std::cout<<"Enter first number:";
//    std::cin>>no1;
////    std::cout<<"\nEnter second number:";//seems like cin gives "\n automatically" <<realised that on clicking enter it happens>>
//    std::cout<<"Enter second number:";
//    std::cin>>no2;
//    std::cout<<"Sum = "<<no1+no2;
//    return 0;
//}


int main(){
    int no1,no2;
    std::cout<<"Enter 2 no.: ";
    std::cin>>no1>>no2;
    std::cout<<no1*no2;
    return 0;
}