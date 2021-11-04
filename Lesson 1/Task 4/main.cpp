#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    double a,b,c,D;
    double x1,x2;
    cout << "Enter A ";
    cin >> a;
    cout << "Enter B ";
    cin >> b;
    cout << "Enter C ";
    cin >> c;
    D = b * b - 4 * a * c;
    if (D > 0)
    {
        x1 = ((-b) + sqrt(D)) / (2 * a);
        x2 = ((-b) - sqrt(D)) / (2 * a);
        cout << "x1 = " << x1 << "\n";
        cout << "x2 = " << x2 << "\n";
    }
    if (D == 0)
    {
      x1 = -(b / (2 * a));
      cout << "x1 = x2 = " << x1 << "\n";
    }
    if (D < 0){
        cout << "D < 0, no roots!";
    }
}
