#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,c=-1000;
    cin >> n;
    int* a, * b, s = 0, x = 0,s1=0,x1=0,A=0,B=0;
    a = new int[n];
    b = new int[n];

    for (int i = 0; i < n; i++) { cin >> a[i]; A += a[i]; }
    cout << A<<endl;
    for (int i = 0; i < n; i++) { cin >> b[i]; B += b[i]; }
    cout << B;
    cout << endl; cout << endl;

    for (int i = 0; i < n; i++)
    {
        x = fabs(a[i] - b[i]);
        cout << x<<" ";
        x1 += x;
    }
    cout << x1;


    cout << endl; cout << endl;


    for (int i = 0; i < n; i++)
    {
        s = fabs(a[i] + 100 - b[i]);
        s1 += s;
        cout << s << " ";
    }
    cout << s1;


    cout << endl; cout << endl;

    delete[] a;
    delete[] b;

    return 0;
}     