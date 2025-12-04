//Ejercicio 6.1
#include <iostream>
using namespace std;

int producto(int a, int b) {
    return a * b;
}

int main() {
    int x = 4, y = 5;
    cout << "Producto: " << producto(x, y) << endl;
    return 0;
}