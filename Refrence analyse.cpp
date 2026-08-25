#include <iostream>
void analyze(int a, int b, int &sum, int &difference, int &product){
    sum=a+b;
    difference=a>b ? a-b:b-a;
    product=a*b;
}
int main(){
    int first;int second;int add;int delta;int mult; 
    std::cout<<"Enter first number: ";
    std::cin>>first;
    std::cout<<"Enter second number: ";
    std::cin>>second;
    analyze(first,second,add,delta,mult);
    std::cout<<"First: "<<first<<"\nSecond: "<<second<<"\nSum: "<<add<<"\nDiffrence: "<<delta<<"\nProduct: "<<mult;
    return 0;
}