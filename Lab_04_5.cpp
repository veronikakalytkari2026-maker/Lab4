#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
    double x, y, a, b, R, M;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "R = "; cin >> R;

    srand((unsigned)time(NULL));

    // 1 спосіб
    for (int i = 0; i < 10; i++)
    {
        cout << "x = "; cin >> x;
        cout << "y = "; cin >> y;

        if ((x >= 0 && y >= 0 && x <= a && y <= b &&
            x*x + y*y >= R*R) ||
            (x <= 0 && y <= 0 && x >= -a && y >= -b &&
            x*x + y*y >= R*R))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    cout << endl << fixed;

    // знаходимо max(a, b, R)
    M = a;
    if (b > M)
        M = b;
    if (R > M)
        M = R;

    // 2 спосіб
    for (int i = 0; i < 10; i++)
    {
        x = 2.*M*rand()/RAND_MAX - M;
        y = 2.*M*rand()/RAND_MAX - M;

        if ((x >= 0 && y >= 0 && x <= a && y <= b &&
            x*x + y*y >= R*R) ||
            (x <= 0 && y <= 0 && x >= -a && y >= -b &&
            x*x + y*y >= R*R))
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " "
                 << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << " "
                 << setw(8) << setprecision(4) << y << " "
                 << "no" << endl;
    }

    return 0;
}