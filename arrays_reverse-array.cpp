// 🥷 Coding Challenge

// Write the program that reverses an array in place.

// Rules:

// ❌ No second array.

// ✅ Use two variables:

// int left = 0;
// int right = 4;

// (or size - 1 if you make it generic.)

// ✅ Swap the elements.
// ✅ Move the pointers.

// ✅ Use the condition:

// while(left < right)

// or an equivalent for loop if you prefer.

#include <iostream>
int main(){
    // int odd_array[5]={0,1,2,3,4};//0<>4 left+1 right-1 ,1<>3 left+1 right-1,2<>2 stop
    // int left=0;
    // int right=4;
    // int tempv1;//temporary variable 1
    // int tempv2;
    // while(left<=right){
    //     tempv1=odd_array[left];
    //     tempv2=odd_array[right];
    //     odd_array[left]=tempv2;
    //     odd_array[right]=tempv1;
    //     left++;right--;
    // }
    // std::cout<<odd_array[0]<<odd_array[1]<<odd_array[2]<<odd_array[3]<<odd_array[4];
    int array_length;
    std::cout<<"Enter number of elements: ";
    std::cin>>array_length;
    int array[array_length];
    // NOTE:
    // This works on your compiler (GCC/Clang).
    // However...
    // ⚠️ It is NOT standard C++.
    // It is called a Variable Length Array (VLA).
    // Some compilers allow it.
    // Others (especially Microsoft's MSVC) will reject it.
    // That's why if you wrote this in Visual Studio, it might fail.

    
    
    int left=0;
    int right=array_length-1;
    std::cout<<"Enter elements: \n";
    for(int i=0;i<array_length;i++){
        std::cout<<": ";
        std::cin>>array[i];
    }
    int tempv;//temporary variable
    while(left<right){
        tempv=array[left];
        array[left]=array[right];
        array[right]=tempv;
        left++;right--;
    }
    std::cout<<"\nReversed Array:\n\n";
    for(int i=0;i<array_length;i++){
        std::cout<<array[i]<<" ";
    }

    int sum=0;
    int maximum=array[0];
    int minimum=array[0]; 
    int mark;
    bool found=false;
    int occurrenceCount=0;
    std::cout<<"\nEnter number to be found : ";
    std::cin>>mark;
    std::cout<<"\nArray:\n\n";
    for (int i=0;i<array_length;i++){
        sum+=array[i];
        if (maximum<array[i]){maximum=array[i];}
        if (minimum>array[i]){minimum=array[i];}
        if (array[i]==mark){found=true;occurrenceCount++;}
        std::cout<<array[array_length-1-i]<<" ";
    }

    std::cout<<"\n\nArray Analysis\n";
    std::cout<<"Sum         :"<<sum<<std::endl;
    std::cout<<"Average     :"<<double(sum)/array_length<<std::endl;
    std::cout<<"Maximum     :"<<maximum<<std::endl;
    std::cout<<"Minimum     :"<<minimum<<"\n\n";
    if (found){std::cout<<mark<<" Found!\n"<<"Occurrence : "<<occurrenceCount<<std::endl;}
    else{std::cout<<mark<<" Not Found \n";}
    return 0;

}


// 🌸 Question 1 — Can C++ know the array size?

// Yes... but there's a catch.

// Suppose you have

// int arr[5];

// You can write

// int size = sizeof(arr) / sizeof(arr[0]);

// Let's understand it.

// sizeof(arr)

// means

// "How many bytes does the whole array occupy?"

// Since

// int

// is usually 4 bytes

// 5 integers

// ↓

// 5 × 4 = 20 bytes

// So

// sizeof(arr)

// returns

// 20

// Now

// sizeof(arr[0])

// means

// "How many bytes is ONE element?"

// which is

// 4

// Therefore

// 20 / 4 = 5

// 🎉

// Now we know the length.

// So instead of

// int right = 4;

// we can write

// int size = sizeof(arr) / sizeof(arr[0]);
// int right = size - 1;

// This is the C++ equivalent of Python's

// len(list)
// ⚠ But...

// This only works when the compiler still knows it's an array.

// Later, when we study functions, vectors, and pointers, sizeof() behaves differently.

// We'll learn why when we reach pointers.