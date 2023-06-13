#include <iostream>
using namespace std;

int main() {
    int br;
    cout << "Unesite cetverocifreni broj!\n";
    cin >> br;
    cout << "Reciprocna vrijednost proizvoda cifara unesenog cetverocifrenog broja: " << (float)(1 / ((br / 1000) * ((br / 100) % 10) * ((br / 10) % 10) * (br % 10))); 
    return 0;
}
/*
Ucitati cetverocifreni broj i ispisati reciprocnu vrijednost proizvoda cifara unesenog broja
*/