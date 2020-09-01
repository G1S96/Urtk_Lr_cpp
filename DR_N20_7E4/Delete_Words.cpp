#include <vector>
#include <string>
#include <iostream>
using namespace std;

vector<string> Split(string str) {
    vector<std::string> ptr;
    string buf = "";
    for (int i = 0; i < str.size(); i++) {
        if (!isalpha(str[i])) {
            ptr.push_back(buf);
            buf = "";
        }
        else {
            buf += str[i];
        }
    }
    if (buf != "")
        ptr.push_back(buf);
    return ptr;
}
bool StrCompare(string str1, string str2) {
    char c;
    int cou = 0;
    while (str1[cou]) {
        c = str1[cou];
        str1[cou] = toupper(c);
        cou++;
    }
    c = '\0';
    cou = 0;
    while (str2[cou]) {
        c = str2[cou];
        str2[cou] = toupper(c);
        cou++;
    }
    return (str2 == str1);
}
int main()
{
    vector<std::string> stopW, sentW;
    string stop_words;
    getline(cin, stop_words);
    string sent;
    getline(cin, sent);
    stopW = Split(stop_words);
    sentW = Split(sent);
    for (int i = 0; i < stopW.size(); ++i) {
        for (int j = 0; j < sentW.size(); ++j) {
            if (StrCompare(stopW[i], sentW[j])) {
                if (j == 0)
                    sent.erase(sent.find(sentW[j] + " "), sentW[j].size() + 1);
                else
                    sent.erase(sent.find(" " + sentW[j] + " "), sentW[j].size() + 1);
            }
        }
    }
        cout << sent << "\n";
}