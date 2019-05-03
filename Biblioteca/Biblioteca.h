#ifndef BIBLIOTECA_BIBLIOTECA_H
#define BIBLIOTECA_BIBLIOTECA_H

#include <stdio.h>
#include <vector>
#include "Volumen.h"

using namespace std;

class Biblioteca {
private:
    int maxLibros;
    int maxRevistas;
    int vol=1, lib=1, rev=1;
    vector <Volumen> libros;

public:
    Biblioteca(int maxLibros, int maxRevistas);

    void mostrarBiblioteca();
    void agregarLibro(string nombre);
    void agregarRevista(string nombre);
};

#endif //BIBLIOTECA_BIBLIOTECA_H