#ifndef PRODUCTO_H
#define PRODUCTO_H

#include <string>
#include <iostream>

/**
 * @brief Clase que representa un producto en una tienda.
 */
class Producto {
private:
    std::string nombre;   ///< Nombre del producto
    float precio;         ///< Precio unitario del producto
    int stock;            ///< Cantidad disponible en inventario
    int descuento;        ///< Porcentaje de descuento aplicado

public:
    /**
     * @brief Constructor que inicializa los atributos del producto.
     * @param nombre Nombre del producto
     * @param precio Precio unitario
     * @param stock Cantidad inicial en inventario
     * @param descuento Porcentaje de descuento
     */
    Producto(std::string nombre, float precio, int stock, int descuento);

    /**
     * @brief Actualiza el precio del producto.
     * @param nuevoPrecio Nuevo valor del precio.
     */
    void actualizarPrecio(float nuevoPrecio);

    /**
     * @brief Muestra un resumen con toda la información del producto.
     */
    void resumenProducto() const;

    /**
     * @brief Vende una cantidad del producto y retorna el valor total de la venta.
     * @param cantidad Número de unidades a vender.
     * @return Valor total de la venta aplicando el descuento.
     */
    float vender(int cantidad);

    /**
     * @brief Reabastece el inventario del producto.
     * @param cantidad Cantidad de productos agregados al stock.
     */
    void reabastecer(int cantidad);

    /**
     * @brief Devuelve el valor total del inventario del producto.
     * @return Valor total del inventario = precio * stock.
     */
    float consultarValorInventario() const;
};

#endif
