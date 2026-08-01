// ⭐ Task 3 — Even Numbers

// Example

// Enter limit: 20

// 2
// 4
// 6
// 8
// 10
// 12
// 14
// 16
// 18
// 20

#include <iostream>
int main(){
    int limit;
    std::cout<<"Enter limit: ";
    std::cin>>limit;
    for(int enumber = 2;enumber <= limit;enumber+=2){
        std::cout<<enumber<<"\n";
    }
    return 0;
}