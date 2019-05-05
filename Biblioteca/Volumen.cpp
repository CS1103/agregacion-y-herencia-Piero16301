#include "Volumen.h"
#include "Biblioteca.h"

#include <iostream>

Volumen::Volumen(int _volumen, std::string _titulo) {
    volumen = _volumen;
    titulo = _titulo;
}

void Volumen::mostrar() {
    std::cout << "Metodo clase padre: Clase volumen" << std::endl;
    std::cout << std::endl;
}