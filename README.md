# README

## Authors

- [@TrtIvan](https://github.com/TrtIvan)
- [@M4NY29](https://github.com/M4NY29)

## License

[MIT](https://choosealicense.com/licenses/mit/)

## Clases

### clase.cpp

**Description:**
This file contains the implementation of C++ classes for a hierarchical structure with two parent classes (Padre1 and Padre2) and two child classes (Hija1 and Hija2). It demonstrates the use of constructors, destructors, virtual functions, and method overriding.

**Usage:**
To run the program, compile and execute the `main` function. It creates instances of Hija1 and Hija2, calls their methods, and showcases method access using the scope resolution operator.

## Directivas y macros

### Animal.h

**Description:**
This header file defines an abstract class `Animal` with properties such as name, age, weight, and color. It also includes getter and setter methods, a pure virtual function `hacerSonido()`, and a `describir()` method for displaying information about the animal.

### Gato.h

**Description:**
This header file extends the Animal class to create a derived class `Gato` representing a cat. It includes additional properties like breed, collar, arenero, and agresivo. The `hacerSonido()` function is overridden to produce a cat-specific sound, and a custom function `hacerDelBanio()` is added.

### main.cpp

**Description:**
The main file demonstrates the use of the Animal and Gato classes. It creates instances of a Perro (dog) and a Gato (cat), calls their methods, and showcases the use of operators and macros.

### Perro.h

**Description:**
This header file extends the Animal class to create a derived class `Perro` representing a dog. It includes additional properties like breed, pedigree, castrado, and enfermedades. The `hacerSonido()` function is overridden, and a custom function `hacerDelBanio()` is added.

## Operadores

### sobrecargaOperadores2.cpp

**Description:**
This file showcases operator overloading in C++. It defines a class `NumeroComplejo` representing complex numbers and demonstrates the overloading of operators such as +, ++ (prefix and postfix), =, <<, >>, and the custom operator +=.

**Usage:**
Compile and execute the `main` function to see the results of the operator overloading.

## Parcial

### parcial2.cpp

**Description:**
This file represents a partial exam with a structure for grades and an abstract class `AbstractMecatronicsCourse`. It includes two derived classes, `Kinematics` and `ControlSystems`, with an additional class `MecatronicsCourseCombination` demonstrating multiple inheritance. The program creates instances of these classes and uses polymorphism.

**Usage:**
Compile and execute the `main` function to see the results of the partial exam.

## POO general

### abarrotes.cpp

**Description:**
This file demonstrates object-oriented programming concepts in C++. It defines a class `Producto` representing a product with a default constructor, parameterized constructor, copy constructor, and a destructor. It also includes a friend class `Tienda` and a friend function `imprimirProducto()`.

**Usage:**
Compile and execute the `main` function to see the interactions between products and the store.