#include <iostream>
using namespace std;

int main() {
    int x, y(0);
    cout << "Unesite broj x!\n";
    cin >> x;
    y = x - 6 + (x * x - 3) / 4;
    cout << "Vrijednost y: " << y;
    return 0;
}
/*
Na osnovu ucitane vrijednosti x izracunati vrijednost y
(y = x - 6 + (x^2 - 3) / 4);
*/