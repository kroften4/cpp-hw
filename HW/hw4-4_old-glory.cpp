import std;
using std::string;

string repeat(string str, int n)
{
	string result;
	for (int i = 0; i < n; i++) {
		result += str;
	}
	return result;
}

int main4_4()
{
	string star_row_odd = repeat("* ", 8) + repeat("#", 30) + "\n";
	string star_row_even = repeat("* ", 8) + repeat(" ", 30) + "\n";
	string line_row_odd = repeat("#", 46) + "\n";
	string line_row_even = repeat(" ", 46) + "\n";

	string upper_part = repeat(star_row_odd + star_row_even, 3);
	string lower_part = repeat(line_row_odd + line_row_even, 3) + line_row_odd;

	std::cout << upper_part + lower_part;
	return 0;
}
