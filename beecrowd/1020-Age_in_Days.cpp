#include <iostream>
using namespace std;
int main()
{
    int day;
    cin >> day;
    cout << day / 365 << " ano(s)" << "\n" << day % 365 / 30 << " mes(es)" << "\n" << day % 365 % 30 << " dia(s)" << endl;

    return 0;
}