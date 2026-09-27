#include <iostream>
#include <cmath>
using namespace std;

double f12(double x) {
    return (pow(cos(x), 3) / 2.1) + (pow(cos(x), 2) / 1.1) - (8.3 * sin(3 * x + 1));
}

double f13(double x) {
    return (pow(sin(x), 2) * pow(cos(x), 3) - sin(x) + 5.2);
}

int main() {
    int i = 7;           
    double a = 0.0;     
    double b = 1.0;      
    for (int k = i; k <= i + 5; k++) {
        a += f12(k);
    }
    for (int k = i; k <= i + 8; k++) {
        b *= f13(k);
    }
    double z = pow(a, b);
    cout << "i = " << i << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "z = " << z << endl;

    return 0;
}

