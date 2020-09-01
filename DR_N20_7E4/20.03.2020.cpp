#include <iostream>
#include <ctime> 
using namespace std;
int main()
{
    int n;
    cout << "enter list size from 1: ";
    cin >> n;
    if (n <= 1) { cout << "erorre"; exit(0); }
    int* x = new int[n];
    srand(time(NULL));
    for (int i = 0; i < n; i++) { x[i] = 1 + rand() % 20; cout << x[i] << " "; }

    int max = x[0], min = x[0];

    for (int i = 1; i < n; i++){
        if (x[i] % 2 == 0 && x[i] > max){max = x[i];}
        if (x[i] % 2 != 0 && x[i] < min){min = x[i];}}

    int cou_max = 0, cou_min = 0;
    cout << "\nmax = " << max << " ind: ";
    for (int i=0; i < n; i++) {
        if (max == x[i]) { cou_max = i; cout << cou_max << " "; }}

    cout << "\nmin = " << min << " ind: ";
    for (int j=0; j < n; j++) {
        if (min == x[j]) { cou_min = j; cout << cou_min << " "; }}
    return 0;
}