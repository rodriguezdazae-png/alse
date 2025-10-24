#ifndef SISTEMAALQUILER_H
#define SISTEMAALQUILER_H

#include <vector>
#include <memory>
#include "Vehiculo.h"

class SistemaAlquiler {
private:
    std::vector<std::shared_ptr<Vehiculo>> vehiculos;

public:
    void registrarVehiculo(std::shared_ptr<Vehiculo> v);
    void mostrarVehiculosDisponibles() const;
    void alquilarVehiculo(std::string placa);
    void devolverVehiculo(std::string placa);
};

#endif
