#include "Biblioteca.h"

Biblioteca::Biblioteca(int maxLibros, int maxRevistas) : maxLibros(maxLibros), maxRevistas(maxRevistas) {}

void Biblioteca::mostrarBiblioteca() {
    for (int i = 0; i < libros.size(); i++) {
        cout << "Volumen #" << libros[i].getNumVolumen() << ": " << libros[i].getNombre() << '\n';
    }
}

void Biblioteca::agregarLibro(string nombre) {
    string nuevo_nombre = "Libro #" + to_string(lib) + " Titulo: " + nombre;
    Volumen libro1(nuevo_nombre, vol);
    vol++;
    lib++;
    libros.push_back(libro1);
}

void Biblioteca::agregarRevista(string nombre) {
    string nuevo_nombre = "Revista #" + to_string(rev) + " Titulo: " + nombre;
    Volumen revista1(nuevo_nombre,vol);
    vol++;
    rev++;
    libros.push_back(revista1);
}