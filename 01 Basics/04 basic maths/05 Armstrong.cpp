#include<iostream>
using namespace std;
// #include <cmath>

void arm (int num){
    int count = 0 ;
    int org = num;
    int ognum = num;
//step 1 - find the count of number
    while(num>=1){
        count++;
        num= num/10;
    }
// cout<<count<<endl;
//strep 2 - fuction to calculate armstrong num


int arms = 0 ;
while(ognum>=1){
int rem = ognum%10;
int armN = pow(rem , count);
arms = arms+armN ; 
ognum = ognum/10;
}
//step 3 - comaprison orgnal number with calculated number
if (arms==org){
    cout<<"pelindrome number";
}
else{
    cout<<"not pelindrome";
}
}

int main (){
    int num;
    cin>>num; 
    arm(num);
}