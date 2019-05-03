#ifndef BIBLIOTECA_LIBRO_H
#define BIBLIOTECA_LIBRO_H


#include "Volumen.h"

class Libro : public Volumen{
private:
    int numLibro;

public:
    Libro(const string &nombre, int numVolumen, int numLibro);
    void setNombre();
};


#endif //BIBLIOTECA_LIBRO_H
