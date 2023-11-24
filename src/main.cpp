/*
    Ejercicio de clase 

    Creado por Emmanuel VillalPando Hernandez e Ivan Gabriel García Bonilla 

*/

#include "Perro.h"
#include "Gato.h"

#define aniosPerros 7
#define aniosGatos 4

int main() {
    const double radio = 5.0;
    // llamada a clases
    Perro perro("Firulais", 3, 10.0, "Negro", "Pitbul", false, true, true);
    Gato gato("Misifu", 2, 4.0, "Blanco", "siames", false, true, false);

    // LLamada a funciones
    std::cout << "El perro se llama " << perro.getNombre() << " y hace: ";
    perro.hacerSonido();
    perro.describir();
    perro.setEdad(perro.getEdad()*aniosPerros);
    perro.describir();

    std::cout << "El gato se llama " << gato.getNombre() << " y hace: ";
    gato.hacerSonido();
    gato.describir();
    gato.setEdad(gato.getEdad()*aniosGatos);
    gato.describir();


    return 0;
}
