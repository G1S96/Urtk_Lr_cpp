#include<iostream>
using namespace std;

int main()
{
	int a, b, c,d,res,h=100;
	cin >> a >> b >> c;
	if ((a||b||c)>=h ) { cout << "a lot of people"; }
	else {
		if ((a + b + c) % 3 != 0) { cout << "IMPOSSIBLE"; }
		else
		{
			res = 0;
			d = (a + b + c) / 3;

			if (a > d) res += a - d;

			if (b > d) res += b - d;

			if (c > d) res += c - d;
			cout << res;
		}
	}

	return 0;
}