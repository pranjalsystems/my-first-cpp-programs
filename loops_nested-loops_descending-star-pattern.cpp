#include <iostream>
int main(){
    int stars;
    std::cout<<"Enter number of stars in the first line : ";
    std::cin>>stars;
    for(int count=1;count<=stars;count++){
        for(int j=stars;j>=count;j--){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
    return 0;
}