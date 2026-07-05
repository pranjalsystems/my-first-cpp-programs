//// Day 6 - Task 7
// ASCII order using ord("A")->65{Python} but for c++ we are using (int)char
#include <iostream>

int main(){
    char char_choice;
    std::cout<<"Choose a Character: ";
    std::cin>>char_choice;
    std::cout<<"ASCII value = "<<(int)char_choice;
    return 0;
}