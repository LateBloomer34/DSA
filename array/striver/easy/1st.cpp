// find thelargest element of an array

#include<iostream>
// #include<math.h>

using namespace std;

int largest (int arr[] ,  int n){

int lar  = INT_MIN;

for (int i = 0 ; i <n; i++ ){
    if (arr[i]>lar){
        lar = arr[i];
    }
}
    return lar;
}

int main(){
    int arr [] = {4,3,5,8,4,7,2};
    int n  = sizeof arr / sizeof arr[0];
    cout<<largest(arr, n); 
}