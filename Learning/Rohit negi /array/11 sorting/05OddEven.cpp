/*Given an array of car numbers car[], an array of penalties fine[], and an integer value date. The task is to find the total fine which will be collected on the given date. The fine is collected from odd-numbered cars on even dates and vice versa.

Examples:

Input: date = 12, car[] = [2375, 7682, 2325, 2352], fine[] = [250, 500, 350, 200]
Output: 600
Explanation: The date is 12 (even), so we collect the fine from odd-numbered cars. The odd-numbered cars and the fines associated with them are as follows:
2375 -> 250
2325 -> 350
The sum of the fines is 250+350 = 600
Input: date = 8, car[] = [2222, 2223, 2224], fine[] = [200, 300, 400]
Output: 300

*/

#include<iostream>
using namespace std;

int totfine(int car[] , int fine[] , int date, int n ){
    int total = 0;
    for (int i = 0 ; i < n; i++){
        if (date %2==0){
            if (car[i]%2!=0){
                total = total+fine[i]; 
            }
        }
        else{
            if (car[i]%2==0){
                total = total+fine[i]; 
            }
        }
    }
    cout<<total;
    return 0;
}

int main (){
    int date = 13;
   int car[] = {2375, 7682, 2325, 2352};
   int fine[] = {250, 500, 350, 200};
   int n = sizeof car / sizeof car[0];
   totfine(car , fine , date, n);
}