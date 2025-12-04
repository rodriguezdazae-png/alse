//Ejercicio 8.1
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double P, r, A;
    int n, t;
    cout << "Ingrese el principal (P): ";
    cin >> P;
    cout << "Ingrese la tasa de interes anual (r en decimal): ";
    cin >> r;
    cout << "Ingrese el numero de veces que se aplica el interes al ano (n): ";
    cin >> n;
    cout << "Ingrese el numero de anos (t): ";
    cin >> t;
    A = P * pow(1 + r / n, n * t);
    cout << "El monto final es: " << A << endl;
    return 0;
}