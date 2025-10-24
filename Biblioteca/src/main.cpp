#include "../include/Biblioteca.h"
#include <iostream>

int main() {
    Biblioteca b;

    b.agregarLibro(Libro("El Quijote", "Cervantes", "001"));
    b.agregarLibro(Libro("1984", "George Orwell", "002"));
    b.agregarLibro(Libro("Cien Años de Soledad", "Gabriel García Márquez", "003"));

    b.mostrarLibrosDisponibles();

    std::cout << "\nBuscando '1984':\n";
    b.buscarPorTitulo("1984");

    b.eliminarLibroPorISBN("002");

    std::cout << "\nDespués de eliminar:\n";
    b.mostrarLibrosDisponibles();

    return 0;
}
