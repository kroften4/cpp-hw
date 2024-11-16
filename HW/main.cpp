import std;
using std::string, std::map, std::function, std::cin, std::cout, std::numeric_limits, std::streamsize;

int main1_1();
int main1_2();
int main1_3();
int main1_4();
int main1_5();

int main2_1();
int main2_2();
int main2_3();
int main2_4();
int main2_5();

int main3_1();
int main3_2();
int main3_3();
int main3_4();
int main3_5();

int main4_1();
int main4_2();
int main4_3();
int main4_4();
int main4_5();
int main4_6();
int main4_7();
int main4_8();
int main4_9();

int main5_1();
int main5_2();
int main5_3();
int main5_4();
int main5_5();
int main5_6();

int main6_1();
int main6_2();
int main6_3();
int main6_4();

int main()
{
	map<string, function<int()>> functions;
	functions["1-1"] = main1_1;
	functions["1-2"] = main1_2;
	functions["1-3"] = main1_3;
	functions["1-4"] = main1_4;
	functions["1-5"] = main1_5;

	functions["2-1"] = main2_1;
	functions["2-2"] = main2_2;
	functions["2-3"] = main2_3;
	functions["2-4"] = main2_4;
	functions["2-5"] = main2_5;

	functions["3-1"] = main3_1;
	functions["3-2"] = main3_2;
	functions["3-3"] = main3_3;
	functions["3-4"] = main3_4;
	functions["3-5"] = main3_5;

	functions["4-1"] = main4_1;
	functions["4-2"] = main4_2;
	functions["4-3"] = main4_3;
	functions["4-4"] = main4_4;
	functions["4-5"] = main4_5;
	functions["4-6"] = main4_6;
	functions["4-7"] = main4_7;
	functions["4-8"] = main4_8;
	functions["4-9"] = main4_9;

	functions["5-1"] = main5_1;
	functions["5-2"] = main5_2;
	functions["5-3"] = main5_3;
	functions["5-4"] = main5_4;
	functions["5-5"] = main5_5;
	functions["5-6"] = main5_6;

	functions["6-1"] = main6_1;
	functions["6-2"] = main6_2;
	functions["6-3"] = main6_3;
	functions["6-4"] = main6_4;

	cout << "Enter the task number\n";
	string task;
	cin >> task;
	cout << "=====================\n\n";

	char next = 'y';
	while (next == 'y') {
		functions[task]();
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "\n<<<<<<\n"
			<< "Continue? [y/n]: ";
		cin >> next;
		cout << ">>>>>>\n\n";
	}
}
