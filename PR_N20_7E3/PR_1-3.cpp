#include<iostream>
using namespace std;

int main()
{
	float a=2.3, b = 2.3, s=2.123456, d = 2.123456, e = 2.123456;
	//cout << "Enter the numbers\n";
	//cin >> a >> b >> s >> d >> e;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	
	cout.precision(1);
	cout << a <<endl;
	cout.precision(2);
	cout << b << endl;
	cout.precision(6);
	cout << s<< endl;
	cout.precision(2);
	cout << d << endl;
	cout << int(e) ;
	



	return 0;
}