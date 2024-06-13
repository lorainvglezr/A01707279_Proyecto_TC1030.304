/*
 * Proyecto Restaurante
 * Lorain Valeria González Rivas
 * A01707279
 * 13 de junio de 2024
 */

/*
 * En este archivo se encuentra la clase llamada Restaurante, la cual
 * imprime todos los atributos de las clases Mesero y ChefComida.
 * Esto se debe al polimorfismo implementado en la presenta clase.
 */

// Bibliotecas
#include <iostream>
#include <string>
#include <sstream>

//Archivo del proyecto para desempeñar las funciones necesarias
#include "Personas.h"

#ifndef RESTARURANTE_H
#define RESTARURANTE_H

// Declaración de clase Restaurante
class Restaurante{
// Variables privadas de instancia de la clase Restaurante
private:
    std::string nombre;
    std::string direccion;
    Personas * Empleados[30]; // Apuntador tipo Personas para usar polimorfismo
    int id;
// Atributos públicos
public:
    /*
     * Constructor por default
     *
     * @param
     * @return Objeto Restaurante
     */
    Restaurante(): nombre(""),direccion(""), id(0){};
    /*
     * Constructor (sobrecarga)
     *
     * @param nom, dir
     * @return Objeto Restaurante
     */
    Restaurante(std::string nom, std::string dir): nombre(nom),direccion(dir), id(0){};
    
    ~Restaurante() // Inicialización de destructor
    {
        for (int i = 0; i < id; i++) // Ciclo for que itera desde 0 hasta id-1 (todos los objetos creados en el heap)
            delete Empleados[i]; // Elimina el objeto Empleado en la posición i del arreglo Empleados
    }
    
    // Métodos miembros de la clase
    // Getters
    std::string get_nombre();
    std::string get_direccion();
    // Setters
    void set_nombre(std::string);
    void set_direccion(std::string);
    // Métodos específicos miembros de la clase
    void crea_empleados();
    void muestra_empleados();
};
/*
 * getter de variable nombre
 * Regresa el nombre del restaurante
 *
 * @param
 * @return nombre
 */
std::string Restaurante::get_nombre() {
    return nombre;
}
/*
 * getter de variable direccion
 * Regresa la dirección del restaurante
 *
 * @param
 * @return direccion
 */
std::string Restaurante::get_direccion() {
    return direccion;
}
/*
 * setter de variable nombre
 * Asigna a la variable un string que recibe del objeto
 *
 * @param nom
 * @return
 */
void Restaurante::set_nombre(std::string nom) {
    nombre = nom;
}
/*
 * setter de variable direccion
 * Asigna a la variable un string que recibe del objeto
 *
 * @param dir
 * @return
 */
void Restaurante::set_direccion(std::string dir) {
    direccion = dir;
}
/*
 * Función crea_empleados
 * Crea nuevos objetos de tipo Mesero y ChefComida que se le asignan
 * al arreglo de Empleados en la posición id. Posteriormente, se
 * incrementa el valor del id para la próxima posición en el arreglo.
 * Agrega objetos de cada una de las clases en la memoria dinámica
 * para el correcto funcionamiento del polimorfismo
 *
 * @param
 * @return
 */
void Restaurante::crea_empleados(){
    Empleados[id]= new Mesero("Maite Ruíz", 27, "Femenino", 15036.48, 15.6);
    id++;
    Empleados[id]= new Mesero("Pascual Gabarri", 33, "Masculino", 17894.03, 12.3);
    id++;
    Empleados[id]= new Mesero("Maria Luz Carvajal", 34, "Femenino", 16450.76, 18.4);
    id++;
    Empleados[id]= new ChefComida("Leisa González", 25, "Femenino", "Enchiladas Verdes", 15, "Mauricio Martínez", "Paella Española");
    id++;
    Empleados[id]= new ChefComida("Nicolás García", 36, "Masculino", "Cochinita Pibil", 23, "Claudia Sosa", "Mole");
    id++;
    Empleados[id]= new ChefComida("Daniel Moreno", 42, "Masculino", "Pozole Rojo", 62, "María López", "Bandeja Paisa Colombiana");
    id++;
}
/*
 * Función muestra_empleados
 * Se genera un ciclo for que itera desde 0 hasta id-1, esto para luego
 * llamar al método mostrar_info() de cada objeto Empleado en el arreglo Empleados.
 *
 * @param
 * @return
 */
void Restaurante::muestra_empleados(){
    for(int i=0; i<id;i++){
        Empleados[i]-> mostrar_info();
    }
}
#endif
