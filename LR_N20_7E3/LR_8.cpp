#include<iostream>
#include<math.h>

using namespace std;

double rekurs(int n)
{
    if (n == 0) return 1;
    return rekurs(n - 1) * (2 * sin(fabs(2 * n)) * cos(2 * n) - 11.6 * sin(n / 0.4 - 1));
}

double nerekurs(int n)
{
    double p = 1;
    for (int i = 1; i <= n; i++)
        p *= (2 * sin(abs(2 * i)) * cos(2 * i) - 11.6 * sin(i / 0.4 - 1));
    return p;
}
int main()
{
    int n = 10;
    
    cout << "Recursion:     " << rekurs(n) << endl;
    cout << "Not recursion: " << nerekurs(n) << endl;

    return 0;
}
