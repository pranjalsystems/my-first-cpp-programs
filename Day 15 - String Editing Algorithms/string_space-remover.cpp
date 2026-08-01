#include<iostream>
int main(){
    char str[100];
    char newstr[100];
    std::cout<<"Enter string : ";
    std::cin.getline(str,100);
    int j=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i] != ' '){
            newstr[j]=str[i];
            j++;
        }
    }
    newstr[j]='\0';
    std::cout<<"\nSpace Removed : "<<newstr;
    return 0;
}