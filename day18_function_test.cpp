#include<iostream>
void getstr(char abcdefghijk[]);
// void getint(int);                both changed to pass by values (refrences)
// void getdouble(double);

void getint(int &);
void getdouble(double &);
int main(){
    char string1[100];
    char string2[100];
    getstr(string1);
    getstr(string2);
    int int1;
    int int2;
    getint(int1);
    getint(int2);
    double double1;
    double double2;
    getdouble(double1);
    getdouble(double2);
    getdouble(double1);

    std::cout<<"Strings\n1>"<<string1<<"\n2>"<<string2<<"\n";
    std::cout<<"Integers\n1>"<<int1<<"\n2>"<<int2<<"\n";
    std::cout<<"Doubles\n1>"<<double1<<"\n2>"<<double2<<"\n";

    return 0;
}

void getstr(char x[]){
    std::cout<<"Enter : ";
    std::cin.getline(x,100);
}
// void getint(int x){
//     std::cout<<"Enter Number : ";
//     std::cin>>x;
// }
// void getdouble(double x){
//     std::cout<<"Enter Numeber : ";
//     std::cin>>x;
// }
void getint(int &x){
    std::cout<<"Enter Number : ";
    std::cin>>x;
}
void getdouble(double &x){
    std::cout<<"Enter Numeber : ";
    std::cin>>x;
}


// You just discovered the difference between arrays and normal variables.

// Arrays behave differently.
// char str[]
// acts like giving the function access to the original array.

// But

// int x
// double y
// char c
// float z
// are copied.

// Now compare that with your current code.

// Instead of

// void getint(int x)
// {
//     std::cin >> x;
// }

// you could write

// int getint()
// {
//     int x;
//     std::cin >> x;
//     return x;
// }

// Then

// int int1 = getint();
// int int2 = getint();

// works perfectly because the function returns the entered value.

// So now you know there are two ways to get data back from a function:

// Method 1 (what you already know)
// int getNumber()
// {
//     ...
//     return value;
// }

// Usage:

// int x = getNumber();
// Method 2 (what you're about to learn soon)
// void getNumber(int &x)
// {
//     ...
// }

// Usage:

// int x;
// getNumber(x);

// This second method uses references (&), which are coming up later in your roadmap

















// Then what if I WANT to change it?

// C++ says:

// "Okay, but you must say it explicitly."

// That's why references (&) exist.

// void func(int &x)

// The & tells everyone reading the code:

// "Warning! This function may modify your variable."

// So instead of being accidental, it's intentional.