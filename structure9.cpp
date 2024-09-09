#include <iostream>
using namespace std;

//Structures in C++
//The structure is a user-defined data type that is available in C++. Structures are used to combine different types of data types, just like an array is used to combine the same type of data types. An example program for creating a structure is shown in Code

struct employee
{
  
    int eId;
    char favChar;
    float salary;
};
   int main() {
 struct employee junaid;
 struct employee shubham;
 struct employee rohandas;
 junaid.eId=1;
 junaid.favChar = 'c';
 junaid.salary = 120000000;
 
 cout<<"The value is"<<junaid.eId<<endl;
 cout<<"The value is"<<junaid.favChar<<endl;
 cout<<"the value is"<<junaid.salary<<endl;
 return 0;
 

    return 0;
  }