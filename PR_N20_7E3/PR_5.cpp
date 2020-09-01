#include <iostream>
#include<cmath>
using namespace std;

int main()
{
	int a=0, b=0, c=0, d=0;

	cout << "Enter your IP:\n";
	cin >> a, b, c, d;

	if ((a || b || c || d > 255)&&(a || b || c || d <0)) { cout << "error"; }
	else { cout << a, ".", b, ".", c, ".", d; }


	return 0;
}