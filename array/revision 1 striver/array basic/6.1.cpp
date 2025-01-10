//right rotate by d place


#include<iostream>
using namespace std;

int rRotate(int arr[] , int n , int d ){
    vector<int>temp(d);
    for (int i = n-d ;i<n ; i++){
        temp[i-(n-d)]= arr[i];
    }
    for (int i = n-d-1 ; i>=0 ; i--){
        arr[i+d]=arr[i];
    }
    for (int i = 0 ; i < d ; i++){
        arr[i] = temp[i];
    }

    for (int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
return 0;
}

int main (){
    int arr[] = {3,7,8,9,10,11};
    int n = sizeof arr / sizeof arr[0];
    int d = 2;
    rRotate(arr, n, d );

}