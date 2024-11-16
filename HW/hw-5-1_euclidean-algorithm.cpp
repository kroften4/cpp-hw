import std;
using std::cin, std::cout;

int gcd_division(int a, int b);
int gcd_subtraction(int a, int b);

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
	
	cout << "Greatest common divisor (division algorythm): " 
		<< gcd_division(a, b) << '\n'
		<< "Greatest common divisor (subtraction algorythm): " 
		<< gcd_subtraction(a, b);

	return 0;
}

int gcd_division(int a, int b)
{
	while (a != 0 && b != 0) {
		if (a > b)
			a %= b;
		else
			b %= a;
	}
	return a + b;
}

int gcd_subtraction(int a, int b)
{
	while (a != 0 && b != 0) {
		if (a > b)
			a -= b;
		else
			b -= a;
	}
	return a + b;
}