#include<iostream>
using namespace std;

void tringle (int n ){
    for (int i = 0 ; i < n ; i ++){
        for (int j = 0 ; j<n-i ; j++ ){
            cout<<j+1;
            //number of row.
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

12345
1234
123
12
1

*/
