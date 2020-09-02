#include <iostream>
using namespace std;

int main()
{
	int x;
	cin >> x;
	cout.precision(10);
	cout << (pow((x - 1), 2) + 1);

	return 0;
}