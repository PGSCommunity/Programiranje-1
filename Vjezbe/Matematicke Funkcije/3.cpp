#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float a,b;
    cout << "Unesi brzinu rijeke (m/s):\n";
    cin >> a;
    
    cout << "Unesi brzinu camca (m/s):\n";
    cin >> b;

    float c = sqrt(pow(a,2) + pow(b,2));

    float ugao = atan(a / b);
    ugao = ugao * 180 / 3.14;

    cout << "Camac se u odnosu na obalu krece " << c << "m/s\n";
    cout << "Camac je skrenuo sa svoje putanje za " << ugao << " stepeni.";
    return 0;
}
/*
Napisati program koji omogućava izračun brzine čamca u odnosu na obalu i ugla pod kojim će čamac skrenuti sa svoje putanje. 
Za oba izračuna koristite Pitagorinu teoremu i trigonometrijsku funkciju.
*/