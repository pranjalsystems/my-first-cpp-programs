// Programming Exercise ⭐⭐⭐

// Write a program that:

// Creates an array of 5 integers.
// Takes input using a for loop.
// Prints the array.
// Changes the third element to 100.
// Prints the array again.

// Expected style:

// Enter 5 numbers:
// 1
// 2
// 3
// 4
// 5

// Original:
// 1 2 3 4 5

// Modified:
// 1 2 100 4 5
// Rules
// Use one array.
// Use for loops only.
// Do not use five separate variables.
#include <iostream>
int main(){
    int arr[5];
    std::cout<<"Enter 5 Numbers:\n";
    for(int i=0;i<5;i++){
        std::cin>>arr[i];
    }
    std::cout<<"\n\nOriginal:\n";
    for(int i=0;i<5;i++){
        std::cout<<arr[i]<<" ";
    }
    std::cout<<"\n\nModified:\n";
    arr[2]=100;
    for(int i=0;i<5;i++){
        std::cout<<arr[i]<<" ";
    }
    return 0;
}