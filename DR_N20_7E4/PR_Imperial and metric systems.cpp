#include <iostream>
#include <string>

using namespace std;

int main(void)
{

	float m, ft, in;
	int sys;
	cout << "which system to use:\n0 = metric or 1 = imperial: ";
	cin >> sys;
	if (sys == 0)
	{
		cout << "Enter meters : ";
		cin >> m;
		ft = m * 3.28084;
		in = (ft - floor(ft)) * 12;
		cout << floor(ft) << "`" << in << "``";
	}
	else
	{
		cout << "Enter feet : ";
		cin >> ft;
		cout << "\nEnter inches : ";
		cin >> in;
		m = in / 39.370078 + ft / 3.28084;
		cout << m << "m";
	}

	return 0;
}
