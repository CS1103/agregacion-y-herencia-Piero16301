#include "Revista.h"

Revista::Revista(const string &nombre, int numVolumen, int numRevista) : Volumen(nombre, numVolumen),
                                                                         numRevista(numRevista) {}