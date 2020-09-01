#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h> 
using namespace std;

int main()
{
	float y, z, a=1;
	
	y = (pow(sin((3 * M_PI) - (2 * a)), 2) *2)* (pow(cos((5 * M_PI) + (2 * a)), 2));
	
	z=1/4.-1/4.*(sin((2.5* M_PI) -(8*a)));

	cout <<"Y= " << y <<endl;
	cout <<"Z= " << z <<endl;
	return 0;
}
