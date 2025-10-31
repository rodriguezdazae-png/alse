#include <iostream>
#include <vector>
#include <fstream>
#include "Producto.h"

int main() {
    std::vector<Producto> inventario;

    inventario.emplace_back("Teclado Mecánico", 250000, 10, 10);
    inventario.emplace_back("Mouse Gamer", 120000, 15, 5);
    inventario.emplace_back("Monitor 24\"", 800000, 5, 15);

    inventario[0].vender(2);
    inventario[1].reabastecer(10);
    inventario[2].actualizarPrecio(750000);

    std::cout << "=== RESUMEN DEL INVENTARIO ===" << std::endl;
    for (const auto& p : inventario) {
        p.resumenProducto();
        std::cout << "--------------------------" << std::endl;
    }

    float valorTotal = 0.0f;
    for (const auto& p : inventario)
        valorTotal += p.consultarValorInventario();

    std::cout << "Valor total del inventario: $" << valorTotal << std::endl;

    std::ofstream reporte("reporte_inventario.txt");
    if (reporte.is_open()) {
        reporte << "REPORTE DE INVENTARIO\n\n";
        for (const auto& p : inventario) {
            reporte << "Valor inventario producto: $" << p.consultarValorInventario() << "\n";
        }
        reporte << "\nValor total del inventario: $" << valorTotal << std::endl;
        reporte.close();
        std::cout << "Reporte generado: reporte_inventario.txt" << std::endl;
    }

    return 0;
}
