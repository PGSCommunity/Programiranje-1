#include <iostream>
using namespace std;

int main() {
    int r;
    const double PI = 3.14;
    cout << "Unesite poluprecnik kruga!\n";
    cin >> r;
    cout << "Povrsina: " << r * r * PI << '\n';
    cout << "Obim: " << 2 * r * PI;
    return 0;
}
/*
Napisati program koji za uneseni poluprecnik racuna i ispisuje povrsinu i obim kruga
*/