#include "Volumen.h"

Volumen::Volumen(const string &nombre, int numVolumen) : nombre(nombre), numVolumen(numVolumen) {}

const string &Volumen::getNombre() const {
    return nombre;
}

int Volumen::getNumVolumen() const {
    return numVolumen;
}