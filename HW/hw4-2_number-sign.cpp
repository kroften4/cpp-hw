import std;

int sign(double num)
// returns -1, 0 , 1
{
	if (num > 0)
		return 1;
	if (num == 0)
		return 0;
	if (num < 0)
		return -1;
}

int main4_2()
{
	std::cout << "Enter double num\n";
	double num;
	std::cin >> num;
	std::cout << "sign(num): " << sign(num);

	return 0;
}
