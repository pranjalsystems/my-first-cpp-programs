#include <iostream>
int main(){
    // int maximum=0;   Doesnt work for negative numbers
    int arr[5];
    std::cout<<"Enter 5 Numbers\n";
    for(int i=0;i<5;++i){
        std::cout<<": ";
        std::cin>>arr[i];
    }
    int maximum=arr[0];
    int minimum=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>maximum){
            maximum=arr[i];
        }
        if(arr[i]<minimum){
            minimum=arr[i];
        }
    }
    std::cout<<"Maximum: "<<maximum<<std::endl<<std::endl;
    std::cout<<"Minimum: "<<minimum<<std::endl;
}