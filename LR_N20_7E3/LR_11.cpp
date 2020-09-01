#include <iostream>
#include <string>
using namespace std;

void main()
{
	int rows, max, min, cols;
	cout << "Enter the number of rows and columns: "; cin >> rows >> cols;
	if (rows || cols > 0) {
		cout << "\n";

		int** arr = new int* [rows];//c�������� ������� ����������
		for (int i = 0; i < rows; i++) { arr[i] = new int[cols]; }

		//���������� �������
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) { arr[i][j] = rand() % -9 + 10; }
		}

		//����� ������� 
		for (int i = 0; i < rows; i++) {
			for (int j = 0; j < cols; j++) { cout << " " << arr[i][j] << " "; }
			cout << "\n";
		}


		//���������� ������������� � ������������ ������� �������
		for (int j = 0; j < cols; j++)
		{
			cout << "\n\n" << j + 1 << " Column: \n";

			max = arr[0][j]; min = arr[0][j];

			for (int i = 1; i < rows; i++)
			{
				if (arr[i][j] > max) { max = arr[i][j]; }
				if (arr[i][j] < min) { min = arr[i][j]; }
			}

			cout << "max = [" << j << "]";

			for (int i = 1; i < rows; i++) { if (arr[i][j] == max) { cout << "[" << i << "]"; } }

			cout << "\nmin = [" << j << "]";

			for (int i = 1; i < rows; i++) { if (arr[i][j] == min) { cout << "[" << i << "]"; } }

		}

		for (int i = 0; i < rows; i++) { delete[] arr[i]; }
		delete[] arr;
	}
	else cout << "Invalid input";

}
