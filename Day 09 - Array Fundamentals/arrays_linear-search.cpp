#include <iostream>
int main(){
    int varray[5]={100,83,92,82,77};
    int fvalue;
    bool found=false;
    int occurrence=0;
    std::cout<<"Enter number to be found: ";
    std::cin>>fvalue;
    for (int i = 0;i<5;++i){
        if (fvalue==varray[i]){found=true;occurrence+=1;}
    }
    if(found){std::cout<<"Found "<<occurrence<<std::endl;}
    else{std::cout<<"not Found "<<std::endl;}
    return 0;
}