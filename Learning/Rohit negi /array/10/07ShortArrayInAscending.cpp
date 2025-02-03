#include<iostream>
using namespace std;


//we can also solve it by using sort function , but TC of sort is O()

int sort (int arr[] , int n ){
    int start = 0 ;
    int mid = 0 ;
    int end = n-1;

    while(mid<end){
        if (arr[mid]==0){
            swap(arr[start],arr[mid]);
            start++;
            mid++;
        }
        else if (arr[mid]==1){
            swap(arr[mid] , arr[mid]);
            mid++;
        }
        else if(arr[mid]==2){
            swap(arr[mid], arr[end]);
            end--;
        }

        }
        for (int i = 0 ; i < n ; i++){
            cout<<arr[i];
        }
    

    return 0;
}

int main (){
    int arr[] = {2,1,0,2,1,2,0};
    int n = sizeof arr / sizeof arr[0];
    sort(arr , n);
}