#include <iostream>
bool valid(double);
int main(){
    int total_students;
    std::cout<<"How many students? (1-20): ";
    std::cin>>total_students;
    double student[20]={};
    double sum=0;
    for(int i =0;i<total_students;i++){
        double marks;
        do{
            std::cout<<"Student "<<i+1<<": ";
            std::cin>>marks;
        }
        while(not(valid(marks)));
        student[i]=marks;
        sum+=marks;
    }
    double average= double(sum)/total_students;
    double maximum=student[0];
    double minimum=student[0];
    double search_mark;
    int counter=0;
    bool found=false;

    for(int i=0;i<total_students;i++){
        if(i==0){//for efficency:1 loop rather than 2 loops
            do{
                std::cout<<"\n\nEnter mark to search:";
                std::cin>>search_mark;
            }
            while(not(valid(search_mark)));

            for(int i =0;i<total_students;i++){
                if (search_mark==student[i]){counter++;}
            }
            if (counter>0){std::cout<<"Found "<<counter<<" time(s).\n\n";found=true;}
            else{std::cout<<"Not found.\n\n";}
            std::cout<<"\n\n===== Student Marks =====\n";
        }
        std::cout<<student[i]<<" ";
        if (maximum<student[i]){maximum=student[i];}
        if (minimum>student[i]){minimum=student[i];}
 
    }

    
    int left=0;
    int right=total_students-1;
    double temp_variable;
    while(left<right){
        temp_variable=student[left];
        student[left]=student[right];
        student[right]=temp_variable;
        left++;right--;
    }
    std::cout<<"Reversed:\n\n";
    for(int i =0;i<total_students;i++){
        std::cout<<student[i]<<" ";
    }

    std::cout<<"\n\n========== SUMMARY ==========\n\n";
    std::cout<<"Students : "<<total_students<<"\n";
    std::cout<<"Highest  : "<<maximum<<"\n";
    std::cout<<"Lowest   : "<<minimum<<"\n";
    std::cout<<"Average  : "<<average<<"\n";
    std::cout<<"Search   : ";
    if (found){std::cout<<"Found"<<"\n";}
    else{std::cout<<"Not Found"<<"\n";}
    std::cout<<"\nMission Complete!";
    return 0;
}

bool valid(double x){
    if (not(0<=x and x<=100)){std::cout<<"<Enter valid Number>\n";return false;}
    else{return true;}
}