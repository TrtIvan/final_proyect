/*
    Ejercicio de clase 

    Creado por Emmanuel VillalPando Hernandez e Ivan Gabriel García Bonilla 

*/

#ifndef PERRO_H
#define PERRO_H

#include "Animal.h"
#include <iostream>

class Perro : public Animal {
protected:
    // Propiedades
    std::string raza;
    bool pedigree;
    bool castrado;
    bool enfermedades;

public:
    // Constructor
    Perro(std::string n, int e, double p, std::string c, std::string ra, bool pe, bool cas, bool enf) : Animal(n, e, p, c) {}
    ~Perro() {}
    // Getters
    std::string getRaza(){ return raza; }
    bool getPedigree(){ return pedigree; }
    bool getCastrado(){ return castrado; }
    bool getEnfermo(){ return enfermedades; }
    // Setters
    void setRaza(std::string r){ raza = r; }
    void setPedigree(bool p){ pedigree = p; }
    void setCastrado(bool c){ castrado = c; }
    void setEnfermo(bool e){ enfermedades = e; }
    // Funciones
    void hacerSonido() override {
        std::cout << "Guau guau!" << std::endl;
    }

    void hacerDelBanio(){
        std::cout << "Salio todo bien de mi :)" << std::endl;
    }
};

#endif
