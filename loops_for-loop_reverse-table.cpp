// ⭐ Task 5 — Reverse Table

// Example

// Enter number: 7

// 7 x 10 = 70
// 7 x 9 = 63
// ...
// 7 x 1 = 7

#include <iostream>
int main(){
    int limit;
    int main_no;
    std::cout<<"Enter the Number you want Table Of : ";
    std::cin>>main_no;
    std::cout<<"Enter upto How much you want Table Of : ";
    std::cin>>limit;
    for(int count = limit;count >= 1;count--){
        std::cout<<main_no<<" x "<<count<<" = "<<main_no*count<<"\n";// **(of python) but fot c++ i learnt that it doesnt exist updat i learnt about pow(base,exponent) [{using "include <cmath>"}] but it returns float
    }
    return 0;
}