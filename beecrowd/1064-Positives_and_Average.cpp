#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float array[6], sum = 0;
    int count = 0, i;
    for (i = 0; i < 6; i++)
    {
        cin >> array[i];
    }
    for (i = 0; i < 6; i++)
    {
        if (array[i] > 0)
        {
            sum = sum + array[i];
            count++;
        }
    }
    cout << setprecision(1) << fixed;
    cout << count << " valores positivos\n" << sum / count << endl;

    return 0;
}