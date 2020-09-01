#include<iostream>
using namespace std;

struct Date
{
	int year, month, day;
};

bool isLeap(int year){
	return ((!(year % 4) && (year % 100)) || (!(year % 400))) ? true : false;}


int LastNumber(Date dat)
{
	if (dat.month < 1 || dat.month>12)
		return 0;
	int arr[]{ 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	return(isLeap(dat.year) && dat.month == 2) ? arr[dat.month - 1] + 1 : arr[dat.month - 1];
}


bool ChekDate(Date dat){
	return ((dat.day >= 0 && dat.day <= 31) && (dat.month >= 0 && dat.month <= 12) && (dat.year > 0))? true: false;}

int main(void)
{
	Date d;
	cout << "Enter day month year:";
	cin >> d.day >> d.month >> d.year;

	if (ChekDate(d) == false) {
		cout << "Invalid input\nDate changed on 01.01.01\n";
		d.day = 1, d.month = 1, d.year = 1;
	}
	
	if(d.day < LastNumber(d)){ cout << "Days in a month: " << LastNumber(d); }
	else { cout << "Date is not correct this month days: " << LastNumber(d); }
	
	return 0;
}
