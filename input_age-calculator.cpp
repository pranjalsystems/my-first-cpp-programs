#include <iostream>
//Enter your age: 18
//In 10 years you will be 28.
//5 years ago you were 13.
int main(){
    int age;
    std::cout<<"Enter your age: ";
    std::cin>>age;
    std::cout<<"In 10 years you will be "<<age+10<<".\n";
    std::cout<<"5 years ago you were "<<age-5<<".";
    return 0;
}