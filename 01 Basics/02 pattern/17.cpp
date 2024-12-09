#include<iostream>
using  namespace std ;

void pattern (int n ){
        for (int i = 0 ; i < n ; i ++){
            for (int j = 0 ; j <n-1-i ;j++){
                cout<<" ";
            }
            for (int j = 0 ; j <=i ; j++){
                cout<<char('A'+j);
            }
            for (int j = i; j>0; j--){
                cout<<char('A'+j-1);
            }


            cout<<endl;
        }

}

int main (){
    int n ;
    cin>>n ; 
    pattern (n);
}


/*
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/