#ifndef BIBLIOTECA_REVISTA_H
#define BIBLIOTECA_REVISTA_H

#include "Volumen.h"

#include <string>

class Revista : public Volumen {
    int revista;

public:
    Revista(int _volumen, std::string _titulo, int _revista): Volumen{_volumen, _titulo}, revista{_revista} {}
    ~Revista();
    void mostrar();
};


#endif //BIBLIOTECA_REVISTA_H
