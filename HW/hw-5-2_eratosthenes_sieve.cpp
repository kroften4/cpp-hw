import std;
using std::cout, std::cin, std::vector;

int main5_2()
{
	cout << "Enter upper boundary: ";
	int bound;
	cin >> bound;
	vector<int> sieve = { 2 };
	for (int n = 2; n < bound; n++) {
		bool is_prime = true;
		for (int prime : sieve) {
			if (n % prime == 0) {
				is_prime = false;
			}
		}
		if (is_prime)
			sieve.push_back(n);
	}

	for (int prime : sieve)
		cout << prime << ' ';

	return 0;
}
