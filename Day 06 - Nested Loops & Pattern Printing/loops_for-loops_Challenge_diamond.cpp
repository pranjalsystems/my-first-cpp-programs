#include<iostream>
int main(){
    int dfcentre;                           //4
    std::cout<<"Enter number of star from centre : ";
    std::cin>>dfcentre;
    dfcentre++;
    for (int i=1;i<=dfcentre;i++){          //(1,4+1)
        for (int j=dfcentre-1;j>=i;j--){    //(3,1-1,-1)
            // std::cout<<"0";
            std::cout<<" ";
        }
        for (int j=1;j<=i;j++){   
            // std::cout<<"1";
            std::cout<<"*";
        }
        if(i!=1){
            for (int j=1;j<=i-1;j++){    
            // std::cout<<"2";
            std::cout<<"*";
        }
        }
        std::cout<<"\n";
    }

    for (int i=1;i<=dfcentre-1;i++){         
        for (int j=1;j<=i;j++){   
            // std::cout<<"1";
            std::cout<<" ";
        }

         for (int j=dfcentre-1;j>=i;j--){   
            //  std::cout<<"0";
             std::cout<<"*";
        }

        if(i!=dfcentre-1){
            for (int j=dfcentre-2;j>=i;j--){
                // std::cout<<"2";
                std::cout<<"*";
            }
        }
        std::cout<<"\n";
    }
    return 0;
}