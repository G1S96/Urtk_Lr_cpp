
#include <iostream>
using namespace std;

int main()
{

	int power;
	unsigned long long result = 2;
	cout << "Input a Value: ";
	cin >> power;
	if (power > 1)
	{
		for (int i = 2; i <= power; i++)
		{
			result *= 2;
		}
		cout << "Value: " << result;
	}
	else
	{
		cout << "You entered invalid power";
	}


	return 0;
}
