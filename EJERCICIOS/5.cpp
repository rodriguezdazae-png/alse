Ejercicio 3.1
#include <iostream>
using namespace std;

void funcion() {
    int local = 10;
    cout << "Variable local dentro de la funcion: " << local << endl;
}

int main() {
    funcion();
    return 0;
}