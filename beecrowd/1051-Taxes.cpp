#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double salary;
    cin >> salary;
    cout << setprecision(2) << fixed;
    if (salary >= 0 && salary <= 2000.00)
        cout << "Isento" << endl;
    else if (salary >= 2000.01 && salary <= 3000.00)
        cout << "R$ " << (salary - 2000.00) * 0.08 << endl;
    else if (salary >= 3000.01 && salary <= 4500.00)
        cout << "R$ " << ((salary - 3000) * 0.18 + (1000 * 0.08)) << endl;
    else if (salary >= 4500.01)
        cout << "R$ " << ((salary - 4500) * 0.28 + (1500 * 0.18) + (1000 * 0.08)) << endl;

    return 0;
}