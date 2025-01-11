// Longest Subarray with given Sum K(Positives)

#include<iostream>
using namespace std;


//optimal approach

/*
int subarray(int arr[] , int n, int target ){
for (int i = 0 ; i < n-1 ; i++){
    int sum= 0;
    for (int j = i ; j<n; j++){
    sum = sum +arr[j];
    if (target == sum){
        return j-i+1;
    }
    

    }
}
return 0;
}
*/

//optimal approach - using 2 pointer;

int subarray(int arr[] , int n , int target){
    int i= 0;
    int j = i+1;
    int sum = 0;
        while(i<n-1 && j<n){
                sum = sum+arr[i]+arr[j];
                if (sum==target){
                    return (i+1);
                }
            else if (sum<target){
                
                sum = sum+arr[j++];
            }
            else if (sum>target){
               i++;
            }
           
        }


    return 0;
}

int main(){
    int arr[] = {2,3,5,1,9};
    int n = sizeof arr / sizeof arr[0];
    int target = 11;
    int sub = subarray(arr, n , target);
    cout<<sub;
}