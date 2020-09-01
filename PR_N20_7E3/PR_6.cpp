#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	float sum = 50.;
	int i = 0;

	while (sum < 100.)
	{
		sum *= 1.02;
		i++;
	}
	cout << i;

	return 0;
}