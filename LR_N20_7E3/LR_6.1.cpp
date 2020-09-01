#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a = 10, n = 4, i = 2;
    double result = 1, fact = 1;

    while (i<=n)
    {
        fact *= (i - 1) * i;
        result *= (a + i) / fact;
        i += 2;
    }

    cout << "Answer: " << result;

	return 0;
}