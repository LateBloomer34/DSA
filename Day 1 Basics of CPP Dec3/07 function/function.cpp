/*
function is the group of code , which perfroms a specific task.
we can use this code repeatetly.
if problem comes in any secyion , we dont nedd to check every section .

function increase readability.

no need to write a function again and again;




usually we use 4 kind of function 

1 - void function. - does not return anythiong;
2 - return function 
3 - parameterd (passed ip in function parameter)
4-  non parameterized function ;
*/

#include<iostream>
using namespace std;

/*
void printName (string name){
    cout<<"name is "<<name<<endl;
} 

int main (){
    string name ;
    // cin>>name;
    getline(cin,name);
    printName(name);

    string name2;
    getline (cin,name2);
    printName(name2);
}

*/

// function to add two number takes ip from user 


int sum (int num1 , int num2){
    int add = num1+num2;
    return add;
}

int main (){
    int num1;
    cin>>num1;
    int num2;
    cin>>num2;
    int add = sum(num1 , num2);
    cout<< add;
    return 0;
}