// Rules
// ✅ Must use references
// ✅ void
// ❌ No std::swap
// ❌ No global variables
// ❌ Don't return anything
// ✅ You may create one temporary variable inside the function

// And here's the important question I want you to answer before coding:
#include<iostream>
void swap(int &x,int &y){
    int temp;
    temp=x;
    x=y;
    y=temp;
}

int main(){
    int first;int second;
    std::cout<<"Enter first number: ";
    std::cin>>first;
    std::cout<<"Enter second number: ";
    std::cin>>second;
    std::cout<<"Before:\nfirst: "<<first<<"\nsecond: "<<second<<"\n\n";
    swap(first,second);
    std::cout<<"After:\nfirst: "<<first<<"\nsecond: "<<second;
    return 0;
}