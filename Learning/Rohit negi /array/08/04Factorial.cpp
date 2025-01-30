//find factorial

#include<iostream>
using namespace std;

void fact(int num){
    int result =1;
    for (int i = 1  ; i<=num ; i++){
        result = result*i;
    }
    cout<<result;
}

int main (){
    int num ; 
    cout<<"enter the number - ";
    cin>>num ; 
    fact(num);
}