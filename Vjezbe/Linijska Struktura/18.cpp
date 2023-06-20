#include <iostream>
using namespace std;

int main() {
    int sati, minute;
    cout << "Unesite sate i minute!\n";
    cin >> sati >> minute;
    cout << "Vrijednost u sekundama: " << (sati * 3600) + (minute * 60); 
    return 0;
}
/*
Napisati program koji za ucitane sate i minute ispisuje vrijeme u sekundama
*/