#include<iostream>
using namespace std;//just trying seniors stuff i saw in college computers
void minMax(int a, int b, int &minimum, int &maximum,int &difference){
    if (a>b){
        minimum=b;
        maximum=a;
    }
    else if (b>a){
        minimum=a;
        maximum=b;
    }
    else{
        minimum=a;
        maximum=b;//equal
    }
    // a>b ? minimum,maximum=b,a:b>a ? minimum,maximum=a,b ;//just trying seniors stuff i saw in college computers
    // a>b ? minimum,maximum=b,a:b>a;cout<<"maximum:"<<maximum;cout<<"minimum:"<<minimum ? minimum,maximum=a,b;cout<<"maximum:"<<maximum;cout<<"minimum:"<<minimum : minimum,maximum=a,b;//just trying seniors stuff i saw in college computers
    
    // maximum=a>b ? a:b;//just trying seniors stuff i saw in college computers
    // minimum=a>b ? b:a;//just trying seniors stuff i saw in college computers
    difference=maximum-minimum;
}
int main(){
    int number1;
    int number2;
    cout<<"Enter a number: ";
    cin>>number1;
    cout<<"Enter a number: ";
    cin>>number2;

    int maxnumber;
    int minnumber;
    int delta;
    minMax(number1,number2,minnumber,maxnumber,delta);

    cout<<"\nmaximum:"<<maxnumber<<"\n";
    cout<<"minimum:"<<minnumber<<"\n";
    cout<<"diffrence:"<<delta;
    return 0;
}