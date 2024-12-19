#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int h, L;
    cin >> h >> L;
    cout << fixed << setprecision(3);
    cout << (float)L / 12 * h << endl;

    return 0;
}