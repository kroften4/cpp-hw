#include <iostream>
#include <iomanip>
using namespace std;

int main2_5()
{
    cout << setw(10) << "x" << setw(10) << "y" << endl;
    float x = -4;
    while (x <= 4) {
        if (x - 1 != 0) {
            float y = (x * x - 2 * x + 2) / (x - 1);
            cout << setw(10) << x << setw(10) << y << endl;
        }
        else {
            cout << setw(10) << x << setw(10) << "No value" << endl;
        }
        x += 0.5f;
    }
    return 0;
}
