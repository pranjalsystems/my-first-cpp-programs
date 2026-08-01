#include <iostream>
//int main(){
//    int age;
//    std::cout<<"Enter age: ";
//    std::cin>>age;
//    if (age >= 18){
//        std::cout<<"You are an Adult.";
//    }
//    else{
//        std::cout<<"You are a Minor.";
//    }
//    std::cout<<"\n-<End of the code>-";
//    return 0;
//}


int main(){
    int age;
    std::cout<<"Enter your age: ";
    std::cin>>age;
    if (age >= 18){
        std::cout<<"You are an adult.";
    }//; realised that ";" dont come here as it will be excuted in one go
    else if(age<18 and age>=1){
        std::cout<<"You are a minor.";
    }
    else{
        std::cout<<"Invalid Input";
    }
    std::cout<<"\n<End of the code>";
    return 0;
}