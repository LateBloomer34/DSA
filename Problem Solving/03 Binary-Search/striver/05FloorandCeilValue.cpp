// find floor and ceil value in ana array
/*Example 1:
Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 5
Result: 4 7
Explanation: The floor of 5 in the array is 4, and the ceiling of 5 in the array is 7.

Example 2:
Input Format: n = 6, arr[] ={3, 4, 4, 7, 8, 10}, x= 8
Result: 8 8
Explanation: The floor of 8 in the array is 8, and the ceiling of 8 in the array is also 8.
*/
//method - find lower bound and upper bound in array


#include<iostream>
using namespace std;

int floorAndCeil(int arr[] , int n , int target){
        int start = 0 ; 
        int end = n-1;
        int floor = -1 ;
        int ceil = -1;
//find floor
        while (start < end){
            int mid = start +(end-start)/2;

            if (target>=arr[mid]){
                floor = arr[mid];
                start = mid+1;
            }
            else{
                end = mid-1;
            }

        }
        cout<<"floor value"<<floor<<endl;
// find ceil
start = 0 ;
end = n-1;
        while(start<=end){
            int mid = start+(end-start)/2;
            if (target<arr[mid]){
                ceil = arr[mid];
                end = mid-1;
            }
            else{
               start = mid+1;
            }
        }
        cout<<"ceil value"<<ceil;
        return 0;
}

int main (){
        int arr [] = {2, 4, 4, 7, 8, 10};
        int n = sizeof arr/ sizeof arr[0];
        int target = 7;
        floorAndCeil(arr, n , target);
}