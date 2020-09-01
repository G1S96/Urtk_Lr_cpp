#include<iomanip>
#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	double xn, xk, dx, y;

	cout << "Enter step: ";
	cin >> dx;
	cout << "\nEnter start & end: ";
	cin >> xn >> xk;

	
	if (dx == 0) {
		cout << "Error:";
	}
    else
	{
    
    cout<< right << setw(10) <<"X"<< right << setw(10) <<"Y"<<endl;
	
	for (double xn; xn<=xk; xn+=dx)
	{
		if (-4 <= xn && xn <= 0) y =  ((-2 * xn) * 1/4);
	 
	    else if (0 <= xn && xn <= 2)  y = (2-sqrt(4 - (xn - 0) * (xn - 0)));
		
		else if (2 <= xn && xn <= 4)  y = (0 + sqrt(4-(xn - 2) * (xn - 2)));
	  
		else if (4 <= xn && xn <= 6)  y = (2 - (xn * 1 / 4) * 2);
	    
		cout << fixed;

	    cout << setw(10) << setprecision(2)<<xn <<setw(10) << setprecision(3)<<y<<endl;
	    
	}	
	}

	return 0;
}
