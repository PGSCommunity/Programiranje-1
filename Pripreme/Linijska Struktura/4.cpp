#include <iostream>
using namespace std;

int main() {
    int trocifreni1, trocifreni2;
    cout << "Unesite dva trocifrena broja!\n";
    cin >> trocifreni1 >> trocifreni2;
    int d1 = (trocifreni1 / 10) % 10;
    int d2 = (trocifreni2 / 10) % 10;
    cout << "Razlika desetica: " << d1 - d2;
    return 0;
}
/*
Napisati program koji ucitava 2 trocifrena broja i ispisuje razliku desetica
*/