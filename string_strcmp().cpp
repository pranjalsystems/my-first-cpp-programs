#include<iostream>
int main(){
    char str[100];
    char str2[100];
    std::cout<<"First : ";
    std::cin.getline(str,100);
    std::cout<<"Second : ";
    std::cin.getline(str2,100);
    bool isEqual=true;
    // if (sizeof(str)==sizeof(str2))               //always true
    // {
    //     for(int i=0;str[i]!='\0';i++){
    //         if(isEqual){                           //can be ommited by adding break; in line16
    //             if(str[i]!=str2[i]){
    //                 isEqual=false;
    //                  
    //             }
    //         }
    //     }
    // }
    // else{
    //     isEqual=false;
    // }

    int i=0;
    while (str[i]!='\0' or str2[i]!='\0'){ // as '\0'!='char' and we automatically get not isEqual
        if(str[i]!=str2[i]){
            isEqual=false;
            break;
        }
        i++;
    }
    std::cout<<"\nResult\n";
    if(isEqual){
        std::cout<<"Equal";
    }
    else{
        std::cout<<"Not Equal";
    }
    return 0;
}