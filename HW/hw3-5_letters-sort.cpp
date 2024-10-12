import std;


std::string heapify(std::string str, int size, int node_idx)
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
		std::swap(str[largest], str[node_idx]);
		str = heapify(str, size, largest);
	}
	return str;
}

std::string heap_sort(std::string str)
{
	int size = str.length();

	// Build a max heap
	for (int i = size / 2 - 1; i >= 0; i--) {
		str = heapify(str, size, i);
	}

	// Move the highest (max) element to the end, reduce size by 1
	for (int i = size - 1; i > 0; i--) {
		std::swap(str[i], str[0]);
		str = heapify(str, i, 0);
	}

	return str;
}

int main3_5()
{
	std::cout << "Enter the string\n";
	std::string str = "";
	std::cin >> str;

	std::cout << heap_sort(str) << '\n';

	return 0;
}
