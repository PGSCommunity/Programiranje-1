#include <iostream>
using namespace std;

int main() {
    const float radius = 6370;
    const float pi = 3.14;
    float kilometar, brzina;
    cout << "Unesite kilometre i brzinu!\n";
    cin >> kilometar >> brzina;
    float obim = 2 * pi * (radius - kilometar);
    cout << "Avioc je obletjeti zemlju za " << obim / brzina << " sati.";
    return 0;
}
/*
Radius zemlje je 6370km, za koje vrijeme ce avion obletjeti zemlju ako leti na visi od n kilometara, brzinom V
*/