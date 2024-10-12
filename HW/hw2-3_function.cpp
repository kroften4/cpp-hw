#include <iostream>
using namespace std;

int main2_3()
{
	float x, y, b;
	cout << "Enter float x, y and b\n";
	cin >> x >> y >> b;
	if (b - y > 0 && b - x >= 0)
		cout << log(b - y) * sqrt(b - x);
	else
		cout << "Math error";
	return 0;
}
