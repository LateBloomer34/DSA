#include<iostream>
using  namespace std;

void reverseCount(int num){

    int newNum =0;
    while(num>0){
        int rem = 0;
        rem = num%10;
        newNum =newNum*10+rem;
        num = num/10;
    }
    cout<<newNum;
}

int main(){
    int num;
    cin>>num;
    reverseCount(num);
}