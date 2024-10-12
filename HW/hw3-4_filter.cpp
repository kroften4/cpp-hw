#include <iostream>
#include <fstream>

int main3_4()
{
	std::ifstream file_stream("hw3-4.txt");
	if (file_stream.fail()) {
		std::cout << "No such file";
		exit(1);
	}

	// filter out everything but numbers
	std::string result;
	char buff;
	while (!file_stream.eof()) {
		file_stream >> buff;
		if (48 <= buff && buff <= 57) { // check if buff is a number
			result += buff;
		}
	}
	std::cout << result;

	return 0;
}
