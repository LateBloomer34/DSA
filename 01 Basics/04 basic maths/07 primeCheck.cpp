#include<iostream>
using namespace std;
#include<math.h>

int prime (int num){
    if (num ==1 || num ==0){
        cout<<num <<" is not prime";
    }
    else{
    for (int i = 2 ; i <= sqrt(num);i++){
        if (num%i==0){
            cout<<num<<" is not a prime ";
            break;
        }
        else{
    cout<<num<< " is prime number";
        break;}
    }
    }
return 0;
}

int main(){
    int num; 
    cin>>num;
    prime (num);
}