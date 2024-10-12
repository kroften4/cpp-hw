import std;
using std::cout, std::cin, std::pair;

constexpr double pi = 3.1415;
constexpr double scale = 10;

pair<int, int> sin_pixel(double a, double p, double x);

int main4_5t()
{
	cout << "Enter amplitude and period\n";
	double a, p;
	cin >> a >> p;

	const int size_x = int(6 * pi * scale);
	const int size_y = int(a * scale);
	char board[size_y][size_x];
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			board[i][j] = ' ';
		}
	}
	
	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 10; j++) {
			cout << board[i][j];
		}
		cout << '\n';
	}

	return 0;
}

pair<int, int> sin_pixel(double a, double p, double x)
// amplitude, period, parameter
{
	double b = 2 * pi / p;
	double y = a * std::sin(b * x);

	int x_pixel = int(x * scale),
		y_pixel = int(y * scale);
	pair<int, int> pos{ x_pixel, y_pixel + int(a * scale) };
	return pos;
}
