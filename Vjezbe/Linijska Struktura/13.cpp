#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float d;
    cout << "Unestie dijagonalu d!\n";
    cin >> d;
    float a = (d * sqrt(2)) / 2;
    cout << "Povrsina kvadrata: " << a * a << '\n';
    cout << "Obim kvadrata: " << 4 * a; 
    return 0;
}
/*
Napisati program koji za ucitanu dijagonalu kvadrata racuna i ispisuje njegovu povrsinu i obim
*/