// Mission 16.1
// Requirements:

// Create:
// char sentence[100];
// Ask:
// Enter a sentence:
// Use:
// std::cin.getline(...)
// Print:
// You entered:
// followed by the sentence.

// Bonus Challenge 🌸
// After printing the sentence, print:
// Length:
// using your own strlen() function, not the library version.
// Example:

// Enter a sentence:
// Hello World

// You entered:
// Hello World

// Length: 11

#include<iostream>
int strlen(const char x[]);
int main(){
    int word_len;
    char input[100]="";
    std::cout<<"Enter a sentence:\n";
    std::cin.getline(input,100);
    word_len=strlen(input);
    std::cout<<"\nYou entered:\n"<<input<<"\n\nLength: "<<word_len;
    return 0;
}

int strlen(const char x[]){
    int len=0;
    int i=0;
    while(x[i]!='\0'){
        len++;
        i++;
    }
    return len;
}

// AI suggestion
// Tiny Professional Improvement
// Currently:

// int strlen(char x[])
// The function doesn't modify the string.

// Professional style would be:
// int strlen(const char x[])

// The keyword:
// const

// means:
// "I promise not to modify this array."