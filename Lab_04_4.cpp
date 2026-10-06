#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    double x, xp, xk, dx, R, y;

    cout << "R = "; cin >> R;
    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "---------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
         << setw(10) << "y" << " |" << endl;
    cout << "---------------------------------" << endl;

    x = xp;

    while (x <= xk)
    {
        if (x < -8 - R)
            y = R;
        else
        if (x <= -8 + R)
            y = R - sqrt(R*R - (x + 8)*(x + 8));
        else
        if (x <= -4)
            y = R;
        else
        if (x <= 2)
            y = R + (-1 - R) * (x + 4) / 6;
        else
            y = x - 3;

        cout << "|" << setw(7) << setprecision(2) << x
             << " |" << setw(10) << setprecision(5) << y
             << " |" << endl;

        x += dx;
    }

    cout << "---------------------------------" << endl;

    return 0;
}