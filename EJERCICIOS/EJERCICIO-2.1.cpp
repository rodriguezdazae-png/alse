//Ejercicio 2.1
#include <iostream>
using namespace std;

int main() {
    int base, altura;
    cout << "Ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del rectangulo: ";
    cin >> altura;
    int area = base * altura;
    cout << "El area del rectangulo es: " << area << endl;
    return 0;
}