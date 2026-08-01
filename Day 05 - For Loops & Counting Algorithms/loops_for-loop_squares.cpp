// ⭐ Task 4 — Squares

// Example

// 1 -> 1
// 2 -> 4
// 3 -> 9
// 4 -> 16
// 5 -> 25
#include <iostream>
int main(){
    int limit;
    std::cout<<"Enter limit : ";
    std::cin>>limit;
    for(int count = 1;count <= limit;count++){
        std::cout<<count<<" -> "<<count*count<<"\n";// **(of python) but fot c++ i learnt that it doesnt exist updat i learnt about pow(base,exponent) [{using "include <cmath>"}] but it returns float
    }
    return 0;
}