#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float d, a;
    const float pi = 3.14;
    cout << "Unesite ugao alfa i katetu a!\n";
    cin >> d >> a;
    float alfa = d * pi / 180;
    cout << "Hipotenuza c iznosi: " << a / sin(alfa);
    return 0;
}
/*
U pravouglom trouglu poznat je ugao alfa (izražen u stepenima) i kateta a (u cm). Treba izračunati vrijednost hipotenuze c. 
*/