#include<iostream>
int main(){
    char sentence[500];
    std::cout<<"Enter a sentence:";
    std::cin.getline(sentence,500);
    // std::cout<<sentence;
    int i=0;
    int Vowelcount=0;
    while(sentence[i]!='\0'){
        if (sentence[i]=='a' or sentence[i]=='i' or sentence[i]=='u' or sentence[i]=='e' or sentence[i]=='o' or sentence[i]=='A' or sentence[i]=='I' or sentence[i]=='U' or sentence[i]=='E' or sentence[i]=='O'){
            Vowelcount++;
            std::cout<<sentence[i]<<" ";
        }
        i++;
    }
    std::cout<<"\n\nTotal vowels: "<<Vowelcount;
    return 0;
}


// Instead of:
// int Vowelcount = 0;
// I'd write:
// int vowelCount = 0;
// This style is called camelCase.