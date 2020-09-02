#include <iostream>
using namespace std;

int main()
{
    int n, minlen(0);
    cin >> n;
    int cur, prev, dir = 0;
    cin >> prev;

    while (--n) {
        cin >> cur;
        if (cur == prev) ++minlen;
        else if (cur < prev) {
            if (dir == -1) ++minlen;
            else dir = -1;
        }
        else {
            if (dir == 1) ++minlen;
            else dir = 1;
        }
        prev = cur;
    }
    cout << minlen;
    return 0;
}