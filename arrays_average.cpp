// Write a program that:

// 1. Takes **5 integers**.
// 2. Stores them in an array.
// 3. Calculates the sum.
// 4. Calculates the average.
// 5. Prints both.

// Example
// Enter 5 numbers: 
// 10
// 20
// 30
// 40
// 50

// Sum = 150

// Average = 30

#include <iostream>
int main(){
    int sum =0;
    int arr[5];
    std::cout<<"Enter 5 Numbers\n";
    for(int i=0;i<5;++i){
        std::cout<<": ";
        std::cin>>arr[i];
    }
    for(int i=0;i<5;++i){sum+=arr[i];}
    std::cout<<"Sum = "<<sum<<std::endl;
    std::cout<<"Average = "<<double(sum)/5;
    return 0;
}