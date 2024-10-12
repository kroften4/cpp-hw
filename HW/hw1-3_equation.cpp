#include <iostream>
using namespace std;

int main1_3()
{
    float b, c;
    cout << "Enter float b and c\n";
    cin >> b >> c;
    if (b == 0 && c == 0)
        cout << "Any";
    else if (b == 0)
        cout << "No solutions";
    else
        cout << -c / b;
    return 0;
}
