#include <iostream>
#include <ctime> 
using namespace std;

int main()
{
    int n;
    cout << "enter list size from 4: ";
    cin >> n;
    if (n < 5) { cout << "erorre"; exit(0); }

    double prod = 1, sum = 0;
    double* mas = new double[n];
    int min1;

    srand(time(NULL));

    for (int i = 0; i < n; i++) { mas[i] = 0.01 * (rand() % 101 - 48); cout << mas[i] << " "; }
    cout << endl;

    for (int i = 0; i < n; i++)
        if (mas[i] > 0) { prod *= mas[i]; }
        cout << "The product of positive array elements =" << prod << endl;
    double min = mas[0];

    for (int i = 0; i < n; ++i) { if (mas[i] < min) { min = mas[i]; min1 = i; } }
 
    for (int i = 0; i < min1; i++) { sum += mas[i]; }
    cout << "Sum of array elements up to min =" << sum << endl;

    double k = n - 1;
    double p = n - 2;
    if (n % 2 == 0)
    {
        k = n - 2;
        p = n - 1;
    }
    for (int i = 0; i < n - 2; i += 2)
        for (int j = k; j > i; j -= 2)
            if (mas[j] < mas[j - 2])
            {
                double t = mas[j];
                mas[j] = mas[j - 2];
                mas[j - 2] = t;
            }
    for (int i = 1; i < n - 2; i += 2)
        for (int j = p; j > i; j -= 2)
            if (mas[j] < mas[j - 2])
            {
                double t = mas[j];
                mas[j] = mas[j - 2];
                mas[j - 2] = t;
            }
    cout << "Sorted array" << endl;
    for (int i = 0; i < n; i++)
        cout << mas[i] << " ";
    return 0;
}