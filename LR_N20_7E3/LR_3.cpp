#include<iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;

int main() 
{
	int choice,choice1;
	float R,L,S,D;
	setlocale(LC_ALL, "Russian");

	cout << "������� ����� ���������� : "; cin >> L;
	


	cout << "\n�������� ����������" << endl;

	cout << "\n������� �����.  \n 1 - ��������� �������. \n 2 � ������.  \n 3 � �������. "<<endl;
	cout << "�� �������:"; cin >> choice;

	
	R = L / (2 * M_PI); R=round(R * 100) / 100; // ���������� �������
	S = M_PI * (R * R); S = round(S * 100) / 100;//���������� �������
	D = 2 * R; D = round(D * 100) / 100;//���������� ��������

	if (choice > 3 || choice < 1) { cout << "��� ������ �������� ������"<< '\n';}
	else if (choice == 1) { cout << "������� �����: " << S << '\n'; }
	else if (choice == 2) { cout << "������: " << R <<'\n';}
	else if (choice == 3) { cout << "�������: " << D << '\n'; }




	cout << "\n���������� ������" << endl;

	cout << "\n������� �����.  \n 1 - ��������� �������. \n 2 � ������.  \n 3 � �������. " << endl;
	cout << "�� �������:"; cin >> choice1;


	switch (choice1)
	{
	case (1): cout << "������� �����: " << S; break;
	case (2): cout << "������: " << R; break;
	case (3):  cout << "�������: " << D; break;
	default:  cout << "��� ������ �������� ������"; break;
	}

	return 0;
}