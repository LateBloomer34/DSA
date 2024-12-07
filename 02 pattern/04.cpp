#include<iostream>
using namespace std;

void tringle (int n ){
    for (int i = 0 ; i < n ; i ++){
        for (int j = 0 ; j<i+1 ; j++ ){
            cout<<i+1;
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

1
22
333
4444
55555


*/
