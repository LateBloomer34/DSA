// check number is odd or even 

/*
#include<iostream>
using namespace std;

void checkOddEven(int num){
    if (num%2==0){
        cout<<"number is even";
    }
    else{
        cout<<"number is odd";
    }
}


int main (){
    int num1;
    int num2;
    int num3;
    cout<<"enter the number1 - :";
    cin>>num1;
    checkOddEven(num1);
    cout<<"enter the number2 - :";
    cin>>num2;
    checkOddEven(num2);
    cout<<"enter the number3 - :";
    cin>>num3;
    checkOddEven(num3);
}

*/

#include<iostream>
using namespace std;


int checkOddEven(int num){
        if (num%2 == 0){
            return 0;
        }
        else{
            return 1;
        }
}

int main (){
    int num ; 
    cin>>num;
    int result = checkOddEven(num);
    if (result == 0){
        cout<<"even";
    }
    else{
        cout<<"odd";
    }
}
