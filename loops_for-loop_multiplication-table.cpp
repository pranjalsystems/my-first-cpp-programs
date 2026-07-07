
// ⭐ Task 1 — Rewrite Yesterday

// Rewrite your multiplication table using a for loop instead of while.

#include <iostream>
int main(){
    int main_no;
    int upto_no;
    std::cout<<"Enter the Number you want Table Of : ";
    std::cin>>main_no;
    std::cout<<"Enter upto How much you want Table Of : ";
    std::cin>>upto_no;
    // for(int count = 1;count <= upto_no;count++){
    //     std::cout<<main_no<<" X "<<count<<" = "<<main_no*count<<"\n";
    // }

    //IDEA----work but should i say it's a bit chunky and less clean maybe, but was trying to make jump variable from python range(start,end+1,jump)
    // int value=main_no;
    // for(int count=1;count<=upto_no;count++){
    //     std::cout<<main_no<<" X "<<count<<" = "<<value<<"\n";
    //     value+=main_no;
    // }

    //Conclusion i like previous one better (also the calculation is much faster {when the numbers become large} in c++ than python i think that's expected as its c++)
    for(int count = 1;count <= upto_no;count++){
        std::cout<<main_no<<" X "<<count<<" = "<<main_no*count<<"\n";
    }
    return 0;
}