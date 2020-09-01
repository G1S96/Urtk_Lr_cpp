#include <iostream>
using namespace std;

//совершенное число

int comm(int n)

{
    int sum = 0, i = 0;
    do
    {

        ++i;
        if (n % i == 0) sum += i;
        
        
    } while (i < n - 1);

    if (n == sum) return 1;

    else return 0;
}

//простое число

int simple(int n)
{
    
    int i = 2;
    do
    {
        if ((n % i) == 0) return 0;
        ++i;
    } while (i <= sqrt(n));
    return 1;
    //if (n == 2 || n == 3) return 1;

    //if ((n * n) % 24 == 1)return 1;
   
    //return 0;
      
}


int main()
{
    int n, sover = 0, prost = 0;
    do {
        cin >> n;
        if (n > 0) if (comm(n) == 1) sover++;
        if (n > 0) if (simple(n) == 1) prost++;
    } while (n != 0);
    cout << "Prime numbers - " << prost << endl;
    cout << "Perfect numbers - " << sover;
    return 0;
}
//#include <iostream>
//
//using namespace std;
//
////совершенное число
//int focus(int n)
//{
//    int sum = 0;
//    for (int i = n / 2; i; --i)
//        if (n % i == 0) sum += i;
//    if (n == sum)
//        return 1;
//    else
//        return 0;
//}
////простое число
//int simple(int n)
//{
//    for (int i = 2; i <= n / 2; i++) if ((n % i) == 0) return 0;
//    return 1;
//}
//
//
//int main()
//{
//    setlocale(LC_ALL, "Russian");
//    int n, sover = 0, prost = 0;
//    do {
//        cin >> n;
//        if (n > 0) if (focus(n) == 1) sover++;
//        if (n > 0) if (simple(n) == 1) prost++;
//    } while (n != 0);
//    cout << "ѕростых чисел - " << prost << endl;
//    cout << "—овершенных чисел - " << sover;
//    return 0;
//}