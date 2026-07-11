// int main(){
//     int mark1 = 85;
//     int mark2 = 91;
//     int mark3 = 76;
//     int mark4 = 88;
//     int mark5 = 95;
// }

// BUT this doesn't scale up well as it annoying to write say like 100 line of code so we use array in c++
#include <iostream>
int main(){
    //int marks[5];
    // marks[0] = 85;
    // marks[1] = 91;
    // marks[2] = 76;
    // marks[3] = 88;
    // marks[4] = 95;
    //             0, 1, 2, 3, 4
    // int marks[5]={85,91,76,88,95};
    // std::cout << marks[4]<<std::endl;
    // std::cout << marks[1]<<std::endl;
    // std::cout << marks[3]<<std::endl;
    // std::cout << marks[0]<<std::endl;
    // std::cout << marks[2]<<std::endl;

    int arr[5];
    for (int i=0;i<5;i++){
        std::cout<<" : ";
        std::cin>>arr[i];
    }
    std::cout<<arr;
    return 0;
}