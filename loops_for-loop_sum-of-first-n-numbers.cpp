// ⭐ Task 2 — Sum of First N Numbers


// Example:>

// Enter N: 5
// Sum = 15
#include <iostream>
int main(){
    int N;
    int sum=0;
    std::cout<<"Enter N: "; 
    std::cin>>N;
    for(int count=1;count<=N;count++){
        sum+=count;
    }
    std::cout<<"Sum = "<<sum;
    return 0;
}