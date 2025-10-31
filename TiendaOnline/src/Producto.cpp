#include "Producto.h"

Producto::Producto(std::string n, float p, int s, int d)
    : nombre(n), precio(p), stock(s), descuento(d) {}

void Producto::actualizarPrecio(float nuevoPrecio) {
    precio = nuevoPrecio;
}

void Producto::resumenProducto() const {
    std::cout << "Nombre: " << nombre
              << "\nPrecio: $" << precio
              << "\nStock: " << stock
              << "\nDescuento: " << descuento << "%\n";
}

float Producto::vender(int cantidad) {
    if (cantidad > stock) {
        std::cout << "No hay suficiente stock.\n";
        return 0.0f;
    }
    stock -= cantidad;
    float valor = cantidad * precio * (1 - descuento / 100.0f);
    return valor;
}

void Producto::reabastecer(int cantidad) {
    stock += cantidad;
}

float Producto::consultarValorInventario() const {
    return precio * stock;
}
