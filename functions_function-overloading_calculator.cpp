// 🎯 Day 11 Final Mission: "Utility Calculator"

// This project combines everything you've learned so far.

// Mission

// Build a menu-driven calculator.

// ====== Utility Calculator ======

// 1. Add
// 2. Subtract
// 3. Multiply
// 4. Square
// 5. Larger Number
// 6. Character Info
// 7. Exit

// Choice:
// Requirements
// 1️⃣ Add
// Enter two integers:

// Use

// int add(int,int)
// 2️⃣ Subtract

// Use

// int subtract(int,int)
// 3️⃣ Multiply

// Use

// int multiply(int,int)
// 4️⃣ Square

// Use your overloaded functions

// square(int)

// square(double)
// 5️⃣ Larger Number

// Use

// larger(int,int)

// (from Day 10)

// 6️⃣ Character Info

// Input

// A

// Output

// Character entered: A
// ASCII value: 65

// Hint:

// (int)c

// converts a character into its ASCII value.

// 7️⃣ Exit

// Ends program.

// Rules

// ✅ Use

// switch
// do-while
// functions
// prototypes
// return functions
// overloading

// ❌ Don't copy old code.

// Write it fresh.

// ⭐ Bonus Challenges

// If you finish early:

// Bronze ⭐

// After every operation print

// Press Enter to continue...
// Silver ⭐⭐

// Keep counting how many operations were performed.

// Operations performed: 8

// Print it when exiting.

// Gold ⭐⭐⭐

// Allow the calculator to continue forever until Exit.

// (You've already done something similar with the ATM 😄)


// ====== Utility Calculator ======

// 1. Add
// 2. Subtract
// 3. Multiply
// 4. Square
// 5. Larger Number
// 6. Character Info
// 7. Exit
#include <iostream>
// int add(int,int);
// int subtract(int,int );
// int multiply(int,int);
// int divide(int,int);
// int square(int);
// double square(double);
// int large_no(int,int);
// void ascii(char);

// int main(){
//     int a;
//     int b;
//     int choice;    
//     char char_choice;
//     int result;
//     std::cout<<"====== Utility Calculator ======\n\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Square\n6. Larger Number\n7. Character Info\n8. Exit\n";
//     do{    
//         std::cout<<"Enter choice: ";
//         std::cin>>choice;
//         if (1<=choice<=6 and choice!=5){
//             std::cout<<"Enter First number: ";
//             std::cin>>a;
//             std::cout<<"Enter Second number: ";
//             std::cin>>b;      
//             switch (choice){
//             case 1:
//                 result=add(a,b);
//                 std::cout<<result<<"\n";
//                 break;
//             case 2:
//                 result=subtract(a,b);
//                 std::cout<<result<<"\n";
//                 break;
//             case 3:
//                 result=multiply(a,b);
//                 std::cout<<result<<"\n";
//                 break;
//             case 4:
//                 if (b!=0){result=divide(a,b);std::cout<<result<<"\n";}
//                 else{std::cout<<"Cannot divide by zero.\n";}
//                 break;
//             case 6:
//                 result=large_no(a,b);
//                 std::cout<<result<<"\n";
//                 break;
//             }
//         }
//         else if (choice==5){
//             int choice2;
//             int x;
//             double y;
//             std::cout<<"1. Integer\n2. Double\nEnter choice: ";
//             std::cin>>choice2;
//             std::cout<<"Enter Number: ";
//             switch(choice2){
//                 case 1:
//                     std::cin>>x;
//                     result=square(x);
//                     std::cout<<result<<"\n";
//                     break;
//                 case 2:
//                     std::cin>>y;
//                     result=square(y);
//                     std::cout<<result<<"\n";
//                     break;
//             }
//         }
//         else if(choice==7){
//             std::cout<<"Choose a Character: ";
//             std::cin>>char_choice;
//             ascii(char_choice);
//         }
//         else if(choice==8){
//             std::cout<<"exiting......";
//         }
//     }
//     while (choice!=8);
// }

// int add(int a,int  b){return a+b;}
// int subtract(int a,int  b){return a-b;}
// int multiply(int a,int b){return a*b;}
// int divide(int a,int  b){return a/b;}
// int large_no(int a,int  b){
//     if (a>b){return a;}
//     else if (b>a){return b;}
//     else{return a;}
// }
// int square(int a){return a*a;}
// double square(double a){return a*a;}
// void ascii(char a){
//     std::cout<<"ASCII value = "<<(int)a;
// }

//double is better and fixed some bugs
double add(double,double);
double subtract(double,double );
double multiply(double,double);
double divide(double,double);
int square(int);
double square(double);
double large_no(double,double);
void ascii(char);

int main(){
    double a;
    double b;
    int choice;    
    char char_choice;
    double result;
    std::cout<<"====== Utility Calculator ======\n\n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Square\n6. Larger Number\n7. Character Info\n8. Exit\n";
    do{    
        std::cout<<"Enter choice: ";
        std::cin>>choice;
        if (1<=choice and choice<=6 and choice!=5 ){
            std::cout<<"Enter First number: ";
            std::cin>>a;
            std::cout<<"Enter Second number: ";
            std::cin>>b;      
            switch (choice){
            case 1:
                result=add(a,b);
                std::cout<<result<<"\n";
                break;
            case 2:
                result=subtract(a,b);
                std::cout<<result<<"\n";
                break;
            case 3:
                result=multiply(a,b);
                std::cout<<result<<"\n";
                break;
            case 4:
                if (b!=0){result=divide(a,b);std::cout<<result<<"\n";}
                else{std::cout<<"Cannot divide by zero.\n";}
                break;
            case 6:
                result=large_no(a,b);
                std::cout<<result<<"\n";
                break;
            }
        }
        else if (choice==5){
            int choice2;
            int x;
            double y;
            std::cout<<"1. Integer\n2. Double\nEnter choice: ";
            std::cin>>choice2;
            switch(choice2){
                case 1:
                    std::cout<<"Enter Number: ";
                    std::cin>>x;
                    result=square(x);
                    std::cout<<result<<"\n";
                    break;
                case 2:
                    std::cout<<"Enter Number: ";
                    std::cin>>y;
                    result=square(y);
                    std::cout<<result<<"\n";
                    break;
                default:
                    std::cout<<"<Invalid Input>\n";
                    break;

            }
        }
        else if(choice==7){
            std::cout<<"Choose a Character: ";
            std::cin>>char_choice;
            ascii(char_choice);
        }
        else if(choice==8){
            std::cout<<"exiting......";
        }
        else{std::cout<<"<Invalid Input>\n";}
    }
    while (choice!=8);
    return 0;
}

double add(double a,double  b){return a+b;}
double subtract(double a,double  b){return a-b;}
double multiply(double a,double b){return a*b;}
double divide(double a,double  b){return a/b;}
double large_no(double a,double  b){
    if (a>b){return a;}
    else if (b>a){return b;}
    else{return a;}
}
int square(int a){return a*a;}
double square(double a){return a*a;}
void ascii(char a){
    std::cout<<"ASCII value = "<<(int)a<<"\n";
}