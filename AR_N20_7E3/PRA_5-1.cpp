#include <iostream>
using namespace std;

int main(void) 
{
    int n=0, digit, rev = 0;
    unsigned short int val;
    bool ispalindrome = false;
    cout << "Value: ";
    cin >> val;
    n = val;

    while (n > 0) {
        rev = (rev << 1) | (n & 1);
        n = n >> 1;
    }

    (rev == val || rev == (val-rev)) ? ispalindrome = true : ispalindrome = false;

    if (ispalindrome)
        cout << val << " is a bitwise palindrome" << endl;
    else
        cout << val << " is not a bitwise palindrome" << endl;
    return 0;
}