#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, b;

	cout << "Enter the two numbers\n";
	cin >> a >> b;

	a = 1 / a;
	b = 1 / b;

	(abs(a - b) < 0.000001) ? (cout << "result are equal (by 0.000001 epsilon)") : (cout << "result are not equal (by 0.000001 epsilon)");

	return 0;
}