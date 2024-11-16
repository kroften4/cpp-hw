import std;
using std::cout, std::cin, std::vector;

void cout_sq_matrix(vector<double> matrix, unsigned int size) 
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << matrix[size * i + j] << ' ';
		}
		cout << '\n';
	}
}

int main6_1()
{
	cout << "Enter square matrix size: ";
	int size;
	cin >> size;
	if (size <= 0) {
		cout << "Invalid matrix size";
		return 0;
	}

	vector<double> matrix;
	for (int i = 0; i < size; i++) {
		cout << "Enter row " << i << ": ";
		for (int j = 0; j < size; j++) {
			double num;
			cin >> num;
			matrix.push_back(num);
		}
	}

	bool is_magic_matrix = true;

	double check_sum_row = 0;
	for (int i = 0; i < size; i++) {
		double curr_sum = 0;
		for (int j = 0; j < size; j++) {
			curr_sum += matrix[size * i + j];
		}
		if (i == 0)
			check_sum_row = curr_sum;
		else if (curr_sum != check_sum_row) {
			is_magic_matrix = false;
			break;
		}
	}

	double check_sum_column = 0;
	for (int j = 0; j < size; j++) {
		double curr_sum = 0;
		for (int i = 0; i < size; i++) {
			curr_sum += matrix[size * i + j];
		}
		if (j == 0)
			check_sum_column = curr_sum;
		else if (curr_sum != check_sum_column) {
			is_magic_matrix = false;
			break;
		}
	}

	double sum_diagonal_1 = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i != j)
				continue;
			sum_diagonal_1 += matrix[size * i + j];
		}
	}
	double sum_diagonal_2 = 0;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i != size - 1 - j)
				continue;
			sum_diagonal_2 += matrix[size * i + j];
		}
	}
	if (sum_diagonal_1 != sum_diagonal_1)
		is_magic_matrix = false;

	if (is_magic_matrix)
		cout << "This is a magix matrix!";
	else
		cout << "Not a magix matrix";

	return 0;
}
