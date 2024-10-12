import std;
using std::pair, std::vector, std::cin, std::cout;

constexpr double pi = 3.14159265;
constexpr int scale = 10;

pair<int, int> sin_pixel(double a, double p, double x);

int main4_5()
{
	cout << "Enter amplitude and period\n";
	double a, p;
	cin >> a >> p;
	
	vector<vector<char>> board(
		int(a * scale) * 2, 
		vector<char>(200, ' ')
	);
	
	// populate
	for (double x = 0; x < 6 * pi; x += 0.1) {
		pair<int, int> pos = sin_pixel(a, p, x);
		if (pos.second < board.size() && pos.first < board[pos.second].size()) {
			board[pos.second][pos.first] = '*';
		}
	}

	// print out
	for (int i = 0; i < board.size(); i++) {
		for (int j = 0; j < board[i].size(); j++) {
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
	pair<int, int> pos { x_pixel, y_pixel + int(a * scale) };
	return pos;
}
