#include<iostream>
using namespace std;

void tringle (int n ){
    for (int i = 0 ; i < n ; i ++){
        for (int j = 0 ; j<i+1 ; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main (){
    int n ;
    cin>>n;
    tringle(n);
}


/* 
*
**
***
****
*****
*/