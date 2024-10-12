#include <iostream>
using namespace std;

int main2_1()
{
    float h, r_big, r_small;
    cout << "Enter truncated cone parameters\n"
         << "height: \n";
    cin >> h;
    cout << "big base radius: \n";
    cin >> r_big;
    cout << "small base radius: \n";
    cin >> r_small;
    if (r_big < r_small)
        swap(r_big, r_small);
    if (h <= 0 || r_big <= 0 || r_small <= 0 || r_big == r_small) {
        cout << "This is not a valid truncated cone";
        exit(1);
    }
    constexpr float pi = 3.14159265;
    float v = pi / 3 * h *
        (pow(r_big, 2) + r_big * r_small + pow(r_small, 2));
    cout << "V: " << v;
    float l = sqrt(pow(h, 2) + pow(r_big - r_small, 2));
    float s = pi * (pow(r_big, 2) + (r_big + r_small) * l + 
        pow(r_small, 2));
    cout << "\nS: " << s;
    return 0;
}
