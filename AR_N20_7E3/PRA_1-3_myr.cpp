#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double a, b, x, y;
	cin >> a >> b >> x >> y;
	if (a >= 1 && a < b && b <= 1000 && x >= 1 && y <= 1000 && y >= 1) {
		if (a + x == b + y) {
			cout << a + x << endl;
		}
		else if (a + x == abs(b - y)) {
			cout << a + x << endl;
		}
		else if (abs(a - x) == b + y) {
			cout << b + y << endl;
		}
		else if (abs(a - x) == abs(b - y)) {
			cout << abs(a - x) << endl;
		}
	}
	else {
		cout << "Numbers entered incorrectly" << endl;
	}
	return 0;
}
