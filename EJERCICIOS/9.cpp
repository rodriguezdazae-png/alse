//Ejercicio 4.2
#include <iostream>
using namespace std;

int main() {
    int arr[10] = {3, 7, 1, 9, 5, 2, 8, 6, 4, 10};
    int num;
    cout << "Ingrese un numero a buscar: ";
    cin >> num;
    bool encontrado = false;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == num) {
            encontrado = true;
            break;
        }
    }
    if (encontrado)
        cout << "El numero esta en el arreglo" << endl;
    else
        cout << "El numero no esta en el arreglo" << endl;
    return 0;
}