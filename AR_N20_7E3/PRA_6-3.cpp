#include <iostream>
using namespace std;
//#define N 6
void create_lot(int stones[], int const N) //создание массива веса камней
{
    cout <<"Their weight:";
    for (int i = 0; i < N; i++) { stones[i] = rand() % 20; cout <<" "<< stones[i]; }
     
}

void arrange_lot(int stones[], int first, int last) //сортировка по убыванию
{
    int mid, count;
    int i = first, j = last;
    mid = stones[(i + j) / 2];//вычисление опорного элемента;
    do
    {
        while (stones[i] > mid) i++;
        while (stones[j] < mid) j--;
        if (i <= j)
        {
            count = stones[i];
            stones[i] = stones[j];
            stones[j] = count;
            i++;
            j--;
        }
    } while (i < j);
    if (first < j)arrange_lot(stones, first, j); 
    if (i < last) arrange_lot(stones, i, last);
    
}

void arrange_bags(int stones[], int const N) //создание двух куч, как можно более близких по весу
{
    int sum1 = 0, sum2 = 0, k1 = 0, k2 = 0, i;
    int* bag1 = new int[N-1]; int* bag2 = new int[N-1];

    for (i = 0; i < N; i++)
    {
        if (sum1 <= sum2)
        {
            bag1[k1] = stones[i];
            sum1 += stones[i];
            k1++;
        }
        else
        {
            bag2[k2] = stones[i];
            sum2 += stones[i];
            k2++;
        }
    }
    if (1.0 * sum1 / sum2 <= 2)
    {
        cout << "\n\nHeap 1: ";
        for (i = 0; i < k1; i++)
            cout << bag1[i] << "  ";
        cout << "\nWeight 1: " << sum1 << endl;
        cout << "\nHeap 2: ";
        for (i = 0; i < k2; i++)
            cout << bag2[i] << "  ";
        cout << "\nWeight 2: " << sum2 << endl;
    }
    else cout << " Weight varies more than 2 times\n";
    delete[]bag1;
    delete[]bag2;
}

int main()
{
    while (true)
    {
        int n;
        cout << "\nenter an array size of at least 2: ";
        cin >> n;cout<< endl;
        if (n > 2)
        {
        
        int const N = n;
        int first = 0, last = N - 1;
        int* lot = new int[N];
        create_lot(lot, N);
        arrange_lot(lot, first, last);
        arrange_bags(lot, N);
        cin.sync(); cin.get();
        delete[]lot;
        }
        else { cout << "Wrong input"; break; }
    }
    return 0;
}
