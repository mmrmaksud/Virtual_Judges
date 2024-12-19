#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s, f, m, l;
    cin >> s >> f >> m;
    if (s == "vertebrado")
    {
        if (f == "ave")
        {
            if (m == "carnivoro")
            {
                cout << "aguia" << endl;
            }
            else if (m == "onivoro")
            {
                cout << "pomba" << endl;
            }
        }
        else if (f == "mamifero")
        {
            if (m == "onivoro")
            {
                cout << "homem" << endl;
            }
            else if (m == "herbivoro")
            {
                cout << "vaca" << endl;
            }
        }
    }
    else if (s == "invertebrado")
    {
        if (f == "inseto")
        {
            if (m == "hematofago")
            {
                cout << "pulga" << endl;
            }
            else if (m == "herbivoro")
            {
                cout << "lagarta" << endl;
            }
        }
        else if (f == "anelideo")
        {
            if (m == "hematofago")
            {
                cout << "sanguessuga" << endl;
            }
            else if (m == "onivoro")
            {
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}