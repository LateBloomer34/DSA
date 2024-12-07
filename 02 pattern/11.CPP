#include<iostream>
using namespace std;

int pattern (int n){
    for (int i = 0; i<n ; i++){
        for (int j = 0 ; j <i+1 ; j++){
            if ((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0 )){
                cout<<1;
            }
            else{
                cout<<0;
            }
        }cout<<endl;
    }
} 


int main (){
int n ;
cin>>n;
pattern (n);

}



/*
1
01
101
0101
10101

*/