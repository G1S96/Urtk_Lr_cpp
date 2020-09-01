#include<iostream>
#include<cmath>
#include <iomanip>
using namespace std;

struct Date {
	int year, month, day;
};


bool isLeap(int year) {
	return ((!(year % 4) && (year % 100)) || (!(year % 400))) ? true : false;
}


int LastNumber(int day, int month, int year) {
	if (month < 1 || month>12)
		return 0;
	int arr[]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	return(isLeap(year) && month == 2) ? arr[month - 1] + 1 : arr[month - 1];
}


bool ChekDate(int day, int month, int year) {
	return ((day >= 0 && day <= 31) && (month >= 0 && month <= 12) && (year > 0)) ? true : false;
}


int countLeapYears(int month, int year) {
	int years = year;
	if (month <= 2)
		years--;
	return years / 4 - years / 100 + years / 400;
}


int CountDay(int day, int month, int year) {
	long int n2 = year * 365 + day;
	for (int i = 0; i < month - 1; i++) { n2 += LastNumber(day, month, year); }
	n2 += countLeapYears(month, year);
	return (n2 - 366);

}


int DayWeek(int day, int month, int year) {
	if (month < 3) { year -= 1; month += 10; }
	else { month -= 2; }
	return (day + 31 * month / 12 + year + year / 4 - year / 100 + year / 400) % 7;
}


int Friday13(int month, int year) {
	int day = 13, counter = 0;
	while (true) {
		while (month <= 12) {
			if (DayWeek(day, month, year) != 5) { counter += LastNumber(day, month, year); }
			else { return counter; }
			month++;
		}
		year += 1; month = 1;
	}
}





bool SetDate(int day, int month, int year) {
	int days_in_month[] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	if (year % 4 == 0)
		days_in_month[2] = 29;

	if ((month < 1) || (month > 12))
		return false;

	if ((day < 1) || (day > days_in_month[month]))
		return false;

	return true;
}


void ShowDate(int day, int month, int year) {
	if (SetDate(day, month, year) == false) { cout << day << ":" << month << ":" << year; }
	else cout << setfill('0') << setw(2) << day << ":" << setw(2) << month << ":"  <<setw(4) << year;}


int main(void) {
	Date d;
	cout << "Enter day month year:";
	cin >> d.day >> d.month >> d.year;
	string S[7] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };


	if (ChekDate(d.day, d.month, d.year) == false) {
		cout << "Invalid input\nDate changed on 01.01.0001\n";
		d.day = 1, d.month = 1, d.year = 1;
	}

	if (d.day < LastNumber(d.day, d.month, d.year)) { cout << "Days in a month: " << LastNumber(d.day, d.month, d.year); }
	else { cout << "Date is not correct this month days: " << LastNumber(d.day, d.month, d.year); }

	cout << "\nDays from 01.01.0001 to "; ShowDate(d.day, d.month, d.year);
	cout <<" "<<CountDay(d.day, d.month, d.year) << endl;

	cout << "Day of the week date "; ShowDate(d.day, d.month, d.year);
	cout <<" " << S[DayWeek(d.day, d.month, d.year)] << endl;
	cout << "Until next Friday 13: " << abs(Friday13(d.month, d.year) + 13 - d.day) << " day.\n\n";

	

	return 0;
}
