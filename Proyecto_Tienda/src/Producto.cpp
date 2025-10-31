#include "Producto.h"

Producto::Producto(std::string nombre, float precio, int stock, int descuento)
    : nombre(nombre), precio(precio), stock(stock), descuento(descuento) {}

void Producto::actualizarPrecio(float nuevoPrecio) {
    precio = nuevoPrecio;
}

void Producto::resumenProducto() const {
    std::cout << "Nombre: " << nombre << std::endl;
    std::cout << "Precio: $" << precio << std::endl;
    std::cout << "Stock: " << stock << std::endl;
    std::cout << "Descuento: " << descuento << "%" << std::endl;
    std::cout << "Valor Inventario: $" << consultarValorInventario() << std::endl;
}

float Producto::vender(int cantidad) {
    if (cantidad <= stock) {
        stock -= cantidad;
        float precioConDescuento = precio * (1 - (descuento / 100.0f));
        return cantidad * precioConDescuento;
    } else {
        std::cout << "Stock insuficiente para vender " << cantidad << " unidades." << std::endl;
        return 0.0f;
    }
}

void Producto::reabastecer(int cantidad) {
    stock += cantidad;
}

float Producto::consultarValorInventario() const {
    return precio * stock;
}

void Producto::mostrarNombre() const {
    std::cout << "Producto: " << nombre << std::endl;
}
