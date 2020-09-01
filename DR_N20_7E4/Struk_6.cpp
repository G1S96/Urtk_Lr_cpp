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


int LastNumber(int month, int year) {
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
	for (int i = 0; i < month - 1; i++) { n2 += LastNumber(month, year); }
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
			if (DayWeek(day, month, year) != 5) { counter += LastNumber(month, year); }
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
	else cout << setfill('0') << setw(2) << day << ":" << setw(2) << month << ":" << setw(4) << year;
}

int dayOfYear(Date date) {
	int sum = 0;
	for (int i = 1; i < date.month; i++) {
		sum += LastNumber(i,date.year);
	}
	return sum + date.day;
}

int Distance(Date d1, Date d2) {

	int dd1 = 0, dd2;
	if (d2.year < d1.year)
		return -1;
	for (int i = d1.year; i < d2.year; i++) {
		if (isLeap(i))
			dd1 += 366;
		else
			dd1 += 365;
	}
	dd1 += dayOfYear(d2) - dayOfYear(d1);
	if (dd1 < 0)
		return -1;
	return dd1+1;
}

void AddDay(Date sta) {
	int add,add_=0, counter = 0,h=0; 
	cout << "Enter +/- days to change: ";cin >> add;

	if (add > 0) {
		for (int i = 1; i < add; i++) {
			if (++sta.day > LastNumber(sta.month, sta.year)) { sta.day = 1; sta.month++; }
			if (sta.month > 12) { sta.month = 1; sta.year++; }
		}
		ShowDate(sta.day, sta.month, sta.year);
	}
	else
	{
		for (int i = 2; i > add; i++) {
			if (sta.day < LastNumber(sta.month, sta.year)) { add += LastNumber(sta.month, sta.year); --sta.month; }
			if (sta.month < 1) { sta.month = 12; --sta.year; }
		}
		ShowDate(abs(sta.day+add), sta.month, sta.year);
	}
	
}


int main(void) {
	Date sta,end;
	cout << "Enter first  date (d m y):";
	cin >> sta.day >> sta.month >> sta.year;
	cout << "Enter second date (d m y):";
	cin >> end.day >> end.month >> end.year;

	string S[7] = { "sunday", "monday", "tuesday", "wednesday", "thursday", "friday", "saturday" };


	if (ChekDate(sta.day, sta.month, sta.year) == false) {
		cout << "Invalid input\nDate changed on 01.01.0001\n";
		sta.day = 1, sta.month = 1, sta.year = 1;
	}

	if (sta.day < LastNumber( sta.month, sta.year)) { cout << "Days in a month: " << LastNumber(sta.month, sta.year); }
	else { cout << "Date is not correct this month days: " << LastNumber(sta.month, sta.year); }

	cout << "\nDays from 01.01.0001 to "; ShowDate(sta.day, sta.month, sta.year);
	cout << " " << CountDay(sta.day, sta.month, sta.year) << endl;

	cout << "Day of the week date "; ShowDate(sta.day, sta.month, sta.year);
	cout << " " << S[DayWeek(sta.day, sta.month, sta.year)] << endl;
	cout << "Until next Friday 13: " << abs(Friday13(sta.month, sta.year) + 13 - sta.day) << " day.\n";

	cout << "Number of days between 1st and 2nd date: " << Distance(sta, end)<<endl;
	AddDay(sta); cout << " - NEW date";
	

	return 0;
}x
