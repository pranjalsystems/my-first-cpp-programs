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
#include <cstring> // Required for strlen and strcmp ////NOTE asked for help as rword==word compares memory address/location
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
    //Manually append the null-terminator to the end of rword
    rword[length] = '\0';
    // for(int i = length;i>=0;i--){
    //     rword[length-i]=word[i];
    // }

    for (int i = 0; i < length; i++) {
        rword[i] = word[length - 1 - i];
    }
    std::cout<<rword<<"\n";//was empty as "" ='\0'
    std::cout<<word<<"\n";
    // if(rword==word){std::cout<<"Palindrome";}
    if (std::strcmp(rword, word) == 0) {
        std::cout << "Palindrome\n";
    }
    else{std::cout<<"Not Palindrome";}
    return 0;
}
