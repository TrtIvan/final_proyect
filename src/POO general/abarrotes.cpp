/*    
    Ejercicio de clase 

    Creado por Emmanuel VillalPando Hernandez e Ivan Gabriel García Bonilla 

    Fecha: 18/10/23
    
*/

#include <iostream>
#include <string>

using namespace std;

class Producto {
private:
    string nombre;
    double precio;
public:
    // Constructor por defecto
    Producto() : nombre("desconocido"), precio(0.0) {
        cout << "Constructor por defecto llamado\n";
    }

    // Constructor con parámetros
    Producto(string n, double p) : nombre(n), precio(p) {
        cout << "Constructor con parametros llamado\n";
    }

    // Constructor de copia
    Producto(const Producto& p) : nombre(p.nombre), precio(p.precio) {
        cout << "Constructor de copia llamado\n";
    }

    // Destructor
    ~Producto() {
        cout << "Destructor llamado para " << nombre << "\n";
    }

    // Clase amiga
    friend class Tienda;

    // Función amiga
    friend void imprimirProducto(const Producto& p);
};

// Clase amiga
class Tienda {
public:
    void cambiarPrecio(Producto& p, double nuevoPrecio) {
        p.precio = nuevoPrecio;
    }
};

// Función amiga
void imprimirProducto(const Producto& p) {
    cout << "Producto: " << p.nombre << ", Precio: " << p.precio << "\n";
}

int main() {
    Producto pan("Pan", 35.5);
    imprimirProducto(pan);

    Tienda tienda;
    tienda.cambiarPrecio(pan, 40.5);
    imprimirProducto(pan);

    Producto copiaPan(pan);
    imprimirProducto(copiaPan);

    return 0;
}
