#include <iostream>
int main(){
    char word[100]={};
    std::cout<<"Method 1\n";
    std::cout<<word<<"\n\n";

    std::cout<<"Enter Text: ";
    std::cin>>word;
    std::cout<<word<<"\n";//print word till white space
    return 0;
}


// This line:
// std::cin >> word;

// reads only one word.
// Think of >> as saying:
// "Read characters until you hit whitespace."

// Whitespace means:
// Space ' '
// Tab '\t'
// Newline (Enter)

// So your input is treated like this:
// this works good thank mentor
// ^^^^
// |
// Only this part goes into word

// The rest stays waiting in the input buffer.