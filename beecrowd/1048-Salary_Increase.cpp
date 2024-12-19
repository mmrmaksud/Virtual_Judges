#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double salary, nSalary, sum = 0;
    cin >> salary;
    if (salary >= 0 && salary <= 400.00)
    {
        nSalary = salary / 100 * 15;
        sum = salary + nSalary;
        cout << setprecision(2) << fixed;
        cout << "Novo salario: " << sum << "\nReajuste ganho: " << nSalary << "\nEm percentual: 15 %" << endl;
    }
    else if (salary >= 400.01 && salary <= 800.00)
    {
        nSalary = salary / 100 * 12;
        sum = salary + nSalary;
        cout << setprecision(2) << fixed;
        cout << "Novo salario: " << sum << "\nReajuste ganho: " << nSalary << "\nEm percentual: 12 %" << endl;
    }
    else if (salary >= 800.01 && salary <= 1200.00)
    {
        nSalary = salary / 100 * 10;
        sum = salary + nSalary;
        cout << setprecision(2) << fixed;
        cout << "Novo salario: " << sum << "\nReajuste ganho: " << nSalary << "\nEm percentual: 10 %" << endl;
    }
    else if (salary >= 1200.01 && salary <= 2000.00)
    {
        nSalary = salary / 100 * 7;
        sum = salary + nSalary;
        cout << setprecision(2) << fixed;
        cout << "Novo salario: " << sum << "\nReajuste ganho: " << nSalary << "\nEm percentual: 7 %" << endl;
    }
    else if (salary >= 0)
    {
        nSalary = salary / 100 * 4;
        sum = salary + nSalary;
        cout << setprecision(2) << fixed;
        cout << "Novo salario: " << sum << "\nReajuste ganho: " << nSalary << "\nEm percentual: 4 %" << endl;
    }

    return 0;
}