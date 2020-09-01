#include<iostream>
using namespace std;
int main()
{
	float x,y;
	cout << "Enter point coordinates x y: ";
	cin >> x >> y;
	if (x == 0 && y == 0) { cout << "coordinate origin:"; }

	else if (x == 0) { cout << "OY"; }
		
	else if (y == 0) { cout << "OX"; }
			
	else if (x >= 0 && y >= 0) { cout << "1 fourth:"; }
				
	else if (x <= 0 && y >= 0) { cout << "2 fourth:"; }
					
	else if (x <= 0 && y <= 0) { cout << "3 fourth:"; }
						
	else if (x >= 0 && y <= 0) { cout << "4 fourth:"; }

	return 0;
}