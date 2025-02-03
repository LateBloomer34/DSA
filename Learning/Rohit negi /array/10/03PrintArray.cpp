#include<iostream>
using namespace std;

void print (int arr[] , int n ){
for (int i = 0 ; i < n ; i++){
    for (int j = i ; j < n ; j++ ){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
}

int main (){
    int arr[] = {1,2,3,4,5,6,7,};
    int n = sizeof arr / sizeof arr[0];
    print (arr , n);
}

// 1 2 3 4 5
// 2 3 4 5
// 3 4 5
// 4 5
// 5