#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n = 0;
    double an = 1, an1 = 0;
    const double e = 0.0001;


    while (abs(an - an1) >= e) { ++n; an1 = an; an *= 0.5 / (2. * n - 1.); }

    cout << "an: " << an << " an1: " << an1 << " n: " << n << endl;

    n = 0, an = 1, an1 = 0;

    do { n++; an1 = an; an *= 0.5 / (2. * n - 1.); } while (abs(an - an1) >= e);

    cout << "an: " << an << " an1: " << an1 << " n: " << n << endl;

    return 0;
}