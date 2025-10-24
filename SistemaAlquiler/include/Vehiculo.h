#ifndef VEHICULO_H
#define VEHICULO_H

#include <string>
#include <iostream>

class Vehiculo {
protected:
    std::string marca;
    std::string modelo;
    std::string placa;
    bool disponible;

public:
    Vehiculo(std::string marca, std::string modelo, std::string placa);
    virtual ~Vehiculo() = default;

    virtual void mostrarInformacion() const;
    bool estaDisponible() const;
    void setDisponible(bool valor);
    std::string getPlaca() const;
};

#endif
