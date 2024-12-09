#include<iostream>
using namespace std;

int count(int num){
    int count = 0;
    while(num>0){
        num = num/10;
        count++;
    }
    return count;
}

int main (){
    int num ;
    cin>>num;
    count(num);
    cout<<count(num);
}