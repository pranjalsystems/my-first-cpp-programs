// Mini Challenge 3 ⭐⭐⭐

// Write three overloaded functions

// square(int)

// square(double)

// square(char)

// Requirements

// If user enters

// 5

// return

// 25

// If user enters

// 2.5

// return

// 6.25

// If user enters

// A

// print

// Character entered: A

// #include <iostream>

// DROPPED <<MY idea was to use all input in a single variable and check if it int,double,char  but i realised that stuff is advanced so we stopped and got a revised goal
// int square(int);
// int square(double);
// void square(char);
// int main(){
//     int x;
//     double y;
//     char z;
//     std::cout<<"Enter : ";
//     std::cin>>x;
//     std::cout<<square(x);
//     std::cout<<"Enter : ";
//     std::cin>>y;
//     std::cout<<square(y);
//     std::cout<<"Enter : ";
//     std::cin>>z;
//     std::cout<<square(z);
    
// }
// int square(int a){
//     return a*a;
// }
// int square(double a){
//     return a*a;
// }
// void square(char a){
//     std::cout<<"Character entered: A";
// }


// ===== Square Tester =====

// 1. Integer
// 2. Double
// 3. Character
// 4. Exit

// Choice:


// #include <iostream>
// int square(int);
// int square(double);
// void square(char);
// int main(){
//     int x;
//     double y;
//     char z;
//     int choice;
//     std::cout<<"===== Square Tester =====\n\n1. Integer\n2. Double\n3. Character\n4. Exit\n\n";
//     do{
//         std::cout<<"Choice:";
//         std::cin>>choice;
//         switch (choice){
//             case 1:
//                 std::cout<<"Enter : ";
//                 std::cin>>x;
//                 std::cout<<square(x)<<"\n";
//                 break;
//             case 2:
//                 std::cout<<"Enter : ";
//                 std::cin>>y;
//                 std::cout<<square(y)<<"\n";
//                 break;
//             case 3:
//                 std::cout<<"Enter : ";
//                 std::cin>>z;
//                 square(z);
//                 break;
//             case 4:
//                 break;
//             default:
//                 std::cout<<"<Enter a Valid Option>\n";
//                 break;
//             }
//         }
//     while(choice !=4);
//     return 0;
// }

// int square(int a){
//     return a*a;
// }
// int square(double a){
//     return a*a;
// }
// void square(char a){
//     std::cout<<"Character entered:"<<a<<"\n";
// }


//upgrade!!!
#include <iostream>
#include <string>
int square(int);
double square(double);
void square(char);
void square(std::string);
int main(){
    int x;
    double y;
    char z;
    std::string p;
    int choice;
    std::cout<<"===== Square Tester =====\n\n1. Integer\n2. Double\n3. Character\n4. String\n5. Exit\n\n";
    do{
        std::cout<<"Choice:";
        std::cin>>choice;
        switch (choice){
            case 1:
                std::cout<<"Enter : ";
                std::cin>>x;
                std::cout<<square(x)<<"\n";
                break;
            case 2:
                std::cout<<"Enter : ";
                std::cin>>y;
                std::cout<<square(y)<<"\n";
                break;
            case 3:
                std::cout<<"Enter : ";
                std::cin>>z;
                square(z);
                break;
            case 4:
                std::cout<<"Enter : ";
                std::cin>>p;
                square(p);
                break;
            case 5:
                break;
            default:
                std::cout<<"<Enter a Valid Option>\n";
                break;
            }
        }
    while(choice !=5);
    return 0;
}

int square(int a){
    return a*a;
}
double square(double a){
    return a*a;
}
// char square(char a){
//     std::cout<<"Character entered:"<<a<<"\n";
// }
// std::string square(std::string a){
//     std::cout<<"String entered:"<<a<<"\n";
// }
void square(char a){
    std::cout<<"Character entered:"<<a<<"\n";
}
void square(std::string a){
    std::cout<<"String entered:"<<a<<"\n";
}
