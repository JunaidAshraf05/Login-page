#include<iostream>
using namespace std;

//Function prototype
// type function-name(arguments);
int sum(int a, int b);
int main(){
    int num1,num2;
    cout<<"Enter the number"<<endl;
    cin>>num1;
    cout<<"Enter the number"<<endl;
    cin>>num2;
    cout<<"the sum is"<<sum(num1+num2);
    return 0;
    }

    //Function Prototype
//int sum(int a, int b); //Acceptable
//int sum(int a, b); // Not Acceptable
//int sum(int, int); //Acceptabl