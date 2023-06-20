#include <iostream>
using namespace std;

int main() {
    int dvocifreni;
    cout << "Unesite dvocifreni broj!\n";
    cin >> dvocifreni;
    int d = dvocifreni / 10;
    int j = dvocifreni % 10;
    cout << "Proizvod cifara " << d + j << '\n';
    cout << "Kolicnik cifara " << d / j;
    return 0;
}
/*
Napisati program koji ucitava dvocifreni broj i ispisuje proizvod cifara i kolicnik prve i druge cifre
*/