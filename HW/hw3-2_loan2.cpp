#include <iostream>

void error(std::string msg);

double calc_m(double s, double p, double n);
double calc_p_approx(double s, double m, double n, double eps);

int main3_2()
{
    double s, m, n;
    std::cout << "S: ";
    std::cin >> s;
    std::cout << "m: ";
    std::cin >> m;
    std::cout << "n: ";
    std::cin >> n;
    constexpr double eps = 0.01;
    double p = calc_p_approx(s, m, n, eps);
    std::cout << "p ~= " << p << '\n';
    
    return 0;
}

void error(std::string msg)
/**
* Output a message in `cerr` stream and exit the program
* 
* @param msg A message to ouput
*/
{
    std::cerr << "error: " << msg << '\n';
    exit(1);
}

double calc_m(double s, double p, double n)
/**
* Calculate monthly loan fee given the parameters
*
* @param s Loan sum (initial amount of money)
* @param p Loan percentage
* @param n Amount of years to pay off the debt
* @returns m_calc Monthly fee
* @throws if any of the parameters is <= 0
*/
{
    if (s < 0 || p < 0 || n <= 0)
        error("Bad arguments for calc_m()");
    if (p == 0)
        return s / n / 12;
    double r = p / 100;
    double m_calc = (s * r * pow(1 + r, n)) /
        (12 * (pow(1 + r, n) - 1));
    return m_calc;
}

double calc_p_approx(double s, double m, double n, double eps)
/**
* Calculate loan percentage given the parameters
* using the method of successive approximations
*
* @param s Loan sum (initial amount of money)
* @param m Monthly fee
* @param n Amount of years to pay off the debt
* @param eps Required precision
* @returns Calculated loan percentage
* @throws if any of the parameters is <= 0
*/
{
    if (s <= 0 || m <= 0 || n <= 0 || eps <= 0)
        error("Bad arguments for calc_p()");

    constexpr double low = 1, high = 100;

    double step = 10;
    while (true) {
        for (double p = 0; calc_m(s, p, n) <= m; p += step) {
            double m_test = calc_m(s, p, n);
            if (std::abs(m_test - m) < eps) {
                std::cout << "(m_test: " << m_test << " step: " << step << ")\n";
                return p;
            }
        }
        step /= 2;
    }
}
