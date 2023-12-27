#include<iostream>

using namespace std;

int main (){

    char value;
    char again;
    start :
    cout<<"---------------Welcome to my Calculator Apllication----------------"<<endl;
    cout<<"***************Please follow the intructions****************"<<endl;
    cout<< " (1) Please press a for addition "<<endl;
    cout<< " (2) Please press s for subtraction "<<endl;
    cout<< " (3) Please press m for multiplication "<<endl;
    cout<< " (4) Please press d for diivision "<<endl;
    cout<< " (5) Please press v for modulo"<<endl;
    int addition(void);
    int multiplication(void);
    int subtraction(void);
    int division(void);
    int modulo(void);
    

    
//Calling Addition Opration
    cin>>value;
    if(value == 'a' || value == 'A'){
        int addValue = addition();
        cout<<"Addition is "<<addValue<<endl;
        Addagain:
        cout<<"Do you want to use our application again please select y or n"<<endl;
        cin>>again;
        if(again == 'y' || again == 'Y'){
            goto start;
        }
        else if(again == 'n' || again == 'N'){
            cout<<"Thank you for using  our application"<<endl;
        }
        else{
            cout<<"You have enter a wrong choice please select Y or N"<<endl;
            goto Addagain;
        }
    
    
    }
//Calling Multiplication Opration
    else if(value == 'm' || value == 'M'){
        int mulValue = multiplication();
        cout<<"multiplicationtion is "<<mulValue<<endl;
        multiplyagain:
        cout<<"Do you want to use our application again please select y or n"<<endl;
        cin>>again;
        if(again == 'y' || again == 'Y'){
            goto start;
        }
        else if(again == 'n' || again == 'N'){
            cout<<"Thank you for using  our application"<<endl;
        }
        else{
            cout<<"You have enter a wrong choice please select Y or N"<<endl;
            goto multiplyagain;
        }
    
    
    }

//Calling subtraction Oprattion
     else if(value == 's' || value == 'S'){
        int subtractValue = subtraction();
        cout<<"subtraction is "<<subtractValue<<endl;
        subtractagain:
        cout<<"Do you want to use our application again please select y or n"<<endl;
        cin>>again;
        if(again == 'y' || again == 'Y'){
            goto start;
        }
        else if(again == 'n' || again == 'N'){
            cout<<"Thank you for using  our application"<<endl;
        }
        else{
            cout<<"You have enter a wrong choice please select Y or N"<<endl;
            goto subtractagain;
        }   
  
} 
//Caaling Division opration
      else if(value == 'd' || value == 'D'){
        int diviedValue = division();
        cout<<"divistion is "<<diviedValue<<endl;
        diviedagain:
        cout<<"Do you want to use our application again please select y or n"<<endl;
        cin>>again;
        if(again == 'y' || again == 'Y'){
            goto start;
        }
        else if(again == 'n' || again == 'N'){
            cout<<"Thank you for using  our application"<<endl;
        }
        else{
            cout<<"You have enter a wrong choice please select Y or N"<<endl;
            goto diviedagain;
        }   
  
} 

       
 //calling modulo opration 
 
   else if(value == 'v' || value == 'V'){
        int modValue = modulo();
        cout<<"modulo is "<<modValue<<endl;
        modagain:
        cout<<"Do you want to use our application again please select y or n"<<endl;
        cin>>again;
        if(again == 'y' || again == 'Y'){
            goto start;
        }
        else if(again == 'n' || again == 'N'){
            cout<<"Thank you for using  our application"<<endl;
        }
        else{
            cout<<"You have enter a wrong choice please select Y or N"<<endl;
            goto modagain;
        }   
  
} 


}

//Addition opration
int addition(){
    int a;
    int total = 0;
    char choice;
    Add:
    cout<<"Enter a number"<<endl;
    cin>>a;
    total = total + a;
    cout<<"Do you want to add more numbers please press y or n?"<<endl;
    Addagain:
    cin>>choice;
    if(choice == 'y' || choice == 'Y'){
          goto Add;
    }
    else if(choice == 'n' || choice == 'N'){
        return total;
    }
    else{
            cout<<"You have entered a wrong choice please select Y or N"<<endl;
            goto Addagain;
        }
    return total;
}  

//Multiplication opration
int multiplication(){
    int a;
    int total = 1;
    char choice;
    mul:
    cout<<"Enter a number"<<endl;
    cin>>a;
    total = total * a;
    cout<<"Do you want to multiply more numbers please press y or n?"<<endl;
    Mulagain:
    cin>>choice;
    if(choice == 'y' || choice == 'Y'){
          goto mul;
    }
    else if(choice == 'n' || choice == 'N'){
        return total;
    }
    else{
            cout<<"You have entered a wrong choice please select Y or N"<<endl;
            goto Mulagain;
        }
    return total;
}   

//Subtraction opration
int subtraction(){
    int a,b;
    int total = 0;
    char choice;
    sub:
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    if(a>>b){
    total = a - b;
    }
    else{
        total = b - a;
    }
  
    return total;
}

//Division opration
int division(){
    int a,b;
    int total = 0;
    char choice;
    div:
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    if(a>>b){
    total = a / b;
    }
    else{
        total = b / a;
    }
  
    return total;
}

//modulo opration
int modulo(){
      int a,b;
    int total = 0;
    char choice;
    cout<<"Enter any two numbers"<<endl;
    cin>>a>>b;
    if(a>>b){
    total = a % b;
    }
    else{
        total = b%a;
    }
  
    return total;

}
