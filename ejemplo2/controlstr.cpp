#include <iostream>

int main() {
    int numero = 10;

    if (numero > 0) {
        std::cout << "El número es positivo." << std::endl;
    } else if (numero < 0) {
        std::cout << "El número es negativo." << std::endl;
    } else {
        std::cout << "El número es cero." << std::endl;
    }

    for (int i = 0; i < 5; ++i) {
        std::cout << "Iteración: " << i << std::endl;
    }

    int contador = 0;
    while (contador < 3) {
        std::cout << "Contador: " << contador << std::endl;
        ++contador;
    }

    return 0;
}