// 📂 string_analyzer.cpp

// Your program will:

// Read a sentence using getline().
// Print the sentence.
// Print:
// Length
// Number of vowels
// Number of consonants
// Number of spaces
// Number of digits
// (Optional) Print the reversed sentence.

// This project will combine everything you've learned so far about strings.


#include<iostream>
int main(){
    char sentence[500];
    char vowelsentence[500];
    char consonantsentence[500];
    char digitsentence[500];
    int i=0;
    int v=0;
    int c=0;
    int d=0;
    int vowelcount=0;
    int length=0;
    int consonantcount=0;
    int spacecount=0;
    char constant[21*2+1]="BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";//the why>22, bugged me too but it is +1 for end charater '\0'
    char digit[10+1]="0123456789";
    int digitcount=0;

    std::cout<<"Enter a sentence:";
    std::cin.getline(sentence,500);
    while(sentence[i]!='\0'){
        std::cout<<sentence[i];
        if (sentence[i]=='a' or sentence[i]=='i' or sentence[i]=='u' or sentence[i]=='e' or sentence[i]=='o' or sentence[i]=='A' or sentence[i]=='I' or sentence[i]=='U' or sentence[i]=='E' or sentence[i]=='O'){
            vowelcount++;
            vowelsentence[v]=sentence[i];
            v++;
        }
        
        int j=0;
        while(constant[j]!='\0'){
            if (sentence[i]==constant[j]){
                consonantcount++;
                consonantsentence[c]=sentence[i];
                c++;
            }
            j++;
        }
        if (sentence[i]==' '){spacecount++;}
        int k=0;
        while(digit[k]!='\0'){
            if (sentence[i]==digit[k]){
                digitcount++;
                digitsentence[d]=sentence[i];
                d++;
            }
            k++;
        }
        length++;
        i++;
    }
    //as these were of 500 so they automatically have random character so to fix them
    vowelsentence[v] = '\0';
    consonantsentence[c] = '\0';
    digitsentence[d] = '\0';
    std::cout<<"\n"<<sentence<<"\nLength: "<<length<<"\nNumber of vowels: "<<vowelcount<<"\nNumber of consonants: "<<consonantcount<<"\nNumber of spaces: "<<spacecount<<"\nNumber of digits: "<<digitcount;
    std::cout<<"\nVowel:";for(int a=0;vowelsentence[a]!='\0';a++){std::cout<<vowelsentence[a]<<" ";}
    std::cout<<"\nConstant:";for(int a=0;consonantsentence[a]!='\0';a++){std::cout<<consonantsentence[a]<<" ";}
    std::cout<<"\nDigit:";for(int a=0;digitsentence[a]!='\0';a++){std::cout<<digitsentence[a]<<" ";}
    std::cout<<"\nReverse Sentence:";for(int a=length-1;a>=0;a--){std::cout<<sentence[a];}
    return 0;
}