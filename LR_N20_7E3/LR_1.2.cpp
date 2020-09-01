#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	float j;
	int i, k,f;

	cout <<"Введите кол - во километров в 1 сантиметре:";
	cin >> i;

	cout << "\nВведите Расстояние между точками: ";
	cin >> j;

	cout << "\nВведите Скорость автомобиля(км/ч): ";
	cin >> k;

	f = int(i * j) / k;

	cout << "\nРасстояние между населенные пункты " << j * i << "км" << endl;
	cout << "\nВремя движения автомобиля: " << f << "ч." << round(i * j / k * 100 - f*100 ) << "мин.,при скорости движения автомобиля  " << k << "(км/ч)" << endl;


	return 0;
}