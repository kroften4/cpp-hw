#include <iostream>
using namespace std;

int main1_2()
{
    float a, b;
    cout << "Enter float a and b\n";
    cin >> a >> b;
    cout << "a+b == " << a + b
         << "\na-b == " << a - b
         << "\na*b == " << a * b;
    if (b == 0)
        cout << "\nZero division error";
    else
        cout << "\na/b == " << a / b;

    return 0;
}
