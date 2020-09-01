#include <iostream>
using namespace std;

double Function(double x) { //Подынтегральная функция
    return (1. / x) + 5;
}

double Integral(double a, double b, int n) {
    double result = 0, h = (b - a) / n;

    for (int i = 0; i < n; i++) {
        result += Function(a + h * (i + 0.5));
    }

    result *= h;
    return result;
}

int main() {
    int n = 100;
    double a = 1.0, b = 3.0;

    cout.precision(15);
    cout << Integral(a,b,n) << endl;
}