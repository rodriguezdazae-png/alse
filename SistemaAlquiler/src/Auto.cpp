#include "Auto.h"

Auto::Auto(std::string marca, std::string modelo, std::string placa, int capacidadPasajeros)
    : Vehiculo(marca, modelo, placa), capacidadPasajeros(capacidadPasajeros) {}

void Auto::mostrarInformacion() const {
    std::cout << "[AUTO] ";
    Vehiculo::mostrarInformacion();
    std::cout << "  Capacidad: " << capacidadPasajeros << " pasajeros" << std::endl;
}
