#ifndef LIBRO_H
#define LIBRO_H

#include <string>

class Libro {
private:
    std::string titulo;
    std::string autor;
    std::string isbn;
    bool disponible;

public:
    Libro(std::string titulo, std::string autor, std::string isbn);

    std::string getTitulo() const;
    std::string getAutor() const;
    std::string getISBN() const;
    bool estaDisponible() const;

    void prestar();
    void devolver();

    void mostrarInfo() const;
};

#endif
