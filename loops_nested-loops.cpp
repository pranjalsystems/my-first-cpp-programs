#include <iostream>
int main() {
    // for (int i = 1; i <= 3; i++) {
    //     for (int j = 1; j <= 2; j++) {
    //         std::cout << "(" << i << "," << j << ") ";
    //     }
    //     std::cout << "\n";
    // }

    // for(int i = 1; i <= 4; i++)
    // {
    //     for(int j = 1; j <= 3; j++)
    //     {
    //         std::cout << "Hello\n";
    //     }
    // }
    // for(int i = 1; i <= 3; i++)
    // {
    //     for(int j = 1; j <= i; j++)
    //     {
    //         std::cout << "*";
    //     }

    //     std::cout << "\n";
    // }


    for(int i = 3; i >= 1; i--){
        for(int j = 1; j <= i; j++)
        {
            std::cout << "#";
        }

        std::cout << "\n";
    }
    return 0;
}