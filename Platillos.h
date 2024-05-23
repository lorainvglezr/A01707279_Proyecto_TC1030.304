// Nombre: Lorain Valeria González Rivas
// Matrícula: A01707279
// Fecha: Jueves, 23 de mayo de 2024
// Materia: Programación orientada a objetos (Gpo 304)

/**
 * Clase Platillo, en donde se manejan las características generales
 * de las opciones de platillo del menú, estas se
 * asignaron predeterminadamente a cada uno de los platillos.
 */

// Bibliotecas
#include <iostream>
#include <string>

#ifndef PLATILLOS_H
#define PLATILLOS_H

// Creación de clase "Platillos"
class Platillos{
private:
    // Declaración de variables de instancia
    std::string nombre_platillo;
    float precio;
    int cant_ingredientes;
    int cant_personas;
    float calorias;
    std::string color;
    std::string proteina;
    std::string verduras;
public:
    // Constructor
    Platillos(): nombre_platillo(""), precio(0), cant_ingredientes(0), cant_personas(0), calorias(0), color(""), proteina(""), verduras(""){};
    Platillos(std::string nom_plato, float pre, int can_ingre, int can_per, float cal, std::string col, std::string prote, std::string verdu): nombre_platillo(nom_plato), precio(pre), cant_ingredientes(can_ingre), cant_personas(can_per), calorias(cal), color(col), proteina(prote), verduras(verdu){};

    // Métodos miembros de la clase
    // Getters
    std::string get_nombre_platillo();
    float get_precio();
    int get_cant_ingredientes();
    int get_cant_personas();
    float get_calorias();
    std::string get_color();
    std::string get_proteina();
    std::string get_verduras();
    // Setters
    void set_nombre_platillo(std::string);
    void set_precio(float);
    void set_cant_ingredientes(int);
    void set_cant_personas(int);
    void set_calorias(float);
    void set_color(std::string);
    void set_proteina(std::string);
    void set_verduras(std::string);
};

// Especificaciones getters
std::string Platillos::get_nombre_platillo(){
    return nombre_platillo;
}
float Platillos::get_precio(){
    return precio;
}
int Platillos::get_cant_ingredientes(){
    return cant_ingredientes;
}
int Platillos::get_cant_personas(){
    return cant_personas;
}
float Platillos::get_calorias(){
    return calorias;
}
std::string Platillos::get_color(){
    return color;
}
std::string Platillos::get_proteina(){
    return proteina;
}
std::string Platillos::get_verduras(){
    return verduras;
}

// Especificaciones setters
void Platillos::set_nombre_platillo(std::string nom_plato){
    nombre_platillo = nom_plato;
}
void Platillos::set_precio(float pre){
    precio = pre;
}
void Platillos::set_cant_ingredientes(int can_ingre){
    cant_ingredientes = can_ingre;
}
void Platillos::set_cant_personas(int can_per){
    cant_personas = can_per;
}
void Platillos::set_calorias(float cal){
    calorias = cal;
}
void Platillos::set_color(std::string col){
    color = col;
}
void Platillos::set_proteina(std::string prote){
    proteina = prote;
}
void Platillos::set_verduras(std::string verdu){
    verduras = verdu;
}
#endif
