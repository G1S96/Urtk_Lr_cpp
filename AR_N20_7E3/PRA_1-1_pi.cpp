#include <iostream>
using namespace std;

int main(void) {
	double pi = 0.;
	long n, znak = 1;

	cout << "Number of iterations ";
	cin >> n;

	if (n > 0) {
		for (double i = 1; i < n * 2; i += 2) {
			pi += znak * 1 / i;
			znak = -znak;
		}
		cout.precision(20);
		cout << "Pi = " << (pi * 4.) << endl;
	}
	else {
		cout << "Incorrect number entry" << endl;
	}
	return 0;
}
