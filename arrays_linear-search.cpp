#include <iostream>
int main(){
    int varray[5]={100,83,92,82,77};
    int fvalue=92;
    bool found=false;
    for (int i = 0;i<5;++i){
        if (fvalue==varray[i]){found=true;}
        else{continue;}
    }
    if(found){std::cout<<"Found\n";}
    else{std::cout<<"not Found\n";}
    return 0;
}