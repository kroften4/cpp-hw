import std;
using std::cin, std::cout;

int main5_1()
{
	cout << "Enter a positive integer a: ";
	int a;
	cin >> a;
	if (a <= 0) {
		cout << "Invalid positive integer";
		return 0;
	}

	cout << "Enter a positive integer b: ";
	int b;
	cin >> b;
	if (b <= 0) {
		cout << "Invalid positive integer";
		return 0;
	}
	while (a != 0 && b != 0) {
		if (a > b)
			a %= b;
		else
			b %= a;
	}
	cout << a + b;

	return 0;
}