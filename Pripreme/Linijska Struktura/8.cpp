#include <iostream>
using namespace std;

int main() {
    int dvocifreni1, dvocifreni2;
    cout << "Unesite dva dvocifrena broja!\n";
    cin >> dvocifreni1, dvocifreni2;
    int d1 = dvocifreni1 / 10;
    int d2 = dvocifreni2 / 10;
    int j1 = dvocifreni1 % 10;
    int j2 = dvocifreni2 % 10;
    cout << "Suma desetica: " << d1 + d2 << '\n';
    cout << "Proizvod jedinica: " << j1 * j2;
    return 0;
}
/*
Napisati program koji ucitava dva dvocifrena broja i ispisuje sumu desetica te proizvod jedinica ta dva broja
*/