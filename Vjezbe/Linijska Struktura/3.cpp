#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Unesite stranice a i b!\n";
    cin >> a >> b;

    cout << "Povrsina pravougaonika: " << a * b << '\n';
    cout << "Obim pravougaonika: " << 2 * (a + b);
    return 0;
}
/*
Napisati program koji za ucitane stranice pravougaonika ispisuje povrsinu i obim.
*/