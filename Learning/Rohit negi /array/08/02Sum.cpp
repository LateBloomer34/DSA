#include<iostream>
using namespace std;

void sum (int num1 , int num2){
    int sum = num1+num2;
    cout<<sum;
}

int main (){
    int num1 ; 
    cout<<"enter num1 - ";
    cin>>num1;
    int num2 ; 
    cout<<"enter num2 - ";
    cin>>num2;
    sum(num1 , num2);

}