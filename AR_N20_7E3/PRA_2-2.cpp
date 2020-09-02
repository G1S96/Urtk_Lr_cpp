#include <iostream>
#include<cmath>
using namespace std;
int main() {

    int n;double x = 2;
    cout << "Input a number: ";
    cin >> n;

    for (int i = 0; i != n+1; i++) {x /= 2;}
    cout.precision(20);
    cout << "Value of negative number: " << x << endl;

}