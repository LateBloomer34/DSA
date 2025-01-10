//maximum consu ones ; 


#include<iostream>
using namespace std;

int consu(int arr[] , int n){
    int count = 0 ;
    int maxcount = 0;
    for (int i = 0 ; i < n ; i++){
        if (arr[i]==1){
            count++;
            if (count>maxcount){
                maxcount=count;
            }
        }
        else{
            count=0;
        }
    }
    cout<<maxcount;
    return 0;
}

int main (){
    int arr[] = {1, 0, 1, 1, 0, 1};
    int n = sizeof arr / sizeof arr[0];
    consu(arr , n);
}