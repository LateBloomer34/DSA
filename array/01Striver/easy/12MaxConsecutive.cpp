// Example 1:
// Input: prices = {1, 1, 0, 1, 1, 1}
// Output: 3
// Explanation: There are two consecutive 1’s and three consecutive 1’s in the array out of which maximum is 3.

// Input: prices = {1, 0, 1, 1, 0, 1} 
// Output: 2
// Explanation: There are two consecutive 1's in the array.


#include<iostream>
using namespace std ;

void Consecutive (int prices[] , int n ){
            int maxcount = 0;
            int count = 0;
        for (int i = 0 ; i < n ; i++){
            if (prices[i] == 1){
                // cout<<count<<endl;
                count++;
            }
            else{count = 0;}
            
            if (count>maxcount){
            maxcount = count;
            }
        }
    cout<<maxcount;
}

int main (){
// int prices[] = {1,1,0,1,1,1};
int prices[] = {1,0,1,1,0,1};
int n = sizeof prices / sizeof prices[0];

Consecutive(prices, n);

}