// 🏆 Today's Challenge

// Write a program that prints this without hardcoding the stars:

// *
// **
// ***
// ****
// *****

// Rules:

// Use nested for loops.
// No multiple cout << "*" statements.
// The number of rows should be 5.


#include <iostream>
int main(){
    int stars;
    std::cout<<"Enter number of stars in the last line : ";
    std::cin>>stars;
    for(int count=1;count<=stars;++count){
        for(int j=1;j<=count;j++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}

