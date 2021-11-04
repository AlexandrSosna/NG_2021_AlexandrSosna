#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float massa_ZAZ;
    float y;
    cout << "Enter weight ZAZ ";
    cin >> massa_ZAZ;
    cout << ( "This is the amount of fuel you need to fly: %.1f\n", ceil((massa_ZAZ / 3 - 2)) );
    return 0;
}
