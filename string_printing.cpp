#include<iostream>
int main(){
    char word[]="C++ is Interesting";
    std::cout<<"Method 1\n";
    std::cout<<word;

    std::cout<<"\nMethod 2\n";
    int size_of_char;
    size_of_char = sizeof(word) / sizeof(word[0]);
    for (int i = 0;i<size_of_char;++i){
        std::cout<<word[i]<<"";
    }
    // return 0;// program stops after this

    std::cout<<"\nMethod 3\n";
    // int size_of_char;// isee one defined if you redefine same variable it shows error
    // size_of_char = sizeof(word) / sizeof(word[0]);
    for (int i = 0;i<size_of_char;++i){
        std::cout<<word[i]<<"\n";
    }

    
    std::cout<<"\n\nExtras\n";
    for (int i = size_of_char;i>=0;--i){
        std::cout<<word[i];
    }
    for (int i = size_of_char;i>=0;--i){
        std::cout<<word[i]<<"\n";
    }
    return 0;
}