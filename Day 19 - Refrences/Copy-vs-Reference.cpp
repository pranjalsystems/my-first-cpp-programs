// Copy vs Reference
#include<iostream>

void copy(int);
void original(int &);
int addfive(int);
int main(){
    int number;
    std::cout<<"enter a number:";
    std::cin>>number;
    copy(number);
    std::cout<<"working on Copy(): "<<number;
    original(number);
    std::cout<<"\nworking on Original(): "<<number;
    number=addfive(number);
    std::cout<<"\n+5(): "<<number;
    return 0;
}

void copy(int x){x=111;}
void original(int &x){x=999;}

// 🔥 Bonus
// After that, create:
// int addFive(int x);
// It should return the original value + 5 without modifying the original variable.
// Test:
// a = 10
// result = addFive(a)
// a = ?
// result = ?
// This will force you to distinguish three different ideas:
// copy → reference → return value
int addfive(int x){return x+5;}