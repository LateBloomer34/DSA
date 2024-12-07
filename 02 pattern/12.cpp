#include<iostream>
using namespace std;

int pattern (int n){
  for (int i = 0 ; i < n ; i++){
    for (int j = 0 ; j < i+1 ;j++){
        cout<<j+1;
    }
    for (int j = 0 ; j< (2*n-2-2*i);j++){
        cout<<" ";
    }
    for (int j = i; j>=0 ;j--){
        cout<<j+1;
    }
    cout<<endl;
  }
} 


int main (){
int n ;
cin>>n;
pattern (n);

}


/*

1        1
12      21
123    321
1234  4321
1234554321

*/