#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N, i;
    double P;

    cout << "N = ";
    cin >> N;

    // 1. Цикл while
    P = 1;
    i = N;

    while (i <= 16)
    {
        P *= 1. * i * N / (i * i + N * N);
        i++;
    }

    cout << "while:    " << P << endl;


    // 2. Цикл do...while
    P = 1;
    i = N;

    do
    {
        P *= 1. * i * N / (i * i + N * N);
        i++;
    }
    while (i <= 16);

    cout << "do...while: " << P << endl;


    // 3. Цикл for з i++
    P = 1;

    for (i = N; i <= 16; i++)
    {
        P *= 1. * i * N / (i * i + N * N);
    }

    cout << "for (i++): " << P << endl;


    // 4. Цикл for з i--
    P = 1;

    for (i = 16; i >= N; i--)
    {
        P *= 1. * i * N / (i * i + N * N);
    }

    cout << "for (i--): " << P << endl;

    return 0;
}