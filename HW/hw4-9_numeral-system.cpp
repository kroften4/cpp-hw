import std;
using std::string, std::vector, std::cout, std::cin;


bool is_valid_base(int base);
bool is_valid_num(string num, int base);

unsigned long long base_n_to_base10(string num, int base);
string base10_to_base_n(unsigned long long num, int base);

int main4_9()
{
	cout << "Base to convert from [2-16]: ";
	int base_from;
	cin >> base_from;
	if (!is_valid_base(base_from)) {
		cout << "Invalid base";
		return 0;
	}

	cout << "Base to convert to [2-16]: ";
	int base_to;
	cin >> base_to;
	if (!is_valid_base(base_to)) {
		cout << "Invalid base";
		return 0;
	}

	cout << "Non-negative integer number in base " << base_from << ": ";
	string num_bn;
	cin >> num_bn;
	if (!is_valid_num(num_bn, base_from)) {
		cout << "Invalid number for base " << base_from;
		return 0;
	}


	cout << "Result: " << base10_to_base_n(base_n_to_base10(num_bn, base_from), base_to);
	return 0;
}

bool is_valid_base(int base)
{
	return 2 <= base && base <= 16;
}

bool is_valid_num(string num, int base)
{
	const string valid_chars = "0123456789ABCDEF";
	for (char ch : num) {
		if (!valid_chars.substr(0, base).contains(ch))
			return false;
	}
	return true;
}

int ch_to_digit(char ch)
{
	switch (ch) {
	case '0': return 0;
	case '1': return 1;
	case '2': return 2;
	case '3': return 3;
	case '4': return 4;
	case '5': return 5;
	case '6': return 6;
	case '7': return 7;
	case '8': return 8;
	case '9': return 9;
	case 'A': return 10;
	case 'B': return 11;
	case 'C': return 12;
	case 'D': return 13;
	case 'E': return 14;
	case 'F': return 15;
	default: return -1;
	}
}

unsigned long long base_n_to_base10(string num, int base)
{
	unsigned long long res = 0;
	for (int i = (int)num.length() - 1; i >= 0; i--) {
		int digit = ch_to_digit(num[num.length() - 1 - i]);
		res += digit * (unsigned long long)std::pow(base, i);
	}
	return res;
}

char digit_to_ch(int digit)
{
	switch (digit) {
	case 0: return '0';
	case 1: return '1';
	case 2: return '2';
	case 3: return '3';
	case 4: return '4';
	case 5: return '5';
	case 6: return '6';
	case 7: return '7';
	case 8: return '8';
	case 9: return '9';
	case 10: return 'A';
	case 11: return 'B';
	case 12: return 'C';
	case 13: return 'D';
	case 14: return 'E';
	case 15: return 'F';
	default: return '-';
	}
}

string base10_to_base_n(unsigned long long num, int base)
{
	if (num == 0)
		return "0";
	string res = "";
	while (num > 0) {
		int rem = num % base;
		num /= base;
		res = digit_to_ch(rem) + res;
	}
	return res;
}
