void string_lower(char[]);
#include<iostream>
int main(){
    char str[100];
    std::cout<<"Enter string : ";
    std::cin.getline(str,100);
    string_lower(str);
    std::cout<<"\nLower :"<<str;
    return 0;
}

void string_lower(char x[]){
    for(int i=0;x[i]!='\0';i++){
        if(x[i]>='A' && x[i]<='Z'){
            x[i]=x[i]+('a'-'A');
        }
    }
}