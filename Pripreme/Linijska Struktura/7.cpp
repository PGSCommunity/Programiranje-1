#include <iostream>
using namespace std;

int main() {
    float a, P;
    cout << "Unesite stranicu a i povrsinu!\n";
    cin >> a >> P;
    cout << "Visina trougla iznosi: " << (2 * P) / a;
    return 0;
}
/*
Napisati program za izracun visine trougla ako je poznata povrsina i stranica trougla (P = a * h / 2)
*/