import std;

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

int main()
{
	std::map<std::string, std::function<int()>> functions;
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

	std::cout << "Enter the task number\n";
	std::string task;
	std::cin >> task;
	std::cout << "=====================\n\n";

	char next = 'y';
	while (next == 'y') {
		functions[task]();
		std::cout << "\n<<<<<<\n"
			<< "Continue? [y/n]: ";
		std::cin >> next;
		std::cout << ">>>>>>\n\n";
	}
}
