#include<iostream>
using namespace std;

void pattern(int n ){
    for (int i = 0 ; i < n ;i++){
        for (int j = 0 ; j <n-i ; j++){
            cout<<char('A'+j);
        }cout<<endl;
    }
}

int main (){
    int n ; 
    cin>>n ; 
    pattern (n);
}


/*
ABCDE
ABCD
ABC
AB
A

*/