// Challenge 2 ⭐⭐

// Create

// void square()

// that prints

// ****
// *  *
// *  *
// ****

// Call it twice.

#include <iostream>
// void horizontal_line(){
//     std::cout<<"0000\n";
// }
// void vertical_side(){
//     std::cout<<"0  0\n";
// }
// void square(){
//     horizontal_line();
//     for(int i =1;i<=4-2;i++){vertical_side();}//-2 as the 2 line are already printed by first and last line
//     horizontal_line();
// }
// int main(){
//     square();
//     square();
// }


void horizontal_line(int x){
    for(int i=1;i<=x;i++){
        std::cout<<"0";
    }
    std::cout<<"\n";
}
void vertical_side(int x,int y){//x for gaps and y for no. of time to run loop
    for(int i=1;i<=y-2;i++){
        std::cout<<"0";
        for(int j=1;j<=x-2;j++){
            std::cout<<" ";
        }
        std::cout<<"0";
        std::cout<<"\n";
    }
}
void square(int x,int y){
    horizontal_line(x);
    vertical_side(x,y);
    horizontal_line(x);
}
int main(){
    int length;
    int breadth;
    std::cout<<"Enter Horizontal Lenght : ";
    std::cin>>length;
    std::cout<<"Enter Vertical Lenght : ";
    std::cin>>breadth;
    square(length,breadth);
    return 0;
}