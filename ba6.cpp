

#include <iostream>
using namespace std;

string test(string b, int n)
{
    return b.erase(n, 1);
}

int main()
{

    int a;
    cout << test("python",1) << endl;
    cout << test("python",0) << endl;
    cout << test("python",4) << endl;

    return 0;
}