#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
    double A, B, C, d, R1, R2;
    cin >> A >> B >> C;
    d = ((B * B) - 4 * A * C);
    R1 = (-B + sqrt((B * B) - 4 * A * C)) / (2 * A);
    R2 = (-B - sqrt((B * B) - 4 * A * C)) / (2 * A);
    if (d < 0 || A == 0)
        cout << "Impossivel calcular" << endl;
    else
    {
        cout << fixed << setprecision(5);
        cout << "R1 = " << R1 << endl;
        cout << "R2 = " << R2 << endl;
    }

    return 0;
}