/*
    Ejercicio de clase 

    Creado por Emmanuel VillalPando Hernandez e Ivan Gabriel García Bonilla 

*/

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
#include <iostream>

class Animal {
protected:
    // Propiedades
    std::string nombre;
    int edad;
    double peso;
    std::string color;

public:
    // Constructor
    Animal(std::string n, int e, double p, std::string c) : nombre(n), edad(e), peso(p), color(c) {}
    ~Animal() {}
    // Getters
    std::string getNombre() { return nombre; }
    int getEdad() { return edad; }
    double getPeso() { return peso; }
    std::string getColor() { return color; }
    // Setters
    void setNombre(std::string n) { nombre = n; }
    void setEdad(int e) { edad = e; }
    void setPeso(double p) { peso = p; }
    void setColor(std::string c) { color = c; }
    // Funciones
    virtual void hacerSonido() = 0;

    void describir() {
        std::cout << "Este es un " << nombre << ", tiene " << edad << " anios, pesa " << peso << " kg y es de color " << color << "." << std::endl;
    }
};

#endif
