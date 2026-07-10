// Mini Challenge 3 ⭐⭐⭐

// Write

// int larger(int a,int b)

// that returns

// the larger number.

// Example

// larger(8,5)

// returns

// 8
#include <iostream>
int larger(int a,int b){
    if (a>b){std::cout<<a<<" is greater than "<<b<<"\n";return a;}
    else if (b>a){std::cout<<b<<" is greater than "<<a<<"\n";return b;}
    else{std::cout<<"Both are equal\n";return a;}
}
int main(){
    int number1;
    int number2;
    std::cout<<"Enter Number 1 : ";
    std::cin>>number1;
    std::cout<<"Enter number 2 : ";
    std::cin>>number2;
    int largest=larger(number1,number2);
    std::cout<<"Largest: "<<largest;
    return 0;
}



// One thing I would improve

// Your function currently does two jobs.

// It

// compares numbers
// prints messages

// A function should ideally have one responsibility.

// I'd write it like this:

// int larger(int a,int b)
// {
//     if(a>b)
//         return a;

//     if(b>a)
//         return b;

//     return a;
// }

// Then in main()

// int largest = larger(number1,number2);

// std::cout << "Largest: " << largest;

// See the difference?

// Now

// larger()

// only compares.

// It doesn't know anything about the user.

// That's called separation of responsibilities.