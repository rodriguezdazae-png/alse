#include "SistemaAlquiler.h"
#include <iostream>

void SistemaAlquiler::registrarVehiculo(std::shared_ptr<Vehiculo> v) {
    vehiculos.push_back(v);
}

void SistemaAlquiler::mostrarVehiculosDisponibles() const {
    std::cout << "\n=== Vehículos disponibles ===" << std::endl;
    for (const auto& v : vehiculos) {
        if (v->estaDisponible()) {
            v->mostrarInformacion();
        }
    }
}

void SistemaAlquiler::alquilarVehiculo(std::string placa) {
    for (auto& v : vehiculos) {
        if (v->getPlaca() == placa && v->estaDisponible()) {
            v->setDisponible(false);
            std::cout << "Vehículo con placa " << placa << " alquilado.\n";
            return;
        }
    }
    std::cout << "Vehículo no disponible o no encontrado.\n";
}

void SistemaAlquiler::devolverVehiculo(std::string placa) {
    for (auto& v : vehiculos) {
        if (v->getPlaca() == placa && !v->estaDisponible()) {
            v->setDisponible(true);
            std::cout << "Vehículo con placa " << placa << " devuelto.\n";
            return;
        }
    }
    std::cout << "Vehículo no encontrado o ya disponible.\n";
}
