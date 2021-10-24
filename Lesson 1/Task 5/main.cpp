#include <iostream>

using namespace std;

int main()
{
    int massa_ZAZ;
    float toplivo;
    cout << "Enter weight ZAZ ";
    cin >> massa_ZAZ;
    toplivo = (massa_ZAZ / 3) - 2;
    cout << "This is the amount of fuel you need to fly: " << toplivo;
    return 0;
}
