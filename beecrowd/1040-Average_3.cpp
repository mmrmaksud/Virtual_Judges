#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    float n1, n2, n3, n4, sum, avg;
    cin >> n1 >> n2 >> n3 >> n4;
    sum = n1*2 + n2*3 + n3*4 + n4*1;
    avg = sum / 10;
    cout << fixed << setprecision(1);
    cout << "Media: " << avg << endl;
    if (avg >= 7)
        cout << "Aluno aprovado." << endl;
    if (avg < 5)
        cout << "Aluno reprovado." << endl;
    if (avg >= 5 && avg <= 6.9)
        cout << "Aluno em exame." << endl;
    if (avg >= 5 && avg <= 6.9)
    {
        double n5;
        cin >> n5;
        cout << "Nota do exame: " << n5 << endl;
        if (n5 >= 5)
            cout << "Aluno aprovado." << endl;
        else if (n5 <= 4.9)
            cout << "Aluno reprovado." << endl;
        cout << "Media final: " << (avg + n5) / 2 << endl;
    }

    return 0;
}