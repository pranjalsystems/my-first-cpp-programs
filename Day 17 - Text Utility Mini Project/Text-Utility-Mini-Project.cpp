#include<iostream>
void getstr();
int main(){
    int choice;
    int count=0;
    char str[100];
    char str2[100];
    int j=0;//i see cant initialise variable in switch
    // AI>
    //    Excellent observation.
    //    The answer is:
    //    You can initialize variables inside a switch, but not directly after a case label.
    bool isEqual=true;
    int i=0;
    std::cout<<"========== TEXT UTILITY ==========\n1. Uppercase\n2. Lowercase\n3. Toggle Case\n4. Count Characters\n5. Remove Spaces\n6. Reverse\n7. Compare\n\nChoice:";
    // std::cin>>choice;
    
    // ❌ The biggest bug is actually this one
    // After
    // std::cin >> choice;
    // you must have
    // std::cin.ignore();
    // Otherwise every single one of these
    // std::cin.getline(str,100);
    // will immediately read the leftover '\n' from pressing Enter after the menu choice.
    // Example:
    // Choice: 1↵
    // Buffer after reading 1:
    // \n
    // Then
    // getline(...)
    // reads that newline and thinks the user entered an empty string.
    // So my previous advice about std::cin.ignore(); is still correct.
    // Add it immediately after:

    std::cin >> choice;
    std::cin.ignore();
    switch (choice){
    case 1:
        std::cout<<"Enter : ";
        std::cin.getline(str,100);
        for(int i=0;str[i]!='\0';i++){
            if (str[i] >= 'a' && str[i] <= 'z'){str[i]=str[i]-32;}
            // else{str[i]=str[i];}            
        }
        std::cout<<"Upper: "<<str;
        break;
    case 2:

        std::cout<<"Enter : ";
        std::cin.getline(str,100);
        for(int i=0;str[i]!='\0';i++){
            if (str[i] >= 'A' && str[i] <= 'Z'){str[i]=str[i]+32;}
            // else{str[i]=str[i];}
        }
        std::cout<<"Lower: "<<str;
        break;
    case 3:

        std::cout<<"Enter : ";
        std::cin.getline(str,100);
        for(int i=0;str[i]!='\0';i++){
            if (str[i] >= 'a' && str[i] <= 'z'){str[i]=str[i]-32;}
            else if(str[i] >= 'A' && str[i] <= 'Z'){str[i]=str[i]+32;}
            // else{str[i]=str[i];}
        }
        std::cout<<"Toggle case: "<<str;
        break;
    case 4:
        std::cout<<"Enter : ";
        std::cin.getline(str,100);

        for(int i=0;str[i]!='\0';i++){count++;}
        std::cout<<"Letter count: "<<count;
        break;
    case 5:
        char newstr[100];
        std::cout<<"Enter : ";
        std::cin.getline(str,100);
        for(int i=0;str[i]!='\0';i++){
            if(str[i] != ' '){
                newstr[j]=str[i];
                j++;
            }
        }
        newstr[j]='\0';// as newstr didnt used getline to auto add '\0'
        std::cout<<"\nSpace Removed : "<<newstr;
        break;
    case 6:
        std::cout<<"Enter : ";
        std::cin.getline(str,100);
        for(int i=0;str[i]!='\0';i++){count++;}
        std::cout<<"Reversed: ";
        for(int i=count;i>=0;i--){std::cout<<str[i];}
        break;
    case 7:

        std::cout<<"First : ";
        std::cin.getline(str,100);
        std::cout<<"Second : ";
        std::cin.getline(str2,100);
        while (str[i]!='\0' or str2[i]!='\0'){ 
            if(str[i]!=str2[i]){
                isEqual=false;
                break;
            }
            i++;
        }
        std::cout<<"\nResult\n";
        if(isEqual){
            std::cout<<"Equal";
        }
        else{
            std::cout<<"Not Equal";
        }
        break;
    
    default:
        std::cout<<"-<Wrong Choice>-";
    }
    return 0;
}