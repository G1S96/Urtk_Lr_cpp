#include <iostream>
#include <cstdlib>
#include<time.h>
using namespace std;
int main()
{
    const int n = 10;
    double g = 1;
    double x[n];
    int i;
    srand(time(NULL));
    for (i = 0; i < n; i++) { g = rand() % 901 - 200; x[i] = g / 100; cout << "(" << x[i] << ") "; }

    double  min = x[0], minI = 0, task1 = 1, task2 = 0;

    for (int i = 0; i < n; i++) {
        if (x[i] >= 1) { task1 *= x[i]; }
        if (x[i] < min) { minI = i; }
    }

    for (int i = 0; i < minI; i++) { task2 += x[i]; }

    cout << "\ncom = " << task1 << '\n';
    cout << "sum = " << task2 << '\n';

    double k = n - 1;
    double p = n - 2;
    if (n % 2 == 0)
    {
        k = n - 2;
        p = n - 1;
    }
    for (int i = 0; i < n - 2; i += 2)
        for (int j = k; j > i; j -= 2)
            if (x[j] < x[j - 2])
            {
                int t = x[j];
                x[j] = x[j - 2];
                x[j - 2] = t;
            }
    for (int i = 1; i < n - 2; i += 2)
        for (int j = p; j > i; j -= 2)
            if (x[j] < x[j - 2])
            {
                int t = x[j];
                x[j] = x[j - 2];
                x[j - 2] = t;
            }

    for (int i = 0; i < n; i++)
        cout << "(" << x[i] << ") ";
    cout << endl;


    return 0;

}