import std;

int main6_2()
{
    std::ofstream fout{ "hw3-3.txt" };
    fout << "This is a text file\n"
        << "Hello everyone\n"
        << "Hello everyone\n"
        << "This is the third line\n";
    fout.close();

    std::ifstream fin{ "hw3-3.txt" };
    if (fin.fail()) {
        std::cout << "No such file";
        exit(1);
    }

    std::string line;
    while (!fin.eof()) {
        std::getline(fin, line);
        std::cout << line << '\n';
    }

	return 0;
}
