import std;
using std::string, std::swap, std::cout, std::cin, std::ofstream, std::ifstream, std::getline;


string heapify(string str, int size, int node_idx)
{
	// Find index of max{str[node_idx], str[lt], str[rt]}
	int lt = 2 * node_idx + 1,
		rt = lt + 1;
	int largest = node_idx;

	if (lt < size && str[lt] > str[largest])
		largest = lt;

	if (rt < size && str[rt] > str[largest])
		largest = rt;

	// Move largest to the top and recursively heapify from that point
	// If node_idx is the largest, end
	if (largest != node_idx) {
		swap(str[largest], str[node_idx]);
		str = heapify(str, size, largest);
	}
	return str;
}

string heap_sort(string str)
{
	int size = str.length();

	for (int i = size / 2 - 1; i >= 0; i--) {
		str = heapify(str, size, i);
	}

	for (int i = size - 1; i > 0; i--) {
		swap(str[i], str[0]);
		str = heapify(str, i, 0);
	}

	return str;
}

int main5_5()
{
	ofstream fout{ "hw5-5.txt" };
	fout << "This is a text file\n"
		<< "Hello everyone\n"
		<< "This is the third line\n"
		<< "LKDHFWPIEHFJDVKSBJDJFHWIEUF\n"
		<< "skjdafhliwuefbasdjkvawoiafi\n";
	fout.close();

	ifstream fin{ "hw5-5.txt" };
	if (fin.fail()) {
		cout << "No such file";
		exit(1);
	}

	string str = "";
	string line;
	while (!fin.eof()) {
		getline(fin, line);
		str += line;
	}

	cout << heap_sort(str) << '\n';

	return 0;
}
