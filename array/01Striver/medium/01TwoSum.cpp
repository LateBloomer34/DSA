// Example 1:
// Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14
// Result: YES (for 1st variant)
//        [1, 3] (for 2nd variant)
// Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for the first variant and [1, 3] for 2nd variant.

// Example 2:
// Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 15
// Result: NO (for 1st variant)
// 	[-1, -1] (for 2nd variant)
// Explanation: There exist no such two numbers whose sum is equal to the target.


// method 1:-  using 2 pointer


/*
// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> twoSum (vector<int> &arr , int target){
    sort(arr.begin() , arr.end());
    int n = arr.size();
    int start = 0;
    int end = n-1;
    // vector<int >result;
    while(start<end){
        if (arr[start]+arr[end]==target){  
            // result.push_back(arr[start]);
            // result.push_back(start);
            // result.push_back(arr[end]);         
            // result.push_back(end);         
            return {start, end};
        }
        else if (arr[start]+arr[end]<target){
            start++;
        }
        else{
            end--;
        }    
    }
    // return result;
    return {};
}

int main (){
    vector<int> arr = {2,6,5,8,11};
    int target = 14;
    vector<int> answer = twoSum(arr , target);
    if(answer.empty()){
        cout<<"sum not fount";
    }
    else{
        for(int i = 0 ; i < answer.size(); i++){
            cout<<answer[i]<<endl;
        }
    }

}

*/

// method 2  - brute approach - check using loop group

#include<iostream>
using namespace std;

int twoSum(int arr[] , int n , int target){
    for (int i = 0 ; i < n-1 ; i++){
        for (int j = i+1 ; j< n; j++){
            if (arr[i]+arr[j]==target){
                cout<<"yes"<<endl;
                cout<<i<<", "<<j;
                return 0;
            }            
        }
    }   
       cout<<"no"<<endl;
                cout<<-1<<", "<<-1;         
   return 0;        
}

int main (){
    int arr[] = {2,6,5,8,11};
    int n = sizeof arr / sizeof arr[0];
    int target = 15;
    twoSum(arr, n , target);
}