#include <iostream>
using namespace std;

int main() {
    float m, v, h;
    const float g = 9.81;
    cout << "Tijelo ima " << m * g * h << "J kineticke energije, " << (m * v * v) / 2 << " potencijalne energije sto je ukupna energije od " << ((m * g * h) + ((m * v * v) / 2)) << "J."; 
    return 0;
}
/*
Napisati program koji za tijelo mase (m) oada visine (h) metara brzinom V. Kolika je ukupna energija tijela?
*/