import std;
using std::cout, std::vector, std::pair, std::pow;

int main4_8()
{
	constexpr double matrix_a[3][4] = {
		{5, 2, 0, 10},
		{3, 5, 2, 5},
		{20, 0, 0, 0}
	};
	constexpr double matrix_b[4][2] = {
		{1.2, 0.5},
		{2.8, 0.4},
		{5, 1},
		{2, 1.5}
	};

	/* ~~~  A * B = matrix C ~~~ */
	double matrix_c[3][2];
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 2; y++) {
			matrix_c[x][y] = 0;
			for (int z = 0; z < 4; z++) {
				matrix_c[x][y] += matrix_a[x][z] * matrix_b[z][y];
			}
		}
	}

	cout << "A * B = " << '\n';
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 2; y++) {
			cout << matrix_c[x][y] << ' ';
		}
		cout << '\n';
	}
	cout << '\n';
	/* ~~~~~~ */

	/* ~~~  Min & max money ~~~ */
	// { int seller_index, double seller_money }
	pair<int, double> max_seller_m = { 0, 0 }, min_seller_m = {0, pow(10, 10)};
	for (int seller = 0; seller < 3; seller++) {
		double money = matrix_c[seller][0];
		if (money < min_seller_m.second)
			min_seller_m = { seller, money };
		if (money > max_seller_m.second)
			max_seller_m = { seller, money };
	}
	cout << "Min seller by money: " << min_seller_m.first + 1 << '\n'
		<< "Max seller by money: " << max_seller_m.first + 1 << '\n';
	cout << '\n';
	/* ~~~~~~ */

	/* ~~~ Min & max commission fees ~~~ */
	// { int seller_index, double seller_fee }
	pair<int, double> max_seller_c = { 0, 0 }, min_seller_c = { 0, pow(10, 10) };
	for (int seller = 0; seller < 3; seller++) {
		double fee = matrix_c[seller][1];
		if (fee < min_seller_c.second)
			min_seller_c = { seller, fee };
		if (fee > max_seller_c.second)
			max_seller_c = { seller, fee };
	}
	cout << "Min seller by commission fee: " << min_seller_c.first + 1 << '\n'
		<< "Max seller by commission fee: " << max_seller_c.first + 1 << '\n';
	cout << '\n';
	/* ~~~~~~ */

	/* ~~~ Money sum ~~~ */
	double money_sum = 0;
	for (int seller = 0; seller < 3; seller++) {
		money_sum += matrix_c[seller][0];
	}
	cout << "Money sum: " << money_sum << '\n';
	cout << '\n';
	/* ~~~~~~ */

	/* ~~~ Commission fee sum ~~~ */
	double fee_sum = 0;
	for (int seller = 0; seller < 3; seller++) {
		fee_sum += matrix_c[seller][1];
	}
	cout << "Commission fee sum: " << fee_sum << '\n';
	cout << '\n';
	/* ~~~~~~ */

	/* ~~~ Full sum ~~~ */
	double full_sum = 0;
	for (int seller = 0; seller < 3; seller++) {
		full_sum += matrix_c[seller][0] + matrix_c[seller][1];
	}
	cout << "Full sum: " << full_sum << '\n';
	cout << '\n';
	/* ~~~~~~ */

	return 0;
}
