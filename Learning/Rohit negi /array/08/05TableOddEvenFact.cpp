//print table and check their odd even and find their fatoral;



#include<iostream>
using namespace std ;
// table 
// even or odd 
//fact 
//prime or not

void table(int num){
    int tab = 1;
    for (int i =1 ; i<=10 ; i++ ){
        tab = num*i;
        cout<<tab<<endl;
    }
}
void oddEven(int num){
    if (num%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
}
void fact(int num){
    int fact = 1;
    for (int i = num  ; i>=1 ; i--){
        fact = fact*i;
    }
    cout<<fact<<endl;
}

void primeOrNot(int num){   
    if (num <=1){
        cout<<"prime number";
    }
    else{
        for (int i = 2 ; i<= sqrt(num) ; i++){
            if (num%i==0){
                cout<<"not prime "<<endl;
            }
            else{
                cout<<"prime number"<<endl;
            }
        }
    }

}
int main (){
    int num ;
    cout<<"enter the number - ";
    cin>>num;
    table(num);
    oddEven(num);
    fact(num);
    primeOrNot(num);

}