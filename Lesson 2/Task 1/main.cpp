#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int result = 0;
    cout << "Enter number: ";
    cin >> number;
    for(int i=number; i>0; i/=10){
      result +=i%10;
  }
    cout << "The sum of the number: " << result << endl;
    return 0;
}
