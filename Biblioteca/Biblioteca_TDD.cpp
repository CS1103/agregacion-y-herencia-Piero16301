#include "catch.hpp"
#include "Biblioteca.h"
#include "Libro.h"

SCENARIO("Prueba de biblioteca") {
    GIVEN("Numero de libros") {
        WHEN("Se inicializa con 0 libros") {
            Volumen* ptr1 = new Libro(1,"Origin",1);
            Volumen* ptr2 = new Libro(2,"The DaVinci Code",2);
            Biblioteca biblioteca(0,0,20,20);
            biblioteca.incluir(ptr1);
            biblioteca.incluir(ptr2);
            THEN("Numero de libros es 2") {
                REQUIRE(biblioteca.numLibros == 2);
            }
        }
    }
    GIVEN("Numero de revistas") {
        WHEN("Se inicializa con 0 revistas") {
            Volumen* ptr3 = new Revista(1,"The New York Times",1);
            Volumen* ptr4 = new Revista(2,"The New York Times",2);
            Biblioteca biblioteca(0,0,20,20);
            biblioteca.incluir(ptr3);
            biblioteca.incluir(ptr4);
            THEN("Numero de revistas es 2") {
                REQUIRE(biblioteca.numRevistas == 2);
            }
        }
    }
}