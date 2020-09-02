#include<iostream> 
#include<locale.h>
using namespace std;

int main(void) {


    int i, j, kill = 0,size,step;
    cout << "Enter person and step:";
    cin >> size >> step;
    if (size >= 500 && step >= 100) { cout << "Invalid input"; }
    else
    {
        int* iosif = new int[size + 1];
        for (int i = 1; i != size + 1; i++) { iosif[i] = i; }

        j = 0;
        for (i = 0; kill != size-1; i++) {
            if (iosif[i] > 0)
                j++;
            if (j == step) {
                iosif[i] = 0;
                j = 0;
                kill++;
            }
            if (i == size)
                i = -1;
        }

        for (i = 1; i < size+1; i++) { if (iosif[i] > 0)cout << "Ansver: " << iosif[i]; }
        delete[]iosif;

    }
    return 0;
}