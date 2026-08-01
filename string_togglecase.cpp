void string_togglecase(char[]);
#include<iostream>
int main(){
    char str[100];
    std::cout<<"Enter string : ";
    std::cin.getline(str,100);
    string_togglecase(str);
    std::cout<<"\nToggle Case : "<<str;
    return 0;
}

void string_togglecase(char x[]){
    for(int i=0;x[i]!='\0';i++){
        if(x[i]>='A' && x[i]<='Z'){
            x[i]=x[i]+('a'-'A');
        }
        else if(x[i]>='a' && x[i]<='z'){
            x[i]=x[i]-('a'-'A');
        }
    }
}