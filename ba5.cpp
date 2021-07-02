//Write a C++ program to create a new string where 'if' is added to the front of a given string. If the string already begins with 'if', return the string unchanged.

#include <iostream>
using namespace std;

string test(string b)
{
    if (b.length() > 2 && b.substr(0, 2) >= "if")
    {
        return b;
    }
    return "if" + b;
}

int main()
{

    int a;
    cout << test("if else")<<endl;
    cout << test("else")<<endl;

    return 0;
}