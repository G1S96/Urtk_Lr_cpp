#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int Func_Num(int arr[], int size) {
	int max = 1, min = 1, sum = 0, start, end;

	for (int i = 0; i < size; i++)
	{
		cout << arr[i] << " ";
	}
	for (int i = 0; i < size; i++) {
		if (arr[i] > arr[max])
		{
			max = i;
		}

		else if (arr[i] < arr[min])
		{
			min = i;
		}
	}	cout << "\n";
	cout << "max = " << arr[max] << endl;
	cout << "min = " << arr[min] << endl;

	if (max > min)
	{
		start = max;

	}
	else {
		end = min;
	}
	if (max > min) {
		end = min;
	}
	else {
		start = max;
	}

	for (int i = start + 1; i < end; i++) {
		if (arr[i] > 0)
		{
			sum += 1;
		}
	}cout << "sum = " << sum << endl;
	return 0;
}


int main()
{

	const int size = 10;

	int arr1[size];
	srand(time(NULL));
	for (int i = 0; i < size; i++) {
		arr1[i] = rand() % 100 - 10;
	}
	cout << "arr_one" << "\n" << endl;
	Func_Num(arr1, size);
	cout << "__________" << endl;

	cout << "arr_two" << "\n" << endl;
	int arr_2[size] = { -20,4,3,6,2,20,6,8,5,9 };
	Func_Num(arr_2, size);
	cout << "__________" << endl;

	cout << "arr_three" << "\n" << endl;
	int arr_3[size] = { 4,3,5,6,20,7,8,9,10,2 };
	Func_Num(arr_3, size);
	cout << "__________" << endl;

	cout << "arr_four" << "\n" << endl;
	int arr_4[size] = { 0,1,-9,3,0,5,6,7,8,9 };
	Func_Num(arr_4, size);
	cout << "__________" << endl;

	cout << "arr_five" << "\n" << endl;
	int arr_5[size] = { 2,1,0,-1,-10,16,3,4,5,6 };
	Func_Num(arr_5, size);
	cout << "__________" << endl;

	cout << "arr_six" << "\n" << endl;
	int arr_6[size] = { -2,60,2,4,5,-10,6,8,9,-100 };
	Func_Num(arr_6, size);
	cout << "__________" << endl;

	cout << "arr_seven" << "\n" << endl;
	int arr_7[size] = { 8,7,5,4,32,-23,-6,-8,-9,-10 };
	Func_Num(arr_7, size);

	return 0;
}

