import std;
using std::time, std::srand, std::rand, 
std::cout, std::cin, std::ofstream, std::ifstream, 
std::string, std::vector;

bool is_palindrome(vector<int> v, int l, int r);

int main5_4()
{

	ofstream fout{ "hw5-4.txt" };
	srand(time(0));
	cout << "Enter amount N: ";
	int amount;
	cin >> amount;
	for (int i = 0; i < amount; i++)
		fout << rand() % 10 << ' ';
	fout.close();

	ifstream fin{ "hw5-4.txt" };
	if (fin.fail()) {
		cout << "No such file";
		exit(1);
	}

	vector<int> nums;
	while (!fin.eof()) {
		int num;
		fin >> num;
		nums.push_back(num);
		cout << num << ' ';
	}
	cout << '\n';

	int max_len = 0;
	int start, end;
	for (int i = 0; i < amount; i++) {
		for (int j = i; j < amount; j++) {
			if (is_palindrome(nums, i, j)) {
				int new_len = j - i + 1;
				if (new_len > max_len) {
					max_len = new_len;
					start = i;
					end = j;
				}
			}
		}
	}
	cout << "Max palindrome length: " << max_len << '\n'
		<< "indices: " << start << '-' << end << '\n'
		<< "palindrome: ";
	for (int i = start; i <= end; i++) {
		cout << nums[i] << ' ';
	}

	return 0;
}

bool is_palindrome(vector<int> v, int l, int r)
{
	for (int i = 0; i <= (r - l - 1) / 2; i++) {
		if (v[l + i] != v[r - i])
			return false;
	}
	return true;
}