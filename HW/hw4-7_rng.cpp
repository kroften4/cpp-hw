import std;

int main4_7()
{
	std::cout << "amount: ";
	int n;
	std::cin >> n;

	int s = 0;
	int m = 37, b = 3, c = 64;
	for (int i = 0; i < n; i++) {
		s = (m * s + b) % c;
		std::cout << s << ' ';
	}
	std::cout << '\n';

	s = 0;
	m = 25173;
	b = 13849;
	c = 65537;
	for (int i = 0; i < n; i++) {
		s = (m * s + b) % c;
		std::cout << s << ' ';
	}

	return 0;
}
