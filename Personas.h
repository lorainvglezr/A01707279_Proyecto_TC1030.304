/*
 * Proyecto Restaurante
 * Lorain Valeria González Rivas
 * A01707279
 * 13 de junio de 2024
 */

/*
 * En este archivo se encuentra la clase abstracta Personas, que es la clase padre,
 * así como también hay 3 clases hijas que son Cliente, Mesero y ChefComida. De la clase
 * padre se heredan los atributos de nombre, edad y género, además está el
 * método de mostrar_info que será sobreescrito. Cada clase
 * agrega atributos y métodos propios.
 */

// Bibliotecas
#include <iostream>
#include <string>
#include <sstream>

//Archivo del proyecto para desempeñar las funciones necesarias
#include "Platillos.h"

#ifndef PERSONAS_H
#define PERSONAS_H

// Clase padre abstracta Personas
class Personas{
protected:
    // Variables protegidas de instancia la clase Personas
    std::string nombre;
    int edad;
    std::string genero;
// Atributos públicos
public:
    /*
     * Constructor por default
     *
     * @param
     * @return Objeto Personas
     */
    Personas() : nombre(""), edad(0), genero(""){};
    /*
     * Constructor (sobrecarga)
     *
     * @param nom, ed, gen
     * @return Objeto Personas
     */
    Personas(std::string nom, int ed, std::string gen) : nombre(nom), edad(ed), genero(gen){};
    
    virtual ~Personas(){}; // Declaración de destructor virtual para clase Restaurante (implementa polimorfismo)
    
    // Métodos miembros de la clase
    // Getters
    std::string get_nombre();
    int get_edad();
    std::string get_genero();
    //Setters
    void set_nombre(std::string);
    void set_edad(int);
    void set_genero(std::string);
    // Método abstracto que será sobreescrito
    virtual void mostrar_info() = 0;
};
/*
 * getter de variable nombre
 * Regresa el nombre de la persona
 *
 * @param
 * @return nombre
 */
std::string Personas::get_nombre(){
    return nombre;
}
/*
 * getter de variable edad
 * Regresa la edad de la persona
 *
 * @param
 * @return edad
 */
int Personas::get_edad(){
    return edad;
}
/*
 * getter de variable genero
 * Regresa el genero de la persona
 *
 * @param
 * @return genero
 */
std::string Personas::get_genero(){
    return genero;
}
/*
 * setter de variable nombre
 * Asigna a la variable un string que recibe del objeto
 *
 * @param nom
 * @return
 */
void Personas::set_nombre(std::string nom){
    nombre = nom;
}
/*
 * setter de variable edad
 * Asigna a la variable un integer que recibe del objeto
 *
 * @param ed
 * @return
 */
void Personas::set_edad(int ed){
    edad = ed;
}
/*
 * setter de variable genero
 * Asigna a la variable un string que recibe del objeto
 *
 * @param gen
 * @return
 */
void Personas::set_genero(std::string gen){
    genero = gen;
}


// Declaración de la clase Cliente que hereda de la clase Personas
class Cliente : public Personas{
// Declaro las variables privadas de instancia
private:
    float dineroDisponible;
    Platillos plato[3]; // Variable que recibe arreglo de tipo Platillos
    int numeroPlatillos;
// Atributos públicos
public:
    /*
     * Constructor por default
     *
     * @param
     * @return Objeto Cliente
     */
    Cliente() : Personas(), dineroDisponible(0), numeroPlatillos(0){};
    /*
     * Constructor (sobrecarga)
     *
     * @param nom, ed, gen, dinDisp
     * @return Objeto Cliente
     */
    Cliente(std::string nom, int ed, std::string gen, float dinDisp) : Personas(nom, ed, gen), dineroDisponible(dinDisp), numeroPlatillos(0){};
    
    // Métodos miembros de la clase
    // Getters
    float get_dineroDisponible();
    Platillos get_plato(int);
    // Setters
    void set_dineroDisponible(float);

    void add_plato(Platillos &); // Método para agregar un platillo al cliente
    void imprimir_plato(int); // Método para imprimir la información de un platillo
    void mostrar_info() override; // Método sobreescrito para mostrar la información del cliente
};
/*
 * getter de variable dineroDisponible
 * Regresa la cantidad de dinero disponible del cliente
 *
 * @param
 * @return dineroDisponible
 */
float Cliente::get_dineroDisponible(){
    return dineroDisponible;
}
/*
 * getter de variable plato
 * Regresa el plato seleccionado del arreglo
 *
 * @param
 * @return plato[n]
 */
