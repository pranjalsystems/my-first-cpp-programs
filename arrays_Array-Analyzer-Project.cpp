// Mission

// Ask the user for 5 integers.

// Then calculate and print:

// Sum

// Average

// Maximum

// Minimum

// Number Found? (Search)
// Example

// Input

// 10
// 25
// 3
// 17
// 8

// Search

// 17

// Output

// Array Analysis

// Sum      : 63

// Average  : 12.6

// Maximum  : 25

// Minimum  : 3

// 17 Found!
// Rules

// You must use:

// ✅ Array

// ✅ for loops

// ✅ bool

// ✅ if statements

// You may use

// break;

// for the search.

// Structure

// Category	Marks
// Correctness	/10
// Readability	/10
// Variable Names	/10
// Algorithm Thinking	/10
// Efficiency	/10 #intresting

// Total: /50
#include <iostream>
int main(){
    int sum=0;
    int array[5];
    std::cout<<"Enter Numbers\n";
    for (int i=0;i<5;i++){
        std::cout<<": ";
        std::cin>>array[i];
        sum+=array[i];       
    }
    int maximum=array[0];
    int minimum=array[0]; 
    int mark;
    bool found=false;
    int occurrenceCount=0;
    std::cout<<"Enter number to be found : ";
    std::cin>>mark;
    std::cout<<"Array:\n\n";
    for (int i=0;i<5;i++){
        if (maximum<array[i]){maximum=array[i];}
        if (minimum>array[i]){minimum=array[i];}
        if (array[i]==mark){found=true;occurrenceCount++;}
        std::cout<<array[i]<<" ";
    }
    std::cout<<"\n\nArray Analysis\n";
    std::cout<<"Sum         :"<<sum<<std::endl;
    std::cout<<"Average     :"<<double(sum)/5<<std::endl;
    std::cout<<"Maximum     :"<<maximum<<std::endl;
    std::cout<<"Minimum     :"<<minimum<<"\n\n";
    if (found){std::cout<<mark<<" Found!\n"<<"Occurrence : "<<occurrenceCount<<std::endl;}
    else{std::cout<<mark<<" Not Found \n";}
    return 0;
}