#include <iostream>
#include "SistemaAlquiler.h"
#include "Auto.h"
#include "Bicicleta.h"

int main() {
    SistemaAlquiler sistema;

    sistema.registrarVehiculo(std::make_shared<Auto>("Toyota", "Corolla", "ABC123", 5));
    sistema.registrarVehiculo(std::make_shared<Bicicleta>("Trek", "FX3", "BIC456", false));
    sistema.registrarVehiculo(std::make_shared<Bicicleta>("Giant", "QuickE", "E-BIKE7", true));

    int opcion;
    std::string placa;

    do {
        std::cout << "\n=== Sistema de Alquiler ===\n";
        std::cout << "1. Mostrar vehículos disponibles\n";
        std::cout << "2. Alquilar vehículo\n";
        std::cout << "3. Devolver vehículo\n";
        std::cout << "0. Salir\n";
        std::cout << "Opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                sistema.mostrarVehiculosDisponibles();
                break;
            case 2:
                std::cout << "Ingrese la placa del vehículo: ";
                std::cin >> placa;
                sistema.alquilarVehiculo(placa);
                break;
            case 3:
                std::cout << "Ingrese la placa del vehículo: ";
                std::cin >> placa;
                sistema.devolverVehiculo(placa);
                break;
            case 0:
                std::cout << "Saliendo...\n";
                break;
            default:
                std::cout << "Opción inválida.\n";
                break;
        }

    } while (opcion != 0);

    return 0;
}
