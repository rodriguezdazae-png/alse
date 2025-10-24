#include "../include/Libro.h"
#include <iostream>

Libro::Libro(std::string titulo, std::string autor, std::string isbn)
    : titulo(titulo), autor(autor), isbn(isbn), disponible(true) {}

std::string Libro::getTitulo() const { return titulo; }
std::string Libro::getAutor() const { return autor; }
std::string Libro::getISBN() const { return isbn; }
bool Libro::estaDisponible() const { return disponible; }

void Libro::prestar() { disponible = false; }
void Libro::devolver() { disponible = true; }

void Libro::mostrarInfo() const {
    std::cout << "Título: " << titulo 
              << " | Autor: " << autor
              << " | ISBN: " << isbn
              << " | Disponible: " << (disponible ? "Sí" : "No") 
              << std::endl;
}
