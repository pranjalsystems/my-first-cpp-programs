// Day 16 New Concept

// Today you're ready for the most important string loop ever:
#include<iostream>
int main(){
    char word[]="Hello";
    int i=0;
    while (word[i]!='\0')
    {
        std::cout<<word[i];
        i++;
    }
    return 0;
    
}

// This is how we traverse a string without using sizeof().