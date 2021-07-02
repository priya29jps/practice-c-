//Write a program in C++ to swap two numbers.
#include <iostream>
using namespace std;
 
int main()
{
int n1,n2,t;
cin>>n1>>n2;
t= n2;
n2= n1;
n1= t; 
cout<<"value of n1 "<<""<<n1 <<"\n value of n2 "<<"" <<n2 <<endl;

    return 0;
    
}