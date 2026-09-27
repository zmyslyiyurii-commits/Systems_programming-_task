#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int i = 7;             
    const int n = 7;      
    double y[n];
    cout << fixed << setprecision(4);
    for (int k = 1; k <= n; k++) {
        double part1 = cos(2 * pow(k, 3)) + 2 * sin(k / 1.2 - 3.4);
        double part2 = 10.51 * cos(abs(3 * k));
        
        y[k - 1] = abs(part1) + part2; 
        
        cout << "y[" << k << "] = " << y[k - 1] << endl;
    }

    int count = 0;        
    int lastPos = 0;      
    int secondLastPos = 0;

    for (int k = 1; k <= n; k++) {
        if (y[k - 1] > 0) {
            count++;
            secondLastPos = lastPos; 
            lastPos = k;            
        }
    }

    cout << "\n=== REZULTAT ===" << endl;
    if (count >= 2) {
        cout << "Номер передостаннього додатного елемента: " << secondLastPos << endl;
        cout << "Його значення: " << y[secondLastPos - 1] << endl;
    } else {
        cout << "Повідомлення: У масиві менше двох додатних елементів!" << endl;
    }

    return 0;
}

