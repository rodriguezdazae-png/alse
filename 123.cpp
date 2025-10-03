#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


float operar(float a, float b, string op) {
    if (op == "+" ) return a + b;        // suma
    if (op == "-" ) return a - b;        // resta
    if (op == "*" || op == "x") return a * b;  // multiplicación
    if (op == "/" ) {                    // división
        if (b == 0) throw runtime_error("Division por cero");
        return a / b;
    }
    throw runtime_error("Operador no valido"); // error en operador
}

int main(int argc, char* argv[]) {
   
    if (argc != 4) {
        cerr << "Uso: ./operacion <num1> <operador> <num2>" << endl;
        return 1;
    }

    try {
        
        float num1 = stof(argv[1]);  
        string op = argv[2];  
        float num2 = stof(argv[3]);  

        
        float resultado = operar(num1, num2, op);

        
        cout << "El resultado de la operacion es " << resultado << endl;

    } catch (...) {
        
        cerr << "Ha ingresado valores inadecuados para el programa.\n";
        cerr << "USO: ./operacion <num1> <operador> <num2>" << endl;
        return 1;
    }

    return 0;
}
