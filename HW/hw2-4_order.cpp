#include <iostream>
using namespace std;

int main2_4()
{
    float n;
    cout << "Enter n\n";
    cin >> n;
    int start = max(1, int(ceil(n)));
    for (int i = start; i < start + 10; i++)
        cout << i << " ";
    return 0;
}
