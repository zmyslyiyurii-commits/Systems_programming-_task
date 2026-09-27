#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double f12(double x) {
    return (pow(cos(x), 3) / 2.1) + (pow(cos(x), 2) / 1.1) - (8.3 * sin(3 * x + 1));
}

int main() {
    int i = 7;             
    double a = 0.0;        
    double b = i;          
    double h = 0.1 * i;    
    double sumPositive = 0.0; 
    int countNegative = 0;    
    
    cout << fixed << setprecision(4);
    cout << "---------------------------------\n";
    cout << setw(12) << "x" << setw(15) << "y" << endl;
    cout << "---------------------------------\n";

    for (double x = a; x <= b + 1e-9; x += h) {
        double y = f12(x);
        cout << setw(12) << x << setw(15) << y << endl;

        if (y > 0) {
            sumPositive += y; 
        } else if (y < 0) {
            countNegative++;  
        }
    }
    cout << "---------------------------------\n\n";
    cout << "Сума додатних значень функції: " << sumPositive << endl;
    cout << "Кількість від'ємних значень: " << countNegative << endl;

    return 0;
}

// g++ task09.cpp -o task09.exe 
// ./task09.exe