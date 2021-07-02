//Write a C++ program to check a given integer and return true if it is within 10 of 100 or 200.

#include <iostream>
using namespace std;

bool test(int a)
{
    if (abs(a - 100) <= 10 || abs(a - 200) <= 10)
        return true;
    return false;
}

int main()
{
    int a, b, c;
    cout << "enter the value of a ";
    //cin >> a;
    cout << test(103)<<endl;
    cout << test(90)<<endl;
    cout << test(89)<<endl;

    return 0;
}
