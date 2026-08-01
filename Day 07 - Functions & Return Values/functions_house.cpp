// Challenge 3 ⭐⭐⭐

// Create three functions

// void roof()
// void body()
// void base()

// Calling them like

// roof();
// body();
// base();

// should print

//   /\
//  /  \
// ------
// |    |
// |    |
// ------


#include <iostream>
void roof(){
    std::cout<<"  /\\"<<std::endl;  // turns out that singe backslash dont work in c++ so //->/
                                    // "\n"   // newline
                                    // "\t"   // tab
                                    // "\""   // quotation mark
                                    // "\\"   // backslash
    std::cout<<" /  \\"<<std::endl;
}
void body(){
    std::cout<<"------\n";
    std::cout<<"|    |\n";
    std::cout<<"|    |\n";
    std::cout<<"------\n";
    
}
void house(){
    roof();
    body();
}

int main(){
    house();
    return 0;
}