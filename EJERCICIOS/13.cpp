//Ejercicio 6.2
#include <iostream>
using namespace std;

void division(int a, int b, int& cociente, int& residuo) {
    cociente = a / b;
    residuo = a % b;
}

int main() {
    int x = 17, y = 5, q, r;
    division(x, y, q, r);
    cout << "Cociente: " << q << ", Residuo: " << r << endl;
    return 0;
}