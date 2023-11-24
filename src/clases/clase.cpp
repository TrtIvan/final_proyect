/*    
    Ejercicio de clase 

    Creado por Emmanuel VillalPando Hernandez e Ivan Gabriel García Bonilla 

    Fecha: 12/10/23
    
*/

#include <iostream>

using namespace std;

// Clase Padre 1
class Padre1 {
public:
    Padre1() {
        cout << "Constructor de la clase Padre1" << endl;
    }
    void metodo(int variable1, int variable2) {
        int suma = variable1 + variable2;
        cout << "La suma de las variables en la clase Padre1 es: " << suma << endl;
    }
    virtual ~Padre1() {
        cout << "Destructor de la clase Padre1" << endl;
    }
};

// Clase Padre 2
class Padre2 {
public:
    Padre2() {
        cout << "Constructor de la clase Padre2" << endl;
    }
    void metodo(int variable1, int variable2) {
        int resta = variable1 - variable2;
        cout << "La resta de las variables en la clase Padre2 es: " << resta << endl;
    }
    virtual ~Padre2() {
        cout << "Destructor de la clase Padre2" << endl;
    }
};

// Clase Hija 1
class Hija1 : public Padre1, public Padre2 {
public:
    Hija1() : Padre1(), Padre2() {
        cout << "Constructor de la clase Hija1" << endl;
    }
    void accederMetodosPadres() {
        int var1 = 10;
        int var2 = 5;
        Padre1::metodo(var1, var2);
        Padre2::metodo(var1, var2);
    }
    ~Hija1() {
        cout << "Destructor de la clase Hija1" << endl;
    }
};

// Clase Hija 2
class Hija2 : public Padre1, public Padre2 {
public:
    Hija2() : Padre1(), Padre2() {
        cout << "Constructor de la clase Hija2" << endl;
    }
    using Padre1::metodo;
    using Padre2::metodo;
    ~Hija2() {
        cout << "Destructor de la clase Hija2" << endl;
    }
};

int main() {
    Hija1 h1;
    h1.accederMetodosPadres();

    Hija2 h2;
    int var3 = 20;
    int var4 = 15;
    h2.Padre1::metodo(var3, var4);
    h2.Padre2::metodo(var3, var4);

    return 0;
}
