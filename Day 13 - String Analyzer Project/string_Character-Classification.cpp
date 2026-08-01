#include<iostream>
int main(){
    char str[100];
    std::cout<<"Enter string : ";
    std::cin.getline(str,100);
    // int l=0;             //getline() already places '\0' at the end of the string.
    // int length=0;
    // while (str[l]!='\0')
    // {
    //     l++;
    // }
    // length=l+1;
    // str[length]='\0';
    int lettercount=0;
    int upperlettercount=0;
    int lowerlettercount=0;
    int digitcount=0;
    int speciallettercount=0;
    int spacecount=0;
    // char digits[10+1]="0123456789";
    for (int i = 0;str[i]!='\0';i++){
        char j=str[i];//dont want to write str[i] a lot
        if (j>='a' and j<='z' || j>='A' and j<='Z'){
            lettercount++;
            if(j>='a' and j<='z'){lowerlettercount++;}
            else{upperlettercount++;}
        }
        else if(j==' '){
            spacecount++;
        }
        else if (j>='0' and j<='9'){
            digitcount++;
        }
        else{speciallettercount++;}
        // for(int a=0;digits[a]!='\0';a++){         //adds complication 
        //     if (j==digits[i]){digitcount++;}
        // }
    }

    std::cout<<"Letters : "<<lettercount<<"\nUpper   : "<<upperlettercount<<"\nLower   : "<<lowerlettercount<<"\nDigits  : "<<digitcount<<"\nSpaces  : "<<spacecount<<"\nSpecial : "<<speciallettercount;
    return 0;
}