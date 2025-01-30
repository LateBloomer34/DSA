#include<iostream>
using namespace std;

//prime element of an array

bool prime (int num){

    if (num <=1){
        cout<<"not"<<endl;
    }
    else{
        for (int i = 2 ; i<=sqrt(num) ; i++){
            if (num%i==0){
                cout<<"not"<<endl;
            }
            else{
               cout<<"pri"<<endl;
            }
        }
    }
  return true;
}

int main(){
    int arr [] =  {2,3,4,5,6,7,9,13,14};
    int n = sizeof arr / sizeof arr[0]; 
        for (int i = 0 ; i <n ; i++){
            prime (arr[i]);
        }    
    }
