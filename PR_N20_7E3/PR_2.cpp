#include <iostream>
using namespace std;

int main() {
  int i,j,k;

  cout << "Enter i: ";
  cin >> i;
  cout << "Enter j: ";
  cin >> j;

  i += 2;
  j -= i;
  k = i/j;
  k += k;
  k -= 1;
  j = k%i;
  k += k+i;
  k += k/j;
  k = k*k*k;
  k += i*j;

  cout << k;
  return 0;
}
