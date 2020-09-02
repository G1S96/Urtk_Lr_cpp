#include <iostream>
using namespace std;

void func(int arr[], const int size)
{
	for (int i = 0; i < size; i++) { arr[i] = rand() % 100; }
	for (int i = 0; i < size; i++) { cout << " " << arr[i]; }
	cout << "\n";
}

void Printarr(int arr[], const int size, int shift, int dire)
{
	int b;

	if (dire > 0)
	{
		int n = shift;
		while (n != 0) {
			int temp = arr[size - 1];
			for (int i = size - 1; i > 0; i--) {
				int tmp = arr[i - 1];
				arr[i] = tmp;
			}
			arr[0] = temp;
			n--;
		}
	}
	else if (dire < 0)
	{
		int n = -(shift);
		while (n != 0) {
			int temp = arr[0];
			for (int i = 0; i < size - 1; i++) {
				int tmp = arr[i + 1];
				arr[i] = tmp;
			}
			arr[size - 1] = temp;
			n++;
		}
	}
	for (int i = 0; i < size; i++) { cout << " " << arr[i]; }
}


int main()
{
	const int size = 10;
	int massiv[size];
	int shift, direction;

	while (true)
	{
		cout << endl;
		do {
			cout << "Enter number 1 step right or -1 step left: ";
			cin >> direction;
		} while (direction < -1 || direction > 1);
		
		do {
			cout << "Enter cyclic shift: ";
			cin >> shift;
		} while (shift <= 0);
		cout << endl;
		func(massiv, size);
		Printarr(massiv, size, shift, direction);

		cout << endl;
	}
	return 0;
}