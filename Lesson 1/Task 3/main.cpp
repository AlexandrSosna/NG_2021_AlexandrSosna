#include <iostream>

using namespace std;

int main()
{
    int n_orexi;
    int m_shishek;
    int k_orex_v_shishke;
    cout << "Skolko nuzhno oreshkov: ";
    cin >> n_orexi;
    cout << "Skolko oreshkov v shiske: ";
    cin >> m_shishek;
    cout << "Skolko ona sobrala: ";
    cin >> k_orex_v_shishke;


    if (m_shishek*k_orex_v_shishke<n_orexi){
        cout << "vse pechalno";
    }
    else{
        cout << "Zimoy budesh kushat";
    }
}
