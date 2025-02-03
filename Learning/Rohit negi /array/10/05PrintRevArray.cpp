#include<iostream>
using namespace std;

int print (int arr[] , int n){
    for (int i = 0 ;  i< n; i++ ){
        for (int j = n-i-1 ; j>=0 ;j--){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
int main (){
    int arr [] ={1,2,3,4,5,6};
    int n = sizeof arr / sizeof arr[0];
    print (arr , n);
}



/*
6 5 4 3 2 1 
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/