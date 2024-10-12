import std;

int main4_1()
{
    std::ofstream fout{ "hw4-1.txt" };
    for (int i = 0; i < 10; i++) {
        double num;
        std::cin >> num;
        fout << num << "\n";
    }
    fout.close();

    std::ifstream fin{ "hw4-1.txt" };
    double sum = 0;
    double num;
    while (fin >> num) {
        sum += num;
    }

    std::cout << "Sum: " << sum;

	return 0;
}
