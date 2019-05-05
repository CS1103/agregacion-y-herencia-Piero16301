#include <iostream>

#include "Biblioteca.h"

Biblioteca::Biblioteca(int _numLibros, int _numRevistas, int _maxLibros, int _maxRevistas) {
    numLibros = _numLibros;
    numRevistas = _numRevistas;
    maxLibros = _maxLibros;
    maxRevistas = _maxRevistas;
}

void Biblioteca::incluir(Volumen *volumen_ptr) {
    volumenes.push_back(volumen_ptr);
    auto pointer_cast = dynamic_cast<Revista*>(volumen_ptr);
    if (pointer_cast != nullptr) {
        numRevistas += 1;
    }
    else {
        numLibros += 1;
    }
}

void Biblioteca::mostrarBiblioteca() {
    std::vector <Volumen*>::iterator pointer;
    for (pointer = volumenes.begin(); pointer < volumenes.end(); pointer++) {
        (*pointer) -> mostrar();
    }
}

Biblioteca::~Biblioteca() {
    std::vector <Volumen*>::iterator pointer;
    for (pointer = volumenes.begin(); pointer < volumenes.end(); pointer++) {
        delete *pointer;
    }
}