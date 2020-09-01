#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "Enter count: ";
	int c;
	cin >> c;
	if (c < 1) { cout << "errore"; exit(0); }
	double fin = 0;
	int** g = new int* [c];
	for (int i = 0; i < c; i++)
	{
		int n;
		cout << "Enter the number of marks: ";
		cin >> n;
		if (n < 1 || n>5) { cout << "errore"; exit(0); }
		g[i] = new int[n + 1];
		g[i][0] = n;
		for (int j = 1; j <= n; j++){cin >> g[i][j];}
	}

	cout << "\n";

	for (int i = 0; i < c; i++)
	{
		double finalGrad = 0;
		string grades;
		for (int j = 1; j <= g[i][0]; j++)
		{
			finalGrad += g[i][j];
			grades += to_string(g[i][j]) + " ";
		}
		finalGrad = finalGrad / g[i][0];

		cout.precision(2); cout.setf(ios::fixed);
		cout << "Course: " << i + 1 << " final " << finalGrad << " grades: " << grades.c_str() << endl;
		fin += finalGrad;
	}
	cout << "Dverall final " << fin / c;

	return 0;
}
