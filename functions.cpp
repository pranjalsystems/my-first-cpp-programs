// Function Syntax

// return_type function_name(parameters)
// {
//     // work
// }

// Example:

// void greet()
// {
//     std::cout << "Hello!\n";
// }

// Then in main():

// int main()
// {
//     greet();
//     greet();
//     greet();
// }

// Output
// Hello!
// Hello!
// Hello!


// Why void?

// A function can either:
// -return something
// -return nothing

// If it returns nothing:

// void greet()


// Example 2
// #include <iostream>

// void line()
// {
//     std::cout << "----------------\n";
// }

// int main()
// {
//     line();
//     std::cout<<"Welcome\n";
//     line();
// }

// Output
// ----------------
// Welcome
// ----------------

#include <iostream>
void line(){//no parameter here, i think that only applies when you want to use some parameter and return something out of function
    std::cout<<"---------------------------------------------------------------------------\n";
}

int main(){
    line();
    std::cout<<"Hello !\n";
    line();
    return 0;
}