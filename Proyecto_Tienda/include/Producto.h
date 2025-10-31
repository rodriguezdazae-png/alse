#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>

/**
 * @class Producto
 * @brief Representa un producto dentro de un inventario o tienda en línea.
 */
class Producto {
private:
    std::string nombre;
    float precio;
    int stock;
    int descuento;

public:
    Producto(std::string nombre, float precio, int stock, int descuento);
    void actualizarPrecio(float nuevoPrecio);
    void resumenProducto() const;
    float vender(int cantidad);
    void reabastecer(int cantidad);
    float consultarValorInventario() const;
    void mostrarNombre() const;
};

#endif // PRODUCTO_H
