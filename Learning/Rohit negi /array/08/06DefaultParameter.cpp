// default parameter - when no value pass at the time when call the function , the dafault value automatically accept that value


#include<iostream>
using namespace std ;

void fact (int num= 5){
    int fact = 1;
    for (int i = num ; i>=1 ; i--){
        fact = fact*i;
    }
    cout<<fact;
}

int main (){
    int num  = 6 ;
    fact(num);
}