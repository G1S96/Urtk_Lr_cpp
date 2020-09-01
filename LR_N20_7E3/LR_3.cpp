#include<iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() 
{
	int choice,choice1;
	float R,L,S,D;
	setlocale(LC_ALL, "Russian");

	cout << "Введите длину окружности : "; cin >> L;
	


	cout << "\nУсловным оператором" << endl;

	cout << "\nВведите цифру.  \n 1 - вычислить площадь. \n 2 – радиус.  \n 3 – диаметр. "<<endl;
	cout << "Вы выбрали:"; cin >> choice;

	
	R = L / (2 * M_PI); R=round(R * 100) / 100; // вычисление радиуса
	S = M_PI * (R * R); S = round(S * 100) / 100;//вычисление площади
	D = 2 * R; D = round(D * 100) / 100;//вычисление диаметра

	if (choice > 3 || choice < 1) { cout << "Нет такого варианта выбора"<< '\n';}
	else if (choice == 1) { cout << "Площадь круга: " << S << '\n'; }
	else if (choice == 2) { cout << "Радиус: " << R <<'\n';}
	else if (choice == 3) { cout << "Диаметр: " << D << '\n'; }




	cout << "\nОператором выбора" << endl;

	cout << "\nВведите цифру.  \n 1 - вычислить площадь. \n 2 – радиус.  \n 3 – диаметр. " << endl;
	cout << "Вы выбрали:"; cin >> choice1;


	switch (choice1)
	{
	case (1): cout << "Площадь круга: " << S; break;
	case (2): cout << "Радиус: " << R; break;
	case (3):  cout << "Диаметр: " << D; break;
	default:  cout << "Нет такого варианта выбора"; break;
	}

	return 0;
}