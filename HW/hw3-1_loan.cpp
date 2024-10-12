#include <iostream>
using namespace std;

int main3_1()
{
    float s, p, n;
    cout << "S: ";
    cin >> s;
    cout << "p: ";
    cin >> p;
    cout << "n: ";
    cin >> n;
    if (n <= 0 || s < 0 || p < 0)
        cout << "Invalid values";
    else {
        if (p == 0)
            cout << s / n / 12;
        else {
            float r = p / 100;
            float m = (s * r * pow(1 + r, n)) / (12 * (pow(1 + r, n) - 1));
            cout << m;
        }
    }
    return 0;
}
;