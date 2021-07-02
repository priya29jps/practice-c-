#include <iostream>
using namespace std;
bool test(int a,int b){
    return (a == 30 || b == 30 || (a + b == 30));

}

int main()
{
    int a, b, c;
    cout << "enter the value of a and b ";
    cin >> a >> b;
cout<<test(a,b)<<endl;
    /*
    if (a == 30 || b == 30 || (a + b) == 30)
    {
        return 1;
    }
    */
return 0;

}