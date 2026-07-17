// This is something many beginners don't notice:
// char word[] = "Hello";

// creates a copy of the characters in your array.

// But
// const char* word = "Hello";
// (or historically char*, though it's incorrect in modern C++)

// points to a string literal stored in read-only memory. Trying to modify that is undefined behavior and often crashes.
// We'll revisit this once we learn pointers. For now, just remember:

// Declaration	Can modify?
// char word[] = "Hello";	✅ Yes
// const char* word = "Hello";	❌ No

#include <iostream>

int main() {
    // char word[] = "Hello";

    // word[0] = 'Y';
    // word[4] = '!';

    // std::cout << word;

    char word[100] = "";
    std::cout<<"Enter text to check for palindrome: ";
    std::cin>>word;
    char rword[100]="";
    int length=sizeof(word)/sizeof(word[0]);
    for(int i = length;i>=0;i--){
        rword[length-i]=word[i];
    }
    if(rword==word){std::cout<<"Palindrome";}
    else{std::cout<<"Not Palindrome";}
}
