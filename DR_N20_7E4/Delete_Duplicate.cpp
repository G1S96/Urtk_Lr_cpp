#include <string>
#include <iostream>
#include <cctype>
using namespace std;

void CheckDublicate(string val, string& sent) {
	string strToRem = val + " " + val;
	while (sent.find(strToRem + " ") != string::npos) {
		sent.replace(sent.find(strToRem), strToRem.size(), val);}}

int main()
{
	string sent;
	getline(cin, sent);
	string buf = "";
	for (int i = 0; i < sent.size(); i++) {
		if (isalpha(sent[i])) {
			buf += sent[i];

		}
		else {
			CheckDublicate(buf, sent);
			buf = "";

		}
	}
	cout << sent << "\n";
	return 0;
}