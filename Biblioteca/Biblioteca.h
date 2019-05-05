#ifndef BIBLIOTECA_BIBLIOTECA_H
#define BIBLIOTECA_BIBLIOTECA_H

#include <vector>

#include "Volumen.h"
#include "Revista.h"

class Biblioteca {
public:
    int maxLibros;
    int maxRevistas;
    int numLibros;
    int numRevistas;
    std::vector <Volumen*> volumenes;

    Biblioteca() {};
    Biblioteca(int _numLibros, int _numRevistas, int _maxLibros, int _maxRevistas);
    ~Biblioteca();
    void incluir(Volumen* volumen_ptr);
    void mostrarBiblioteca();
};


#endif //BIBLIOTECA_BIBLIOTECA_H
