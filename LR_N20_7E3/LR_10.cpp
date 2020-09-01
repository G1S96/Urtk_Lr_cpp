#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

double f1(double x);
double f2(double x);
double rectangle(double a, double b, int num, double (*f)(double x));
using namespace std;

int main() {
	cout << "1 = " << rectangle( M_PI/8,M_PI/6 , 100, f1) << endl;
	cout << "2 = " << rectangle(0, M_LN2, 200, f2) << endl;
	return 0;
}


double f1(double x) {
	return 1/pow(cos(2*x),2);
}

double f2(double x) {
	return sqrt(pow(M_E,x)-1);
}

double rectangle(double a, double b, int num, double (*f)(double x)) {
	double x = a, h = (b - a) / num, s = 0;
	for (int i = 1; i < num; i++) {
		x += h;
		s += f(x);
	}
	return s * h;
}
