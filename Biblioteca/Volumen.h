#ifndef BIBLIOTECA_VOLUMEN_H
#define BIBLIOTECA_VOLUMEN_H

#include <string>
#include <vector>

class Volumen {
protected:
    int volumen;
    std::string titulo;

public:
    Volumen() {}
    Volumen(int _volumen, std::string _titulo);
    virtual void mostrar();
};


#endif //BIBLIOTECA_VOLUMEN_H
