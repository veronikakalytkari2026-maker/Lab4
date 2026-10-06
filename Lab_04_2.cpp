#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, xp, xk, dx, y;

    cout << "xp = ";
    cin >> xp;

    cout << "xk = ";
    cin >> xk;

    cout << "dx = ";
    cin >> dx;

    cout << fixed;

    cout << "---------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
         << setw(10) << "y" << " |" << endl;
    cout << "---------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        if (x < -3.5)
            y = 4.95 * x * x + 4 + 1. / (x * x);
        else
        if (-3.5 <= x && x < 1)
            y = 4.95 * x * x + tan((3.5 + x) / 5);
        else
        if (x >= 1)
            y = 4.95 * x * x + sin(3 * x) - cos(x);

        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(5) << y
             << " |" << endl;

        x += dx;
    }

    cout << "---------------------------" << endl;

    return 0;
}