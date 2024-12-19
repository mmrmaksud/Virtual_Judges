#include <iostream>
using namespace std;
int main()
{
    int time;
    cin >> time;
    cout << time / 60 / 60 % 60 << ":" << time / 60 % 60 << ":" << time % 60 << endl;

    return 0;
}