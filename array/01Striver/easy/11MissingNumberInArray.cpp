// Example 1:
// Input Format:
//  N = 5, array[] = {1,2,4,5}
// Result:
//  3
// Explanation: 
// In the given array, number 3 is missing. So, 3 is the answer.


#include<iostream>
using namespace std ;


//by using adding element inside the array


// int Missing (int arr[] , int n, int N ){
//     int sumA = 0 ;
//     for (int i = 0 ; i < n ;  i ++){
//     sumA = sumA +arr[i];
//     }
//     cout<<"sumA"<<sumA<<endl;

//     int sum = 0 ; 
//     for (int i = 1  ; i <= N ; i++){
//         sum = sum + i;
//     }
// cout<<"sum"<<sum<<endl;
// int missing = sum -sumA;
// cout<<missing;
// return 0;
// }



//using ex - or of element


int Missing (int arr[] , int n, int N ){
    int sumA = 0 ;
    for (int i = 0 ; i < n ;  i ++){
    sumA = sumA^arr[i];
    }
    cout<<"sumA"<<sumA<<endl;

    int sum = 0 ; 
    for (int i = 1  ; i <= N ; i++){
        sum = sum ^ i;
    }
cout<<"sum"<<sum<<endl;
int missing = sum^sumA;
cout<<missing;
return 0;
}



int main (){
    int arr [] = {1,2,4,5};
    int N=5;
    int n = sizeof arr / sizeof arr[0];
Missing (arr , n, N);

}