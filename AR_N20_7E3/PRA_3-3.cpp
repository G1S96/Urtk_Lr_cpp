#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	((abs(a - b) <= 25) && (abs(b - c) <= 25) && (abs(c - a) <= 25)) ? cout << "YES" : cout << "NO";
	return 0;
}


