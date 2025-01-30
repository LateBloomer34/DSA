#include<iostream>
using namespace std;

void tringle (int n ){
    for (int i = 0 ; i < n ; i ++){
        for (int j = 0 ; j<i+1 ; j++ ){
            cout<<j+1;
            //number of col.
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
12
123
1234
12345


*/
