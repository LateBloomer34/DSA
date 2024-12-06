/* in 2d array , it reprenet the row and coloum;


 int arr[3][5];

 */


#include<iostream>
using namespace std;


int main(){
    int arr [3][5]= {{1,2,3,4,5}, {2,3,4,5,4},{8,7,6,9,8}};

    for (int i = 0 ; i < sizeof arr / sizeof arr[0] ; i++){
        for (int j = 0 ; j < sizeof arr / sizeof arr[j] ; j++){

        cout<<arr[i][j]<<endl;

        }
    }

    return 0;
}