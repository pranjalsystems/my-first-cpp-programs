#include<iostream>
void calculate(int,int,int &, int &);
int main(){
    int number,number2;
    int add,multiple;

    std::cout<<"enter a number:";
    std::cin>>number;
    std::cout<<"enter a number:";
    std::cin>>number2;
    
    calculate(number,number2,add,multiple);
    std::cout<<"sum: "<<add<<"\nmultiple: "<<multiple;

    return 0;
}
void calculate(int a, int b, int &sum, int &product){
    sum=a+b;
    product=a*b;
}