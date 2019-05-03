#ifndef BIBLIOTECA_VOLUMEN_H
#define BIBLIOTECA_VOLUMEN_H

#include <iostream>
#include "Biblioteca.h"

using namespace std;

class Volumen{
protected:
    string nombre;
    int numVolumen;

public:
    Volumen(const string &nombre, int numVolumen);

    const string &getNombre() const;

    int getNumVolumen() const;
};


#endif //BIBLIOTECA_VOLUMEN_H
