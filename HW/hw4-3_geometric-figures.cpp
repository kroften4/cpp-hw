import std;
using std::cin, std::cout, std::string; 

void error(std::string msg);

double rectangle_area(double a, double b);
double triangle_area(double a, double b, double c);
double circle_area(double r);

int main4_3()
{
	std::cout << "Rectangle, triangle or circle? [r/t/c]: ";
	char figure;
	std::cin >> figure;
	switch (figure)
	{
	case 'r': {
		std::cout << "Enter two rectangle sides\n";
		double a, b;
		std::cin >> a >> b;
		rectangle_area(a, b);
		break;
	} case 't': {
		std::cout << "Enter three triangle sides\n";
		double a, b, c;
		std::cin >> a >> b >> c;
		triangle_area(a, b, c);
		break;
	} case 'c': {
		std::cout << "Enter circle radius\n";
		double r;
		std::cin >> r;
		circle_area(r);
		break;
	} default:
		error("Invalid input\n");
	}

	return 0;
}

void error4_3(std::string msg)
{
	std::cerr << "error: " << msg << "\n>>>>>>\n";
	main4_3();
}

double rectangle_area(double a, double b)
{
	if (a <= 0 || b <= 0)
		error4_3("Invalid rect sides");
	return a * b;
}

double triangle_area(double a, double b, double c)
{
	if (a <= 0 || b <= 0 || a >= b + c || b >= a + c || c >= a + b)
		error4_3("Invalid triangle sides");
	const double p = (a + b + c) / 2;
	return std::sqrt(p * (p - a) * (p - b) * (p - c));
}

double circle_area(double r)
{
	if (r <= 0)
		error4_3("Invalid radius");
	constexpr double pi = 3.14159265;
	return 2 * pi * r;
}
