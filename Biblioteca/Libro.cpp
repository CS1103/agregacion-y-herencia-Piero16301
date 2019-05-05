#include <iostream>
#include "Libro.h"

void Libro::mostrar() {
    std::cout << "VOLUMEN: #" << volumen << ", LIBRO #" << libro << ", TITULO: " << titulo << std::endl;
}