//Ejercicio 2.2
#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Ingrese un numero: ";
    cin >> num;
    bool esPar = (num % 2 == 0);
    bool esPositivo = (num > 0);
    if (esPar && esPositivo) {
        cout << "El numero es par y positivo" << endl;
    } else if (esPar || esPositivo) {
        cout << "El numero es par o positivo (o ambos)" << endl;
    } else {
        cout << "El numero no es par ni positivo" << endl;
    }
    return 0;
}