#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x1, x2, y1, y2;
    cout << "Unesite koordinate tacke A!\n";
    cin >> x1 >> y1;
    cout << "Unesite koordinate tacke B!\n";
    cin >> x2 >> y2;
    cout << "Njihova udaljenost: " << sqrt((pow(x2 - x1, 2) + pow(y2 - y2, 2)));
    return 0;
}
/*
Treba unijeti koordinate tačaka A i B, pa izračunati njihovu udaljenost u koordinatnom sistemu. 
*/