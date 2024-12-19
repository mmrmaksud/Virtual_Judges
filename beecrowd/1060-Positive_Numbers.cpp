#include <iostream>
using namespace std;
int main()
{
    float array[6];
    int count = 0, i;
    for (i = 0; i < 6; i++)
    {
        cin >> array[i];
    }
    for (i = 0; i < 6; i++)
    {
        if (array[i] > 0)
        {
            count++;
        }
    }
    cout << count << " valores positivos" << endl;

    return 0;
}