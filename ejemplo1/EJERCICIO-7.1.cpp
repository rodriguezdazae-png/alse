//Ejercicio 7.1
#include <iostream>
using namespace std;

void ejecutar(void (*callback)()) {
    callback();
}

void mensaje() {
    cout << "Hola desde el callback!" << endl;
}

int main() {
    ejecutar(mensaje);
    return 0;
}