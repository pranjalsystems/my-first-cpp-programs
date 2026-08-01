//🏆 Day 7 Challenge (Last one before for loops)
//Write a program that prints:
//10
//9
//8
//7
//6
//5
//4
//3
//2
//1
//Blast Off! 🚀
//Rules:
//Use a while loop.
//Don't hardcode the numbers with multiple couts.
//After the loop finishes, print "Blast Off! 🚀".

#include <iostream>
int main(){
    int count = 10;
    while(count>=1){
        std::cout<<count<<"\n";
        count-=1;
    }
    std::cout<<"Blast Off!";//🚀 got printed as ≡ƒÜÇ so i think it dont work for strings other than what in it character map
    return 0;
}