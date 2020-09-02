#include <iostream>
using namespace std;

struct time
{
	int hour;
	int minute;
};

int main()
{
	time start;
	time end;
	cout << "Enter start hours: ";cin >> start.hour;
	cout << "Enter start minutes: ";cin >> start.minute;
	cout << "Enter end hours: ";cin >> end.hour;
	cout << "Enter end minutes: ";cin >> end.minute;

	if ((start.hour && end.hour < 0) || (start.hour && end.hour > 24)){
	cout << "Invailad input"; exit(0);}

	if ((start.minute && end.minute < 0) || (start.minute && end.minute > 60)){
	cout << "Invailad input"; exit(0);}

	if (start.hour > end.hour)
	{
		int tempHour, tempMinute;
		tempHour = start.hour; tempMinute = start.minute;
		start.hour = end.hour; start.minute = end.minute;
		end.hour = tempHour; end.minute = tempMinute;
	}
	int diffHour = end.hour - start.hour;
	int diffMinute = end.minute - start.minute;
	if (diffMinute < 0)
	{
		diffHour--;
		diffMinute = 60 + diffMinute;
	}
	cout << diffHour << ":" << diffMinute;


	return 0;
}