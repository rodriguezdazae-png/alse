#include "Vehiculo.h"

Vehiculo::Vehiculo(std::string marca, std::string modelo, std::string placa)
    : marca(marca), modelo(modelo), placa(placa), disponible(true) {}

void Vehiculo::mostrarInformacion() const {
    std::cout << "Marca: " << marca << ", Modelo: " << modelo
              << ", Placa: " << placa
              << (disponible ? " (Disponible)" : " (No disponible)") << std::endl;
}

bool Vehiculo::estaDisponible() const {
    return disponible;
}

void Vehiculo::setDisponible(bool valor) {
    disponible = valor;
}

std::string Vehiculo::getPlaca() const {
    return placa;
}
