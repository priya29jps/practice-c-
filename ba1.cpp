#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the value of a and b ";
    cin >> a >> b;
    if (a == b)
    {
        cout << ((a + b) * 3);
    }
    else
    {
        cout << a + b;
    }
    return 0;
}



//OR
int test(int x,int y){
return x == y ?(x+y)*3 :x+y;

}

int main(){
cout<<test(1,2)<<endl;
cout<<test(2,2)<<endl;
cout<<test(3,2)<<endl;
return 0;
}
