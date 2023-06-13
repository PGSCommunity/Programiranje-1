#include <iostream>
using namespace std;

int main() {
    int br;
    cout << "Unesite trocifreni broj!\n";
    cin >> br;
    cout << "Suma cifara ucitanog trocifrenog broja: " << ((br / 100) + ((br/10) % 10) + (br % 10));
    return 0;
}
/*
Napisati program koji ispisuje sumu cifara ucitanog trocifrenog broja
*/