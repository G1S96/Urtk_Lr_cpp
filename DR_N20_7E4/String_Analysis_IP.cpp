#include <iostream>
#include <string> 
using namespace std;


string checkIP(string ipAddr)
{
	int part = 0, countNumInPart = 1, j = 0, countCharInPart = 0;

	for (int i = 0; i < ipAddr.size(); i++)
	{
		if (((int)ipAddr[i] > 57 || (int)ipAddr[i] < 48) && ipAddr[i] != '.') {
			return "Only digits and dots allowed";

		}
		if (ipAddr[i] == '.') {
			if (part > 255)
			{
				return "Too big a value of a part ";

			}
			part = 0;
			countNumInPart = 1;
			countCharInPart = 0;
			j++;
			if (j > 3) {
				return "Too many parts";

			}
		}
		else {
			part = part * countNumInPart + (((int)ipAddr[i]) % 48);
			countNumInPart = 10;
			countCharInPart++;
			if (countCharInPart > 3) {
				return "Too many characters in a part";

			}
		}
	}
	if (j < 3) {
		return"Incorrect parts count.";

	}
	return "Correct IP";

}

int main()
{
	cout << "Input IP address format 255.255.255.255" << endl;
	string ipAddr;

	getline(cin, ipAddr);
	while (1)
	{
		cout << checkIP(ipAddr) << "\n\n";
		getline(cin, ipAddr);

	}
	return 0;
}