#ifndef BIBLIOTECA_REVISTA_H
#define BIBLIOTECA_REVISTA_H


#include "Volumen.h"

class Revista : public Volumen{
private:
    int numRevista;

public:
    Revista(const string &nombre, int numVolumen, int numRevista);
};


#endif //BIBLIOTECA_REVISTA_H
