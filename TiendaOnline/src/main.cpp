#include <iostream>
#include <vector>
#include <fstream>
#include "../include/Producto.h"

int main() {
    std::vector<Producto> productos;

    productos.emplace_back("Camisa", 50000, 10, 10);
    productos.emplace_back("Pantalon", 80000, 5, 5);
    productos.emplace_back("Zapatos", 120000, 8, 15);

    for (auto& p : productos) {
        p.resumenProducto();
        std::cout << "---------------------------\n";
    }

    std::cout << "\nVendiendo 2 camisas...\n";
    float totalVenta = productos[0].vender(2);
    std::cout << "Valor total venta: $" << totalVenta << "\n";

    productos[1].reabastecer(3);
    productos[2].actualizarPrecio(110000);

    float totalInventario = 0.0f;
    for (auto& p : productos)
        totalInventario += p.consultarValorInventario();

    std::cout << "\nValor total inventario: $" << totalInventario << "\n";

    std::ofstream reporte("reporte_inventario.txt");
    if (reporte.is_open()) {
        reporte << "REPORTE DE INVENTARIO\n";
        reporte << "=====================\n\n";
        for (auto& p : productos) {
            reporte << "Producto: " << p.getNombre() << "\n";
            reporte << "Precio: $" << p.getPrecio() << "\n";
            reporte << "Stock: " << p.getStock() << "\n";
            reporte << "Valor total: $" << p.consultarValorInventario() << "\n";
            reporte << "---------------------------\n";
        }
        reporte << "Valor total del inventario: $" << totalInventario << "\n";
        reporte.close();
        std::cout << "\nReporte generado: reporte_inventario.txt\n";
    } else {
        std::cout << "Error al crear el reporte.\n";
    }

    return 0;
}
