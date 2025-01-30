#include<iostream>
using namespace std;

void pattern (int n){
   for (int i = 0 ; i < n ; i++){
    for (int j = 0 ; j < i+1 ; j++){
        cout<<char('E' - i+j)<<" ";
    }
    cout<<endl;
   }
}


int main(){
    int n ;
    cin>>n;
    pattern (n);
}


/*
E 
D E 
C D E 
B C D E 
A B C D E 


*/