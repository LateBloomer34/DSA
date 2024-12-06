

// in pass by refrence , get the value from address.
//means orignal value is passed.

// to send value from address add &before the value,



#include<iostream>
using namespace std;

int add (int &num){
    cout<<num;
    num = num+15;
    cout<<num<<endl;
    return 0;
}

int main(){
    int num ; 
    cin >>num;
    add (num);
    cout<<num;
    return 0;
}