import std;
using std::vector, std::cout, std::cin;

int main5_3()
{
	vector<double> numbers;
	cout << "Enter 15 numbers\n";
	for (int i = 0; i < 15; i++) {
		double n;
		cin >> n;
		numbers.push_back(n);
	}

	int count = 0;
	for (int i = 0; i < numbers.size() - 1; i++) {
		for (int j = i + 1; j < numbers.size(); j++) {
			if (numbers[i] + numbers[j] == 13.0)
				count++;
		}
	}

	cout << "Amount of sum-13 pairs: " << count;

	return 0;
}