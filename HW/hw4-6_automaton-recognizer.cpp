import std;
using std::string, std::cin, std::cout;

int decode_roman(char roman_char);
int roman_to_decimal(string roman);

int main4_6()
{
	while (true) {
		cout << "Enter a roman numeral\n";
		string roman = "";
		cin >> roman;
		int converted_roman = roman_to_decimal(roman);
		if (converted_roman == -1) {
			cout << "Invalid roman numeral" << '\n';
		}
		std::cout << converted_roman << '\n';
	}

	return 0;
}

int decode_roman(char roman_char)
// Converts a roman character to its decimal representation
// Returns -1 on error
{
	switch (roman_char)
	{
	case 'I': return 1;
	case 'V': return 5;
	case 'X': return 10;
	case 'L': return 50;
	case 'C': return 100;
	case 'D': return 500;
	case 'M': return 1000;
	default:
		return -1;
	}
}

int roman_to_decimal(string roman)
/* 
* Converts a roman numeral string to decimal number
* Rules:
* Valid roman characters: I, V, X, L, C, D, 
* Valid subtraction forms: IV, IX, XL, XC, CD
* Can't use I, X, C, M > 3 times in a row; V, L, D more than 1 time in a row
*
* returns -1 if the roman number is invalid
*/
{
	int decimal = decode_roman(roman[0]);
	if (decimal == -1)
		return -1;

	int repeats = 1;
	for (int i = 1; i < roman.length(); i++) {
		char prev = roman[i - 1], curr = roman[i];
		if (decode_roman(curr) == -1)
			return -1;

		if (prev == curr) {
			switch (curr) {
			case 'I': case 'X': case 'C': case'M':
				repeats++;
				if (repeats > 3)
					return -1;
				break;
			case 'V': case 'L': case'D':
				return -1;
			}
		}

		if (decode_roman(prev) < decode_roman(curr)) {
			string comb;
			comb += prev;
			comb += curr;
			if (comb != "CM" && comb != "CD" &&
				comb != "XC" && comb != "XL" &&
				comb != "IX" && comb != "IV")
				return -1;
			decimal -= decode_roman(prev) * 2;
		}
		decimal += decode_roman(curr);
	}
	return decimal;
}
