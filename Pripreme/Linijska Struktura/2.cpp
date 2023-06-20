#include <iostream>
using namespace std;

int main() {
    float kelvin;
    const float celsius = -273.15;
    cout << "Unesite vrijednost u kelivinima!\n";
    cin >> kelvin;
    cout << "Vrijednost u celzijusima: " << kelvin + celsius;
    return 0;
}
/*
Napisati program za pretvaranje Kelvina u Celzijuse (1K = -272,15C)
*/