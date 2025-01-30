#include<iostream>
using namespace std;

void table(int num){
    for (int i = 1 ; i<=10 ; i++){
        cout<<num*i<<endl;
    }
}

int main (){
    int num; 
    cout<<"enter the number - ";
    cin>>num;
    table(num);
}