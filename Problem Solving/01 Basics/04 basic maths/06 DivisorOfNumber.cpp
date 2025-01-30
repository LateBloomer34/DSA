#include<iostream>
using namespace std;

int divisor(int num){
    for (int i = 1 ; i <=num/2 ; i++){
        if (num%i==0){
            cout<<i<<endl;
        }
        

}
cout<<num;  
return 0;  
}

int main(){
    int num ;
    cin>>num;
    divisor (num);
}