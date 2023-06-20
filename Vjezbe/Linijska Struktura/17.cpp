#include <iostream>
using namespace std;

int main() {
    int cetverocifreni;
    cout << "Unesite cetverocifreni broj!\n";
    cin >> cetverocifreni;
    cout << "Obrnut redosljed cifara ucitanog broja:\n";
    cout << cetverocifreni / 1000 << (cetverocifreni / 100) % 10 << (cetverocifreni / 10 % 10) << cetverocifreni % 10;
    return 0;
}
/*
Napisati program koji na osnovu ucitanog cetverocifrenog broja formira i ispisuje novi broj takav da je raspored cifara obrnut
u odnosu na raspored cifara ucitanog broja (unos 2378, ispis 8732)
*/