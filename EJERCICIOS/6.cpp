//Ejercicio 3.2
#include <iostream>
using namespace std;

void funcion() {
    static int contador = 0;
    contador++;
    cout << "Valor de la variable estatica: " << contador << endl;
}

int main() {
    funcion();
    funcion();
    funcion();
    return 0;
}