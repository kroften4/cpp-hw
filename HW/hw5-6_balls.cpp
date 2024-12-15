#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void generate(int t);


int n = 0;
vector<int> a = {};
int counter = 0;

int main5_6() {
    cout << "Amount: ";
    cin >> n;
    for (int i = 1; i <= n; i++) 
        a.push_back(i);
    generate(0);
    cout << counter;

    return 0;
}

void generate(int t) {
    if (t == n) {
        for (int i = 0; i < n; i++) {
            if (a[i] == i + 1) {
                counter++;
                return;
            }
        }
    }
    for (int j = t; j < n; j++) {
        swap(a[t], a[j]);
        generate(t + 1);
        swap(a[t], a[j]);
    }
}
