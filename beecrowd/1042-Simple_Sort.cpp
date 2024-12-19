#include <iostream>
using namespace std;
int main()
{
    int arr[3], a, b, c, i, j, temp;
    cin >> a >> b >> c;
    arr[0] = a;
    arr[1] = b;
    arr[2] = c;
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        cout << arr[i] << endl;
    }
    cout<<"\n";
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;

    return 0;
}