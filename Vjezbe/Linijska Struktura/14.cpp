#include <iostream>
using namespace std;

int main() {
    int br1, br2;
    cout << "Unesite dva trocifrena broja!\n";
    cin >> br1 >> br2;
    int s1, s2, d1, d2, j1, j2;
    s1 = br1 / 100;
    s2 = br2 / 100;
    d1 = (br1 / 10) % 10;
    d2 = (br2 / 10) % 10;
    j1 = br1 % 10;
    j2 = br2 % 10;

    cout << "Suma stotica: " << s1 + s2 << '\n';
    cout << "Proizvod desetica: " << d1 * d2 << '\n';
    cout << "Razlika jedinica: " << j1 - j2;  
    return 0;
}
/*
Napisati program koji za dva ucitana trocifrena broja racuna i ispisuje sumu cifara stotica, proizvod desetica i razliku jedinica
*/