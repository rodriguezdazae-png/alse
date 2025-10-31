#include "Producto.h"
#include <iostream>

Producto::Producto(const std::string& nombre, float precio, int stock, int descuento)
    : nombre(nombre), precio(precio), stock(stock), descuento(descuento) {}

void Producto::actualizarPrecio(float nuevoPrecio) {
    precio = nuevoPrecio;
}

void Producto::resumenProducto() const {
    std::cout << "Producto: " << nombre << "\n"
              << "Precio: $" << precio << "\n"
              << "Stock: " << stock << "\n"
              << "Descuento: " << descuento << "%\n";
}

float Producto::vender(int cantidad) {
    if (cantidad > stock) {
        std::cout << "No hay suficiente stock disponible.\n";
        return 0.0f;
    }
    stock -= cantidad;
    float total = cantidad * precio * (1 - descuento / 100.0f);
    return total;
}

void Producto::reabastecer(int cantidad) {
    stock += cantidad;
}

float Producto::consultarValorInventario() const {
    return precio * stock;
}

std::string Producto::getNombre() const { return nombre; }
float Producto::getPrecio() const { return precio; }
int Producto::getStock() const { return stock; }
int Producto::getDescuento() const { return descuento; }
