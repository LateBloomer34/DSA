// ip - [ 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1];
// op - [1 ,2 ,3 ,4 ,1 ,0 ,0 ,0];



#include<iostream>
using namespace std;

int moveZero(int arr[], int n){
    int j = 0 ; 
    for (int i = 0 ; i < n ; i++){
        if (arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;

        }
    }
    for (int i = 0 ; i < n ; i++){
        cout<<arr[i];
    }
return 0;
}

int main(){
int arr[]= {1,0,2,3,0,4,0,1};
int n = sizeof arr/sizeof arr[0];
moveZero(arr, n);

}