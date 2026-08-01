// Quest 17.1 — Make every letter UPPERCASE
// Input:
// hello World
// Output:
// HELLO WORLD

// Rules
// ❌ Don't use
// toupper()
// string

// Use only:
// char sentence[500];
// and loops.

// Tiny Hint
// Remember the ASCII table?

// a = 97
// A = 65
// difference = 32
#include <iostream>
void string_upper(char[]);
int main(){
    char sample[500]="AbcDeFg";

    // char newstr[500];
    // int length;
    // for(int i=0;str[i]!='\0';i++){
    //     if ((int)str[i]<=122 and (int)str[i]>=97){
    //         newstr[i]=str[i]-32;
    //     }
    //     else{
    //         newstr[i]=str[i];
    //     }
    //     length=i;
    // }
    // newstr[length]='\0';
    string_upper(sample);//changes directly due to something i havent yet learned: ponters


    std::cout<<"\nNew string : "<<sample;//<<" \nLength : "<<length;
    return 0;
}

// char string_upper(char x[500]){          //char expects only one character
//     char newstr[500];
//     for(int i=0;x[i]!='\0';i++){
//         if ((int)x[i]<=122 and (int)x[i]>=97){
//             newstr[i]=x[i]-32;
//         }
//         else{
//             newstr[i]=x[i];
//         }
//     }
//     return newstr;                       // more than 1 char
// }

void string_upper(char str[]){
    int length;
    for(int i=0;str[i]!='\0';i++){
        // if ((int)str[i]<=122 and (int)str[i]>=97)
        if (str[i] >= 'a' && str[i] <= 'z'){
            str[i]=str[i]-32;
        }
        else{
            str[i]=str[i];
        }
        length=i+1;
    }
    str[length]='\0';
}