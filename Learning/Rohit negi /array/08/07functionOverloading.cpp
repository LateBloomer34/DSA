// function overloading - when funstion name are same but parameter are diff , called function overloading



#include<iostream>
using namespace std;

void add (int num1 , int num2){
    cout<<num1+num2<<endl;
}

void add (int num1 , int num2, int num3){
    cout<<num1+num2+num3;
}

int main (){
    int num1 = 3;
    int num2 = 4;
    int  num3  = 5;
    add (num1, num2);
    add (num1 , num2 , num3);
}