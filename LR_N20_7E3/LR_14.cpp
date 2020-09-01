//#include <iostream>
//#include <cmath>
//using namespace std;
//
//int main()
//{   
//    setlocale(LC_ALL, "Russian");
//    string word;//= ".о моьтакжт к накатоледс ";
//    cin >> word;
//    int k = 0, counter = 0, size = 0, pair = 0;
//
//    while (word[counter] != '$') { counter++; }
//    size = sqrt(counter);
//    cout << size << ' ' << counter << endl;
//
//    char* arr = new char[counter];
//
//    char** ary = new char* [size];
//    for (int i = 0; i < size; i++) { ary[i] = new char[size]; }
//
//
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            ary[i][j] = word[k];
//            k++;
//        }
//    }
//
//
//    for (int i = 0; i < size; i++) {
//        for (int j = 0; j < size; j++) {
//            cout << ary[i][j] << "  ";
//        }
//        cout << endl;
//    }
//    cout << endl;
//
//    if (size % 2 == 0) { ++pair; }
//
//    int i = size / 2, j = size / 2 - pair, n = 0;
//
//    do {
//        n++;
//        for (int k = 0; k < n; k++)
//            cout << ary[i--][j] << ' ';
//
//        if (n == size)
//            break;
//        for (int k = 0; k < n; k++)
//            cout << ary[i][j++] << ' ';
//        n++;
//        for (int k = 0; k < n; k++)
//            cout << ary[i++][j] << ' ';
//        for (int k = 0; k < n; k++)
//            cout << ary[i][j--] << ' ';
//
//    } while (n);
//
//
//    for (int i = 0; i < size; i++) { delete[] ary[i]; }
//    delete[]arr;
//
//    return 0;
//}
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int size = 0, k = 0;
    string word;
    int counter = 1;
    do {
        ++counter;
        cin >> word;

    } while (word[counter] != '$');
    cout << endl << counter << endl;

    size = sqrt(counter);
    cout << size << ' ' << counter << endl;

    char* arr = new char[counter];

    char** ary = new char* [size];
    for (int i = 0; i < size; i++) { ary[i] = new char[size]; }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            ary[i][j] = word[k];
            k++;
        }
    }


    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << ary[i][j] << "  ";
        }
        cout << endl;
    }
    cout << endl;

    return 0;
}