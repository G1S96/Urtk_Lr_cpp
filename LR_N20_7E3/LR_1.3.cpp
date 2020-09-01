#include <iostream>
#include <cmath> 
using namespace std;

int main()
{
	float x,y,f;
	const double a=3.4,b=5.6;
	
	cout << "Enter x: ";
	cin >> x;
	cout << "Enter y: ";
	cin >> y;
	
	f=pow(sin(x-a),2)+((pow(x,3)+pow(x,2)+pow(x*y,2)+pow(y,3))/1-(x/a)+(y/b)*cos(x+a));
	cout << "Answer: "<< f <<endl;
	
	return 0;	
}