Platillos Cliente::get_plato(int n){
    return plato[n];
}
/*
 * setter de variable dineroDisponible
 * Asigna a la variable un float que recibe del objeto
 *
 * @param dinDisp
 * @return
 */
void Cliente::set_dineroDisponible(float dinDisp){
    dineroDisponible = dinDisp;
}
/*
 * Función llamada add_plato
 * Asigna el objeto Platillos P al elemento numeroPlatillos del
 * arreglo plato. Incrementa el contador numeroPlatillos en 1 para
 * indicar que se ha agregado un nuevo platillo
 *
 * @param &P
 * @return
 */
void Cliente::add_plato(Platillos &P){
    plato[numeroPlatillos] = P;
    numeroPlatillos ++;
}
/*
 * Función llamada imprimir_plato
 * Imprime el nombre, precio, cantidad de ingredientes, cantidad
 * de personas por plato, calorías, color, tipo de proteína y
 * verduras del plato seleccionado por el cliente, esto
 * en la posición n del arreglo plato.
 *
 * @param n
 * @return
 */
void Cliente::imprimir_plato(int n){
    std::cout << "Nombre: " << plato[n].get_nombrePlatillo() << std::endl;
    std::cout << "Precio: " << plato[n].get_precio() << std::endl;
    std::cout << "Cantidad de ingredientes: " << plato[n].get_ingredientesTotales() << std::endl;
    std::cout << "Cantidad de personas por plato: " << plato[n].get_numeroPersonas() << std::endl;
    std::cout << "Calorías: " << plato[n].get_calorias() << std::endl;
    std::cout << "Color: " << plato[n].get_color() << std::endl;
    std::cout << "Tipo de proteina: " << plato[n].get_proteina() << std::endl;
    std::cout << "Verduras: " << plato[n].get_verduras() << std::endl;
}
/*
 * Función llamada mostrar_info
 * Imprime el nombre, la edad y el género del cliente, utilizando
 * el puntero "this" para acceder al miembro de la clase.
 *
 * @param
 * @return
 */
void Cliente::mostrar_info(){
    std::cout << "Nombre completo: " << this-> nombre;
    std::cout << "Edad: " << this-> edad;
    std::cout << "Género: " << this-> genero << std::endl;
}


// Declaración de la clase Mesero que hereda de la clase Personas
class Mesero : public Personas{
// Declaro las variables privadas de instancia
private:
    float salario;
    float propinas;
// Atributos públicos
public:
    /*
     * Constructor por default
     *
     * @param
     * @return Objeto Mesero
     */
    Mesero() : Personas(), salario(0), propinas(0){};
    /*
     * Constructor (sobrecarga)
     *
     * @param nom, ed, gen, sal, prop
     * @return Objeto Mesero
     */
    Mesero(std::string nom, int ed, std::string gen, float sal, float prop) : Personas(nom, ed, gen), salario(sal), propinas(prop){};
    
    // Métodos miembros de la clase
    // Getters
    float get_salario();
    float get_propinas();
    // Setters
    void set_salario(float);
    void set_propinas(float);
    // Método sobreescrito para mostrar la información del mesero
    void mostrar_info() override;
};
/*
 * getter de variable salario
 * Regresa el salario del mesero
 *
 * @param
 * @return salario
 */
float Mesero::get_salario(){
    return salario;
}
/*
 * getter de variable propinas
 * Regresa las propinas que le dejan al mesero
 *
 * @param
 * @return propinas
 */
float Mesero::get_propinas(){
    return propinas;
}
/*
 * setter de variable salario
 * Asigna a la variable un float que recibe del objeto
 *
 * @param sal
 * @return
 */
void Mesero::set_salario(float sal){
    salario = sal;
}
/*
 * setter de variable propinas
 * Asigna a la variable un float que recibe del objeto
 *
 * @param prop
 * @return
 */
void Mesero::set_propinas(float prop){
    propinas = prop;
}
/*
 * Función llamada mostrar_info
 * Imprime el nombre, la edad, el género, el salario mensual y
 * las propinas del mesero, esto accediendo a los métodos de la clase.
 *
 * @param
 * @return
 */
void Mesero::mostrar_info(){
    std::cout << "Nombre completo: " << get_nombre() << std::endl;
    std::cout << "Edad: " << get_edad() << std::endl;
    std::cout << "Género: " << get_genero() << std::endl;
    std::cout << "Salario mensual del mesero: " << get_salario() << " pesos mexicanos" << std::endl;
    std::cout << "Propinas: " << get_propinas() << " pesos mexicanos" << std::endl;
    std::cout<< std::endl;
}


