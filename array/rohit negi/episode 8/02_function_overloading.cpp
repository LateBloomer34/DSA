//function overloading - Function overloading is a feature of object-oriented programming where two or more functions can have the same name but different parameters



#include<iostream>
using namespace std;

int sum(int a , int b , int c){
    cout<<a+b+c<<endl;
    return 0;
}

int sum(int a , int b ){
    cout<<a+b<<endl;
    return 0;
}

int main(){
    int a =3;
    int b = 4; 
    int c = 5;
    sum(a,b);
    sum(a,b,c);
   
}