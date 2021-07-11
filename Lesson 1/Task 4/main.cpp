#include <iostream>

using namespace std;

int main()
{
    int zp;
    cout << "Skolko ti zarabativaesh?: ";
    cin >> zp;
    if (zp<1000){
        cout << "rabotai bolshe" << endl;
        cout << "no ti molodec";
    }
    if (zp>1000){
    if (zp<999999){
        cout << "kruto" << endl;
        cout << "no ti molodec";
    }
    }
    if (zp>1000000){
        cout << "da ti millioner";
    }

}

