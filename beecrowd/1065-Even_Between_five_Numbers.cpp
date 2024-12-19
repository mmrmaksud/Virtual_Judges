#include <iostream>
using namespace std;
int main()
{
    int array[5], count = 0, i;
    for (i = 0; i < 5; i++)
    {
        cin >> array[i];
        if (array[i] % 2 == 0)
            count++;
    }
    cout << count << " valores pares" << endl;

    return 0;
}