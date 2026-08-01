#include <iostream>
int main(){
    int arr[5]={2,4,6,8,10};
    int sum=0;
    int multiple=1;
    for (int i=0;i<5;i++){
        std::cout<<"Sum : "<<sum<<"+"<<arr[i]<<"= ";
        sum+=arr[i];
        std::cout<<sum<<std::endl;
    }
    std::cout<<"\n";
    for (int i=0;i<5;i++){
        std::cout<<"Multiple : "<<multiple<<"X"<<arr[i]<<"= ";
        multiple*=arr[i];
        std::cout<<multiple<<std::endl;
    }
    return 0;
}