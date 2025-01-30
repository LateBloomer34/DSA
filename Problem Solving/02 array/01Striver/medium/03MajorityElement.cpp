// Find the Majority Element that occurs more than N/2 times


//brute approach
/*
#include<iostream>
using namespace std;

int majorityEle(int arr[] , int n ){
    for (int i = 0 ; i < n; i ++){
        int count = 0;
        for (int j = 0 ; j < n ; j++){
            if (arr[i]==arr[j]){
                count++;
            }
        }
        if (count>n/2){
            cout<<arr[i]<<" "<<count<<" times";
            return 0;
        }
    }
    
return -1;
}

int main (){
int arr[] = {2,2,1,1,1,2,2,1,1,1,1,1,1,2,2,2,2,2,2,2,2,2,3};
int n  = sizeof arr / sizeof arr[0];
int k = majorityEle(arr , n);
}


*/



// 2- using map


// 3- using moore's voting algo;


#include<iostream>
using namespace std;

int majorityEle(int arr[] , int n){
    int count = 0;
    int el;

    for (int i = 0 ; i < n ; i++){
        if (count == 0 ){
            count++;
            el =arr[i];
        }
        else if (arr[i] == el){
            count++;
        }
        else{
            count--;
        }
}
 //check element present in times   
    int count1 = 0;
    for (int i = 0 ; i < n ; i++){
        if (arr[i] == el){
            count1++;
        }
    }

    // check element present more than n/2 times or not
    if (count1>n/2){
        cout<< el << "is present "<<count1<< " times";
    }
    else{cout<<"not available";}
    return 0;
}

int main (){
    int arr[] = {2,2,1,1,1,2,2,1,1,1,1,1,1,2,2,3};
    int n  = sizeof arr / sizeof arr[0];
    int k = majorityEle(arr , n);
}