#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double S, P;
    int n, k;

    // 1. while
    S = 0;
    n = 1;

    while (n <= 10)
    {
        P = 1;
        k = 1;

        while (k <= n)
        {
            P *= sin(1. * (k + n));
            k++;
        }

        S += sqrt(1 + cos(1. * n) * cos(1. * n) + P);
        n++;
    }

    cout << S << endl;


    // 2. do...while
    S = 0;
    n = 1;

    do
    {
        P = 1;
        k = 1;

        do
        {
            P *= sin(1. * (k + n));
            k++;
        }
        while (k <= n);

        S += sqrt(1 + cos(1. * n) * cos(1. * n) + P);
        n++;
    }
    while (n <= 10);

    cout << S << endl;


    // 3. for з n++
    S = 0;

    for (n = 1; n <= 10; n++)
    {
        P = 1;

        for (k = 1; k <= n; k++)
        {
            P *= sin(1. * (k + n));
        }

        S += sqrt(1 + cos(1. * n) * cos(1. * n) + P);
    }

    cout << S << endl;


    // 4. for з n--
    S = 0;

    for (n = 10; n >= 1; n--)
    {
        P = 1;

        for (k = n; k >= 1; k--)
        {
            P *= sin(1. * (k + n));
        }

        S += sqrt(1 + cos(1. * n) * cos(1. * n) + P);
    }

    cout << S << endl;

    return 0;
}