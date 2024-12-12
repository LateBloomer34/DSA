#include<iostream>
using namespace std;
// #include<math.h>

bool prime (int num){ 
    if (num <=1 || num<=0){
       return false;
    }    
for (int i = 2 ; i <= sqrt(num);i++){
        if (num%i==0){
            return false;
        }
    }
return true;
}

int main(){
    int num; 
    cin>>num;
    prime (num);
    if (prime(num)){
        cout<<"prime";
    }
    else{
        cout<<"not prime";
    }
    return 0;
}