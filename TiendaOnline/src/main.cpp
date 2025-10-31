#include <iostream>
#include <vector>
#include <fstream>
#include "Producto.h"

int main() {
    std::vector<Producto> productos;

    productos.emplace_back("Teclado Mecánico", 250000, 10, 5);
    productos.emplace_back("Mouse Inalámbrico", 80000, 20, 10);
    productos.emplace_back("Monitor 24\"", 700000, 5, 7);

    // Simular operaciones
    productos[0].vender(3);
    productos[1].reabastecer(5);
    productos[2].actualizarPrecio(680000);

    float totalInventario = 0;
    for (const auto& p : productos)
        totalInventario += p.consultarValorInventario();

    std::cout << "\n=== RESUMEN DEL INVENTARIO ===\n";
    for (const auto& p : productos) {
        p.resumenProducto();
        std::cout << "-------------------------\n";
    }

    std::cout << "Valor total del inventario: $" << totalInventario << "\n";

    // Generar archivo reporte
    std::ofstream reporte("reporte_inventario.txt");
    for (const auto& p : productos) {
        reporte << "Valor del producto en inventario: $" << p.consultarValorInventario() << "\n";
    }
    reporte << "Valor total: $" << totalInventario << "\n";
    reporte.close();

    std::cout << "Reporte generado: reporte_inventario.txt\n";
    return 0;
}
