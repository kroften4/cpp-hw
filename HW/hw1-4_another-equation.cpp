#include <iostream>
using namespace std;

int main1_4()
{
    float a, b, c;
    cout << "Enter float a, b and c\n";
    cin >> a >> b >> c;
    if (a == 0) {
        if (b == 0 && c == 0)
            cout << "Any";
        else if (b == 0)
            cout << "No solutions";
        else
            cout << -c / b;
        return 0;
    }
    float d = b * b - 4 * a * c;
    if (d < 0) {
        cout << "No solutions";
        return 0;
    }
    float x1 = (-b + sqrt(d)) / (2 * a);
    float x2 = (-b - sqrt(d)) / (2 * a);
    cout << "x1: " << x1
         << "\nx2: " << x2;
    return 0;
}
