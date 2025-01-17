 // default parameter - Default function parameters allow named parameters to be initialized with default values if no value or undefined is passed.

 #include<iostream>
 using namespace std;

int sum(int x = 3 , int y = 4 ){
    int add = 0; 
    add = x+y;
    return add;
}

 int main (){
    int x = 7 ;
    int ad = sum ( x);
    cout<<ad<<endl;
 }