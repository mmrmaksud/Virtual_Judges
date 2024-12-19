#include <iostream>
using namespace std;
int main()
{
    int s, e, time = 0;
    cin >> s >> e;
    if (s < e)
    {
        time = e - s;
        cout << "O JOGO DUROU " << time << " HORA(S)" << endl;
    }
    else if (s > e)
    {
        time = 24 - (s - e);
        cout << "O JOGO DUROU " << time << " HORA(S)" << endl;
    }
    else if (s == e)
    {
        time = 24;
        cout << "O JOGO DUROU " << time << " HORA(S)" << endl;
    }

    return 0;
}