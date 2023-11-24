/*
Sobrecarga de Operadores (mas operadores)
- Fuentes: Actividad de clase, Programación Avanzada UP,
           Notas de Asignatura PROGRAMACIÓN AVANZADA en C/C++ - Dra. Claudia Sánchez (Profesora UP Aguascalientes)
- Editado / modificado por: Eduardo Rodríguez
- Fecha: 17/10/2023

- Se agregó una sobrecarga de un operador más, el cual fue +=
- Editores: Ivan Gabriel García Bonilla, Emmanuel Villalpando Hernández
*/

#include<bits/stdc++.h>

using namespace std;

class NumeroComplejo{
    float re, im;
    void copiar(const NumeroComplejo& otro){
        this->im = otro.im; 
        this->re = otro.re;
    }

public:
    NumeroComplejo(float real=0, float imaginarioinario=0){
        this->re = real;
        this->im = imaginarioinario;
        cout<<endl<<"Constructor...";
    }

    NumeroComplejo(const NumeroComplejo& original){
        cout<<endl<<"Constructor por copia...";
        copiar(original); // Llama a la funcion copiar() que basicamente hace lo mismo que haria el constructor copia.
    }

    void operator=(const NumeroComplejo& original){
        cout<<endl<<"Operador = ";
        if(&original == this) return;
        copiar(original);
    }

    NumeroComplejo operator+(const NumeroComplejo& n){
        cout<<endl<<"Operador + ";
        NumeroComplejo r(this->re + n.re, this->im + n.im);
    return r;
    }

    NumeroComplejo operator++(){ //prefijo ++n
        cout<<endl<<"Operador ++n";
        this->re++; 
        this->im++;
        return *this;
    }
    NumeroComplejo operator++(int){ //postfijo n++
        cout<<endl<<"Operador n++ ";
        NumeroComplejo r(*this);
        ++(*this);
        return r;
    }

    friend ostream& operator<<(ostream &cout,const NumeroComplejo& n);
    friend istream& operator>>(istream& cin, NumeroComplejo& n);

    void print(){
        if(im>=0) cout<<re<<"+ i"<<im;
        else cout<<re<<"- i"<<im;
    }
};

// Sobrecargando el cout
ostream& operator<<(ostream& cout, const NumeroComplejo& n){
    if(n.im>=0) cout<<n.re<<"+i"<<n.im;
    else cout<<n.re<<"-i"<<n.im;
    return cout;
}

// Sobrecargando el cin
istream& operator>>(istream& cin, NumeroComplejo& n){
    cin >> n.re >> n.im;
    return cin;
}

// Sobrecarga agregada
// Sobrecargando el +=
// Fuente: https://www.ibm.com/docs/es/i/7.5?topic=only-overloading-binary-operators-c
class Sobrecargando {
public:
    int valor;
    // Constructor
    Sobrecargando(int v) : valor(v) {}

    // Sobrecarga del operador +=
    Sobrecargando& operator+=(const Sobrecargando& otra) {
        this->valor += otra.valor;
        return *this;
    }

    // Sobrecarga del operador -=
    Sobrecargando& operator-=(const Sobrecargando& otra) {
        this->valor -= otra.valor;
        return *this;
    }
};


int main(){
    NumeroComplejo n1(4,6);
    NumeroComplejo n2(2,3);
    // NumeroComplejo r1 = ++n1;
    NumeroComplejo r1 = n1++;
    NumeroComplejo r2;
    n2++;
    r2 = n1 + n2;
    cout << endl << "Resultados ---------------"<<endl;
    cout << endl << "n1: "<<n1;
    cout << endl << "n2: "<<n2;
    cout << endl << "r1: "<<r1;
    cout << endl << "r2: "<<r2;
    cout << endl;
    cin >> n2;
    cout << "Nuevo valor de n2: " << n2;
    cout << "----------------" << endl;
    Sobrecargando obj1(5);
    Sobrecargando obj2(10);

    cout << "Valor original obj1: " << obj1.valor << endl;
    cout << "Valor original obj2: " << obj2.valor << endl;

    obj1 += obj2;

    cout << "Nuevo valor de obj1 despues de obj1 += obj2: " << obj1.valor << endl;
    // Usando la nueva funcionalidad
    Sobrecargando obj3(7);
    Sobrecargando obj4(3);

    cout << "Valor original obj3: " << obj3.valor << endl;
    cout << "Valor original obj4: " << obj4.valor << endl;

    // Restando obj4 de obj3 usando -=
    obj3 -= obj4;

    cout << "Nuevo valor de obj3 despues de obj3 -= obj4: " << obj3.valor << endl;

    return 0;
}
