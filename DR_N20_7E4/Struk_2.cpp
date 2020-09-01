#include <iostream>
#include <cmath>
using namespace std;

typedef struct time {
    int hour;
    int minute;
} Time;

int main() {
    Time start, end;
    cin >> start.hour >> start.minute >> end.hour >> end.minute;

    if (start.hour > end.hour || (start.hour == end.hour && end.minute > start.minute))
    {
        cout << "Incorrect time\n";
        return 0;
    }

    Time duration;
    duration.hour = abs(end.hour - start.hour);
    duration.minute = abs(end.minute - start.minute);
    if (duration.minute < 0)
    {
        duration.hour--;
        duration.minute += 60;x
    }

    cout << duration.hour << ":" << duration.minute << endl;

    return 0;
}