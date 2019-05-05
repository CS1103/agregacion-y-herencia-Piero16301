#ifndef BIBLIOTECA_LIBRO_H
#define BIBLIOTECA_LIBRO_H

#include "Volumen.h"

class Libro : public Volumen {
    int libro;

public:
    Libro(int _volumen, std::string _titulo, int _libro): Volumen{_volumen, _titulo}, libro{_libro} {}
    ~Libro();
    void mostrar();
};


#endif //BIBLIOTECA_LIBRO_H
