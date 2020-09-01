#include <iostream>
using namespace std;
pair <int, int> propity = { -1, 0 };bool a[200][200];
int main(){
    string s;cin >> s;
    int x = 100, y = 100, ans = 0;
    a[x][y] = 1;
    for (auto sim : s){
        if (sim == 'S')
            ans++;
        else if (sim == 'R'){
            if (propity == make_pair(-1, 0))propity = { 0, 1 };
            else if (propity == make_pair(0, 1))propity = { 1, 0 };
            else if (propity == make_pair(1, 0))propity = { 0, -1 };
            else if (propity == make_pair(0, -1))propity = { -1, 0 };
            continue;}
        else if (sim == 'L'){
            if (propity == make_pair(-1, 0))propity = { 0, -1 };
            else if (propity == make_pair(0, -1))propity = { 1, 0 };
            else if (propity == make_pair(1, 0))propity = { 0, 1 };
            else if (propity == make_pair(0, 1))propity = { -1, 0 };
            continue;}
        x += propity.first;
        y += propity.second;
        if (a[x][y]){cout << ans;return 0;}
        else
            a[x][y] = 1;}
    cout << -1;
    return 0;
}

//#include <iostream> 
//using namespace std;
//char s[201];
//int a[101][101] = { 0 };
//int n = 0, m, k, i = 0, j, x = 50, y = 50, c = 0;
//int main() {
//    cin.getline(s, 201);
//    a[x][y] = 1;
//    while (s[i] != '\n') {
//        if (s[i] == 'L')n = (n + 1) % 4;
//        if (s[i] == 'R')n = (n + 3) % 4;
//        if (s[i] == 'S') {
//            c++;
//            if (n == 0) x++;
//            if (n == 1) y++;
//            if (n == 2) x--;
//            if (n == 3) y--;
//            if (a[x][y]) {
//                cout << c;
//                return 0;
//            }
//            a[x][y] = 1;
//        }
//        i++;
//    }
//    cout << "-1";
//    return 0;
//}