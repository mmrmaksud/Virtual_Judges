#include <iostream>
using namespace std;
int main()
{
    int sh, sm, eh, em;
    cin >> sh >> sm >> eh >> em;
    if (em > sm)
    {
        em -= sm;
        if (eh < sh)
        {
            eh += 24;
            eh -= sh;
        }
        else
            eh -= sh;
        cout << "O JOGO DUROU " << eh << " HORA(S) E " << em << " MINUTO(S)" << endl;
    }
    else if (eh == sh && em == sm)
    {
        cout << "O JOGO DUROU " << 24 << " HORA(S) E " << 0 << " MINUTO(S)" << endl;
    }
    else if (em < sm)
    {
        em += 60;
        eh -= 1;
        em -= sm;
        if (eh < sh)
        {
            eh += 24;
            eh -= sh;
        }
        else
            eh -= sh;
        cout << "O JOGO DUROU " << eh << " HORA(S) E " << em << " MINUTO(S)" << endl;
    }

    return 0;
}