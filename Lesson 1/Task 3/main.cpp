#include <iostream>

using namespace std;

int main()
{
    int a = 50;
    int b = 20;
    a = a + b;
    b = a - b;
    a = a - b;
    cout <<"A = " << a << endl;
    cout <<"B = " << b;
    return 0;
}
