/*
 * Proyecto Restaurante
 * Lorain Valeria González Rivas
 * A01707279
 * 13 de junio de 2024
 */

/*
 * En este archivo se encuentra la clase Platillos, en donde se
 * establecen todas las variables y métodos a utilizar para la
 * predeterminación de los platillos que se despliegan en el menú. 
 */

// Bibliotecas
#include <iostream>
#include <string>

#ifndef PLATILLOS_H
#define PLATILLOS_H

// Clase Platillos
class Platillos{
// Variables privadas de instancia la clase Platillos
private:
    std::string nombrePlatillo;
    float precio;
    int ingredientesTotales;
    int numeroPersonas;
    float calorias;
    std::string color;
    std::string proteina;
    std::string verduras;
// Atributos públicos
public:
    /*
     * Constructor por default
     *
     * @param
     * @return Objeto Platillos
     */
    Platillos(): nombrePlatillo(""), precio(0), ingredientesTotales(0), numeroPersonas(0), calorias(0), color(""), proteina(""), verduras(""){};
    /*
     * Constructor (sobrecarga)
     *
     * @param nomPlato, pre, ingreTot, numPer, cal, col, prote, verdu
     * @return Objeto Platillos
     */
    Platillos(std::string nomPlato, float pre, int ingreTot, int numPer, float cal, std::string col, std::string prote, std::string verdu): nombrePlatillo(nomPlato), precio(pre), ingredientesTotales(ingreTot), numeroPersonas(numPer), calorias(cal), color(col), proteina(prote), verduras(verdu){};

    // Métodos miembros de la clase
    // Getters
    std::string get_nombrePlatillo();
    float get_precio();
    int get_ingredientesTotales();
    int get_numeroPersonas();
    float get_calorias();
    std::string get_color();
    std::string get_proteina();
    std::string get_verduras();
    //Setters
    void set_nombrePlatillo(std::string);
    void set_precio(float);
    void set_ingredientesTotales(int);
    void set_numeroPersonas(int);
    void set_calorias(float);
    void set_color(std::string);
    void set_proteina(std::string);
    void set_verduras(std::string);
};
/*
 * getter de variable nombrePlatillo
 * Regresa el nombre del platillo
 *
 * @param
 * @return nombrePlatillo
 */
std::string Platillos::get_nombrePlatillo(){
    return nombrePlatillo;
}
/*
 * getter de variable precio
 * Regresa el precio del platillo
 *
 * @param
 * @return precio
 */
float Platillos::get_precio(){
    return precio;
}
/*
 * getter de variable ingredientesTotatles
 * Regresa el número de ingredientes totales que tiene el platillo
 *
 * @param
 * @return ingredientesTotatles
 */
int Platillos::get_ingredientesTotales(){
    return ingredientesTotales;
}
/*
 * getter de variable numeroPersonas
 * Regresa el número de personas para las que se sugiere el consumo
 * del platillo
 *
 * @param
 * @return numeroPersonas
 */
int Platillos::get_numeroPersonas(){
    return numeroPersonas;
}
/*
 * getter de variable calorias
 * Regresa el número de calorías que se piensa que el
 * platillo contiene
 *
 * @param
 * @return calorias
 */
float Platillos::get_calorias(){
    return calorias;
}
/*
 * getter de variable color
 * Regresa el color de la salsa o de los componentes generales
 * del platillo
 *
 * @param
 * @return numeroPersonas
 */
std::string Platillos::get_color(){
    return color;
}
/*
 * getter de variable proteina
 * Regresa las proteínas que lleva el platillo
 *
 * @param
 * @return proteina
 */
std::string Platillos::get_proteina(){
    return proteina;
}
/*
 * getter de variable verduras
 * Regresa las verduras que lleva el platillo
 *
 * @param
 * @return verduras
 */
std::string Platillos::get_verduras(){
    return verduras;
}
/*
 * setter de variable nombrePlatillo
 * Asigna a la variable un string que recibe del objeto
 *
 * @param nomPlato
 * @return
 */
void Platillos::set_nombrePlatillo(std::string nomPlato){
    nombrePlatillo = nomPlato;
}
/*
 * setter de variable precio
 * Asigna a la variable un float que recibe del objeto
 *
 * @param pre
 * @return
 */
void Platillos::set_precio(float pre){
    precio = pre;
}
/*
 * setter de variable ingredientesTotales
 * Asigna a la variable un integer que recibe del objeto
 *
 * @param ingreTot
 * @return
 */
void Platillos::set_ingredientesTotales(int ingreTot){
    ingredientesTotales = ingreTot;
}
/*
 * setter de variable numeroPersonas
 * Asigna a la variable un integer que recibe del objeto
 *
 * @param numPer
 * @return
 */
void Platillos::set_numeroPersonas(int numPer){
    numeroPersonas = numPer;
}
/*
 * setter de variable calorias
 * Asigna a la variable un float que recibe del objeto
 *
 * @param cal
 * @return
 */
void Platillos::set_calorias(float cal){
    calorias = cal;
}
/*
 * setter de variable color
 * Asigna a la variable un string que recibe del objeto
 *
 * @param col
 * @return
 */
void Platillos::set_color(std::string col){
    color = col;
}
/*
 * setter de variable proteina
 * Asigna a la variable un string que recibe del objeto
 *
 * @param prote
 * @return
 */
void Platillos::set_proteina(std::string prote){
    proteina = prote;
}
/*
 * setter de variable verduras
 * Asigna a la variable un string que recibe del objeto
 *
 * @param verdu
 * @return
 */
void Platillos::set_verduras(std::string verdu){
    verduras = verdu;
}
#endif
