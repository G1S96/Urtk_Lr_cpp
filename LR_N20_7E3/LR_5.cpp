#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double k = 1, znak = -1,n=3;
	double row = 0, epsilon = 0.0001, term = 1, x, fraction=1,F;
	do
	{
		cout << "Input -1<x+1:  ";
		cin >> x;
	} while (x+1<-1);

	row = x;

	while (abs(term) > epsilon)
	{
		while (k < n - 1) { fraction *= k/(k+1); k += 2; }

		term = znak * (pow(x, n) / n) * fraction;
		row += term;
		znak = -znak;
		n += 2;	
	}

	F = log(x + sqrt(x * x + 1));

	cout << "\nS: " << row << "\nF: "<<F;
	

	return 0;
}
