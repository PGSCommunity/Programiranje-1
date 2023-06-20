#include <iostream>
using namespace std;

int main() {
    int trocifreni;
    cout << "Unesite trocifreni broj!\n";
    cin >> trocifreni;
    int s = trocifreni / 100;
    int d = (trocifreni / 10) % 10;
    int j = trocifreni % 10;
    cout << "Aritmeticka sredina cifara iznosi: " << (s + d + j) / 3;
    return 0;
}
/*
Napisati program koji ucitava trocifreni broj i ispisuje aritmeticku sredinu cifara tog broja
*/