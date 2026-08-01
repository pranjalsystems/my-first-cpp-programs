#include <iostream>

int main()
{
    int age;
    do
    {
        std::cout << "enter age :" ;
        std::cin>>age;
    }
    while(age < 0);// it run back it the condition is true

    return 0;
}