// Declaración de la clase ChefComida que hereda de la clase Personas
class ChefComida : public Personas{
// Declaro las variables privadas de instancia
private:
    std::string especialidad;
    int mesesExperiencia;
    std::string sousChef;
    std::string comidaFavorita;
// Atributos públicos
public:
    /*
     * Constructor por default
     *
     * @param
     * @return Objeto ChefComida
     */
    ChefComida() : Personas(), especialidad(""), mesesExperiencia(0), sousChef(""), comidaFavorita(""){};
    /*
     * Constructor (sobrecarga)
     *
     * @param nom, ed, gen, espe, mesExp, soChe, comFav
     * @return Objeto ChefComida
     */
    ChefComida(std::string nom, int ed, std::string gen, std::string espe, int mesExp, std::string soChe, std::string comFav) : Personas(nom, ed, gen), especialidad(espe), mesesExperiencia(mesExp), sousChef(soChe), comidaFavorita(comFav){};
    
    // Métodos miembros de la clase
    // Getters
    std::string get_especialidad();
    int get_mesesExperiencia();
    std::string get_sousChef();
    std::string get_comidaFavorita();
    //Setters
    void set_especialidad(std::string);
    void set_mesesExperiencia(int);
    void set_sousChef(std::string);
    void set_comidaFavorita(std::string);
    // Método sobreescrito para mostrar la información del chef
    void mostrar_info() override;
};
/*
 * getter de variable especialidad
 * Regresa la especialidad del chef del restaurante
 *
 * @param
 * @return especialidad
 */
std::string ChefComida::get_especialidad(){
    return especialidad;
}
/*
 * getter de variable mesesExperiencia
 * Regresa los meses que el chef tiene de experiencia laboral
 *
 * @param
 * @return mesesExperiencia
 */
int ChefComida::get_mesesExperiencia(){
    return mesesExperiencia;
}
/*
 * getter de variable sousChef
 * Regresa el nombre del respectivo sous chef de cada uno
 * de los chefs del restaurante
 *
 * @param
 * @return sousChef
 */
std::string ChefComida::get_sousChef(){
    return sousChef;
}
/*
 * getter de variable comidaFavorita
 * Regresa la comida favorita del chef
 *
 * @param
 * @return comidaFavorita
 */
std::string ChefComida::get_comidaFavorita(){
    return comidaFavorita;
}
/*
 * setter de variable especialidad
 * Asigna a la variable un string que recibe del objeto
 *
 * @param espe
 * @return
 */
void ChefComida::set_especialidad(std::string espe) {
    especialidad = espe;
}
/*
 * setter de variable mesesExperiencia
 * Asigna a la variable un integer que recibe del objeto
 *
 * @param mesExp
 * @return
 */
void ChefComida::set_mesesExperiencia(int mesExp) {
    mesesExperiencia = mesExp;
}
/*
 * setter de variable sousChef
 * Asigna a la variable un string que recibe del objeto
 *
 * @param soChe
 * @return
 */
void ChefComida::set_sousChef(std::string soChe) {
    sousChef = soChe;
}
/*
 * setter de variable comidaFavorita
 * Asigna a la variable un string que recibe del objeto
 *
 * @param comFav
 * @return
 */
void ChefComida::set_comidaFavorita(std::string comFav) {
    comidaFavorita = comFav;
}
/*
 * Función llamada mostrar_info
 * Imprime el nombre, la edad, el género, la especialidad, los meses de
 * experiencia, nombre del souschef y la comida favorita
 * del chef. Se hace uso del puntero "this" para acceder a
 * los métodos miembros de la clase.
 *
 * @param
 * @return
 */
void ChefComida::mostrar_info() {
    std::cout << "Nombre completo: " << this-> nombre << std::endl;
    std::cout << "Edad: " << this-> edad << std::endl;
    std::cout << "Género: " << this-> genero << std::endl;
    std::cout << "Especialidad: " << this-> especialidad << std::endl;
    std::cout << "Meses experiencia: " << this-> mesesExperiencia << std::endl;
    std::cout << "Nombre del SousChef: " << this-> sousChef << std::endl;
    std::cout << "Comida favorita del Chef: " << this-> comidaFavorita << std::endl;
    std::cout<< std::endl;
}

#endif
