#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>

/**
 * @brief Representa un producto disponible en la tienda en línea.
 */
class Producto {
private:
    std::string nombre;  ///< Nombre del producto
    float precio;        ///< Precio actual del producto
    int stock;           ///< Cantidad disponible en inventario
    int descuento;       ///< Porcentaje de descuento aplicado

public:
    /**
     * @brief Constructor que inicializa todos los atributos del producto.
     * @param nombre Nombre del producto.
     * @param precio Precio base del producto.
     * @param stock Cantidad disponible en inventario.
     * @param descuento Porcentaje de descuento.
     */
    Producto(std::string nombre, float precio, int stock, int descuento);

    /**
     * @brief Actualiza el precio del producto.
     * @param nuevoPrecio Nuevo valor a asignar al precio.
     */
    void actualizarPrecio(float nuevoPrecio);

    /**
     * @brief Muestra todas las características del producto.
     */
    void resumenProducto() const;

    /**
     * @brief Disminuye el stock si hay unidades suficientes y retorna el valor de la venta.
     * @param cantidad Cantidad de unidades a vender.
     * @return Valor total de la venta, considerando el descuento.
     */
    float vender(int cantidad);

    /**
     * @brief Incrementa el stock del producto.
     * @param cantidad Cantidad de unidades a agregar al inventario.
     */
    void reabastecer(int cantidad);

    /**
     * @brief Consulta el valor total del inventario de este producto.
     * @return Valor total del inventario (precio × stock).
     */
    float consultarValorInventario() const;
};

#endif
