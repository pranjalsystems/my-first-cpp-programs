#include <iostream>
int main(){
    int main_no;
    int upto_no;
    int count=1;
    std::cout<<"Enter the Number you want Table Of : ";
    std::cin>>main_no;
    std::cout<<"Enter upto How much you want Table Of : ";
    std::cin>>upto_no;

    while(upto_no>=count){
        std::cout<<main_no<<" X "<<count<<" = "<<count*main_no<<"\n";
        count++;
    }
    return 0;
}