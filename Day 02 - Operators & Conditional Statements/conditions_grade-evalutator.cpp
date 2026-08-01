#include <iostream>
//Target:
//Enter your marks (0-100): 87
//
//Grade: B
//Result: Pass
//Remark: Good Job!
//
//Rules:
//
//90–100 → Grade A → Excellent!
//80–89 → Grade B → Good Job!
//70–79 → Grade C → Nice Work!
//50–69 → Grade D → You Passed.
//0–49 → Grade F → Better Luck Next Time.
//
//If marks are below 0 or above 100:

//Invalid Marks!

//int main(){
//    int marks;
//    std::cout<<"Enter your marks(0-100): ";
//    std::cin>>marks;
//    if(marks<=100 and marks>=0){//using a bit of my python understandings here 
//        if(marks>=90){
//            std::cout<<"\nGrade: A\nResult: Pass\nRemark: Excellent!";
//        }
//        else if(marks>=80 and marks<=89){//not using: marks<90 <here as i have defined marks as int not float
//            std::cout<<"\nGrade: B\nResult: Pass\nRemark: Good Job!";
//        }
//        else if(marks>=70 and marks<=79){
//            std::cout<<"\nGrade: C\nResult: Pass\nRemark: Nice Work!";
//        }
//        else if(marks>=60 and marks<=69){
//            std::cout<<"\nGrade: D\nResult: Pass\nRemark: You Passed.";
//        }
//        else if(marks>=50 and marks<=59){
//            std::cout<<"\nGrade: E\nResult: Pass\nRemark:Could have done better.";
//        }
//        else{
//            std::cout<<"\nGrade: F\nResult: Fail\nRemark:Fail:First Attempt In Learning.";
//        }
//    } 
//    else{
//        std::cout<<"\nInvalid Marks!";
//    }
//}

//this works too but the condition have been reduced a bit
int main(){
    int marks;
    std::cout<<"Enter your marks(0-100): ";
    std::cin>>marks;
    if(marks<=100 and marks>=0){//using a bit of my python understandings here 
        if(marks>=90){
            std::cout<<"\nGrade: A\nResult: Pass\nRemark: Excellent!";
        }
        else if(marks>=80){
            std::cout<<"\nGrade: B\nResult: Pass\nRemark: Good Job!";
        }
        else if(marks>=70){
            std::cout<<"\nGrade: C\nResult: Pass\nRemark: Nice Work!";
        }
        else if(marks>=60){
            std::cout<<"\nGrade: D\nResult: Pass\nRemark: You Passed.";
        }
        else if(marks>=50){
            std::cout<<"\nGrade: E\nResult: Pass\nRemark: Could have done better.";
        }
        else{
            std::cout<<"\nGrade: F\nResult: Fail\nRemark: Fail:First Attempt In Learning.";
        }
    }
    else{
        std::cout<<"\nInvalid Marks!";
    }
    return 0;
}