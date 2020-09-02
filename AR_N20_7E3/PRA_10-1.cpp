#include<iostream>
using namespace std;

struct Date
{
	int day, month, year;
	int LastNumber();
	bool ChekDate();
	bool IsLeap();
};

bool Date::IsLeap()
{
	return ((!(year % 4) && (year % 100)) || (!(year % 400))) ? true : false;
}


int Date::LastNumber()
{
	switch (month) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			return 31;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			return 30;
			break;
		case 2:
			if (Date::IsLeap()){ return 28; }
			else { return 29; }
	}
	Date::ChekDate();
}


bool Date::ChekDate()
{
	if ((day >= 0 && day <= 31) && (month >= 0 && month <= 12) && (year > 0)) { return true; }
	else return false;
}

int main()
{
	Date d;
	cout << "Enter day month year:";
	cin >> d.day >> d.month >> d.year;

	if (d.ChekDate() == false) { 
		cout << "Invalid input\nDate changed on 01.01.0100\n";
		d.day = 1, d.month = 1, d.year = 1; }

	cout <<"days in a month: "<<d.LastNumber();

	return 0;
}