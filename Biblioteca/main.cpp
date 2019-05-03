#include <iostream>
#include "Biblioteca.h"

int main() {
    Biblioteca bib_1(20,12);
    bib_1.agregarLibro("Libro 1");
    bib_1.agregarLibro("Libro 2");
    bib_1.agregarLibro("Libro 3");
    bib_1.agregarRevista("Revista 1");
    bib_1.agregarLibro("Libro 4");
    bib_1.agregarRevista("Revista 2");
    bib_1.mostrarBiblioteca();
    return 0;
}