

// in pass by value copy of the parameter sends to destination;

// means copy of value is passed



#include<iostream>
using namespace std;

void add (int num){
    cout<<num<<endl;
    num= num +7;
    cout<<num<<endl;
    
}

int main(){
    int num ; 
    cin >>num;
    add (num);
    cout<<num;
    return 0;
}