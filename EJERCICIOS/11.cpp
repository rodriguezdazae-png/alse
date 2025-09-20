//Ejercicio 5.2
#include <iostream>
using namespace std;

void intercambiar(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5, y = 10;
    intercambiar(&x, &y);
    cout << "x: " << x << ", y: " << y << endl;
    return 0;
}