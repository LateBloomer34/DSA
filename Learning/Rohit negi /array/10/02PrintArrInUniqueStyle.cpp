#include<iostream>
using namespace std;

int print (int arr[] , int n ){
        for (int i = 0 ; i <n ; i++){
            for (int j = 0 ; j < n-i ; j++){
                cout<<arr[j]<<" ";
            }
            cout<<endl;
        }

    return 0;
}

int main (){
    int arr[] = {1,2,3,4,5,6,7};
    int n = sizeof arr / sizeof arr[0];
    print(arr, n );
}