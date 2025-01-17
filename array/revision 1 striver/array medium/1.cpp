// Two Sum : Check if a pair with given sum exists in Array
/*
Two Sum : Check if a pair with given sum exists in Array


565

20
Problem Statement: Given an array of integers arr[] and an integer target.

1st variant: Return YES if there exist two numbers such that their sum is equal to the target. Otherwise, return NO.

2nd variant: Return indices of the two numbers such that their sum is equal to the target. Otherwise, we will return {-1, -1}.

Note: You are not allowed to use the same element twice. Example: If the target is equal to 6 and num[1] = 3, then nums[1] + nums[1] = target is not a solution.

Examples:

Example 1:
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14
Result: YES (for 1st variant)
       [1, 3] (for 2nd variant)
Explanation: arr[1] + arr[3] = 14. So, the answer is “YES” for the first variant and [1, 3] for 2nd variant.

Example 2:
Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 15
Result: NO (for 1st variant)
	[-1, -1] (for 2nd variant)
Explanation: There exist no such two numbers whose sum is equal to the target.

*/


// brute approach
/*
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
*/


//optimal using 2 pointer

#include<iostream>
using namespace std;

vector <int> twoSum(vector<int>arr , int target ){
    sort(arr.begin() , arr.end());
    int n = arr.size();
    int start = 0;
    int end  = n-1;

    while(start<end){
        if (arr[start]+arr[end]==target){
            int a = arr[start];
            int b = arr[end];
            cout<<"sum of "<<a<<" and "<<b<<" is "<<target<<endl;
            return {a,b};
            // return "yes";
        }
        else if (arr[start]+arr[end]<target){
            start++;
        }
        else{
            end--;
        }
    }
    return {}; 
}

int main(){
    vector<int>arr = {2,6,5,8,11};
    int target =1;
    vector<int>result = twoSum(arr, target);
        if (result.empty()){
            cout<<"sum not avavilable";
        }
        else{
            cout<<"available at index ";
            for (int j = 0 ; j < result.size() ; j++){
            for (int i = 0 ; i<arr.size() ; i++){
                if ( arr[i]==result[j]){
                        cout<<i<<" and ";
                    }
                }
            }
        }
    }
