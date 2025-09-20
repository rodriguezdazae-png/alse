
//Ejercicio 5.1
#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int* ptr = &x;
    *ptr = 20;
    cout << "Nuevo valor de la variable: " << x << endl;
    return 0;
}