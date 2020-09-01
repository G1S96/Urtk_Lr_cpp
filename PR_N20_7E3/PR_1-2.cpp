#include <iostream>
using namespace std;

int main()
{
	const double oun_ton_unces = 35273.92;
	double box_ounces, box_ton;
	

	cout << "Enter box weight: "; cin >> box_ounces;

	box_ton = (box_ounces / oun_ton_unces);  // output tone of one box
	

	cout << "\nWeight of box is: " << box_ton << " ton\n";
	cout << "In 1 ton is " << int(box_ton ) << " boxes";

	return 0;
}