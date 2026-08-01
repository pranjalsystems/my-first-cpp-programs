// ⭐⭐ Challenge

// Print:

// *
// **
// ***
// ****
// *****

// Only using one for loop.

// (No nested loops... yet. 😉)


#include <iostream>
#include <string>

// int main(){
//     int stars;
//     std::cout<<"Enter No. of stars in end line : ";
//     std::cin>>stars;
//     for(int count=1;count<=stars;count++){
//         std::cout << std::string(count, '*')<<"\n";//NOTE asked for help as "0"*3="000" worked in python easily, but here it don't work like that
//     }
//     return 0;
// }

//experimenting

//experiment_1
// int main(){
//     int stars;
//     std::cout<<"Enter No. of stars in end line : ";
//     std::cin>>stars;
//     for(int count=1;count<=stars;count++){
//         std::cout << std::string(count-1, ' ');//NOTE asked for help as "0"*3="000" worked in python easily, but here it don't work like that
//         std::cout << std::string(stars-count+1, '*')<<"\n";
//     }
//     return 0;
// }

//experiment_2
int main(){
    int stars;
    std::cout<<"Enter No. of stars in end line : ";
    std::cin>>stars;
    for(int count=1;count<=stars;count++){
        std::cout << std::string(stars-count, ' ');//NOTE asked for help as "0"*3="000" worked in python easily, but here it don't work like that
        std::cout << std::string(count, '*');//NOTE asked for help as "0"*3="000" worked in python easily, but here it don't work like that
        if (count!=1){
            std::cout << std::string(count, '*')<<"\n";//NOTE asked for help as "0"*3="000" worked in python easily, but here it don't work like that
        }
        else{std::cout << "\n";}
    }
    return 0;
}