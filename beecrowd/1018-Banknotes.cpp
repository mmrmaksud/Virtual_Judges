#include <iostream>
using namespace std;
int main()
{
    int n, aux;
    cin >> n;
    cout << n << endl;
    cout << n / 100 << " nota(s) de R$ 100,00" << endl;
    aux = n % 100;
    cout << aux / 50 << " nota(s) de R$ 50,00" << endl;
    aux = (aux % 50);
    cout << aux / 20 << " nota(s) de R$ 20,00" << endl;
    aux = (aux % 20);
    cout << aux / 10 << " nota(s) de R$ 10,00" << endl;
    aux = (aux % 10);
    cout << aux / 5 << " nota(s) de R$ 5,00" << endl;
    aux = (aux % 5);
    cout << aux / 2 << " nota(s) de R$ 2,00" << endl;
    aux = (aux % 2);
    cout << aux / 1 << " nota(s) de R$ 1,00" << endl;
    aux = (aux % 1);

    return 0;
}