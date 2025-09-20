//Ejercicio 7.2
#include <iostream>
using namespace std;

typedef int (*Operacion)(int, int);

int suma(int a, int b) { return a + b; }
int resta(int a, int b) { return a - b; }
int multiplicacion(int a, int b) { return a * b; }
int division(int a, int b) { return a / b; }

int main() {
    int x, y;
    cout << "Ingrese dos numeros: ";
    cin >> x >> y;

    Operacion op = suma;
    cout << "Suma: " << op(x, y) << endl;

    op = resta;
    cout << "Resta: " << op(x, y) << endl;

    op = multiplicacion;
    cout << "Multiplicacion: " << op(x, y) << endl;

    if (y != 0) {
        op = division;
        cout << "Division: " << op(x, y) << endl;
    }
    return 0;
}