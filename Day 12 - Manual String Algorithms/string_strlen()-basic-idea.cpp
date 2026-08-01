#include<iostream>
int strlen(char x[]);
int main(){
    int length;
    char str[100]="";
    std::cout<<"Enter a text:";
    // std::cin>>str;
    std::cin.getline(str,100);
    length=strlen(str);
    std::cout<<"strlen("<<str<< ")="<<length;
    return 0;
}

int strlen(char x[]){
    int len=0;
    int i=0;
    while(x[i]!='\0'){
        len++;
        i++;
    }
    return len;
}