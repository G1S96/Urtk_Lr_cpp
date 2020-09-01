#include <iostream>
#include <string>
using namespace std;

int Count(string str, char ch){
	int res = 0;
	for (int i = 0; i < str.length(); i++){
		if (str[i] == ch) { res++; }}
	return res;}

int main()
{
	string input;
	cout << "Enter string: ";
	getline(cin, input);
	
	char ch;
	for (int i = 0, ch = 'a'; i < 26; ++i, ++ch){
		cout << char(ch) << " - " << Count(input, ch) << endl;}
}