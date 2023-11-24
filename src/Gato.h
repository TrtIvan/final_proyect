/*
    Ejercicio de clase 

    Creado por Emmanuel VillalPando Hernandez e Ivan Gabriel García Bonilla 

*/

#ifndef GATO_H
#define GATO_H

#include "Animal.h"
#include <iostream>

class Gato : public Animal {
protected:
    // Propiedades
    std::string raza;
    bool collar;
    bool arenero;
    bool agresivo;
public:
    // Constructor
    Gato(std::string n, int e, double p, std::string c, std::string ra, bool col, bool are, bool agr) : Animal(n, e, p, c) {}
    ~Gato() {}
    // Getters
    std::string getRaza(){ return raza; }
    bool getCollar(){ return collar; }
    bool getArenero(){ return arenero; }
    bool getAgresivo(){ return agresivo; }
    // Setters
    void setRaza(std::string r){ raza = r; }
    void setCollar(bool c){ collar = c; }
    void setArenero(bool a){ arenero = a; }
    void setAgresivo(bool a){ agresivo = a; }
    // Funciones
    void hacerSonido() override {
        std::cout << "Miau miau!" << std::endl;
    }
    void hacerDelBanio(){
        std::cout << "Salio todo bien de mi :)" << std::endl;
    }
};

#endif
