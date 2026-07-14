// These two are exactly equivalent:
// char word[] = "Hello";
// and
// char word[6] = {'H','e','l','l','o','\0'};



// ⭐ Your Biggest Question
// Are they the same as std::string?

// Answer:
// ❌ No.
// They look similar.

// But they're completely different things underneath.
// C-style string
// char word[] = "Hello";
// Memory:
// H
// e
// l
// l
// o
// \0

// It's literally
// an array of characters.
// Nothing more.

// std::string
// std::string word = "Hello";

// This is NOT an array.
// It is an object.

// You haven't learned objects yet, so imagine it as a smart box.
// Inside the box, it stores characters.

// But the box also knows:
// its length
// how to grow
// how to compare strings
// how to concatenate strings
// lots of other useful things
#include<iostream>
int main(){
    char word[]="C++ is Interesting";
    std::cout<<word[0]<<"\n\n";
    int size_of_char;
    size_of_char = sizeof(word) / sizeof(word[0]);
    for (int i = 0;i<size_of_char;++i){
        std::cout<<word[i]<<" ";
    }

    // char word[1000]="";              DROPPED:Reason:field not explored
    // char stopper[]="0";
    // int index=0;
    // while(true){
    //     std::cout<<"Enter Text: ";
    //     std::cin>>stopper;
    //     if (stopper=="0"){word[index]='\0';}//error:invalid conversion from 'const char*' to 'char' [-fpermissive]
    //     else{word[index]=stopper;}//errors:a value of type "char *" cannot be assigned to an entity of type "char" and invalid conversion from 'char*' to 'char' [-fpermissive]
    //     index++;
    // }



    // std::cout<<word[0]<<"\n\n";
    // int size_of_char;
    // size_of_char = sizeof(word) / sizeof(word[0]);
    // for (int i = 0;i<size_of_char;++i){
    //     std::cout<<word[i]<<" ";
    // }
    
    return 0;
}