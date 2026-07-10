// Your First Challenge ⭐

// Write a function named

// welcome()

// that prints

// ==================
// Welcome to C++
// ==================

// Then call it three times from main().

#include <iostream>
void line(){
    std::cout<<"\n==================\n";
}
void welcome(){
    line();
    std::cout<<"Welcome to C++";
    line();
}
int main(){
    welcome();
    welcome();
    welcome();
    return 0;
}