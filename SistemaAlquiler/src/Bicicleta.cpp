#include "Bicicleta.h"

Bicicleta::Bicicleta(std::string marca, std::string modelo, std::string placa, bool electrica)
    : Vehiculo(marca, modelo, placa), electrica(electrica) {}

void Bicicleta::mostrarInformacion() const {
    std::cout << "[BICICLETA] ";
    Vehiculo::mostrarInformacion();
    std::cout << "  Tipo: " << (electrica ? "Eléctrica" : "Convencional") << std::endl;
}
