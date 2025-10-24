#include "../include/Biblioteca.h"
#include <iostream>

void Biblioteca::agregarLibro(const Libro& libro) {
    libros.push_back(libro);
}

void Biblioteca::eliminarLibroPorISBN(const std::string& isbn) {
    for (auto it = libros.begin(); it != libros.end(); ++it) {
        if (it->getISBN() == isbn) {
            libros.erase(it);
            std::cout << "Libro eliminado correctamente.\n";
            return;
        }
    }
    std::cout << "No se encontró un libro con ese ISBN.\n";
}

void Biblioteca::mostrarLibrosDisponibles() const {
    std::cout << "\n--- Libros disponibles ---\n";
    for (const auto& libro : libros) {
        if (libro.estaDisponible()) libro.mostrarInfo();
    }
}

void Biblioteca::buscarPorTitulo(const std::string& titulo) const {
    std::cout << "\n--- Resultado de búsqueda ---\n";
    for (const auto& libro : libros) {
        if (libro.getTitulo() == titulo) libro.mostrarInfo();
    }
}
