// Nombre: Lorain Valeria González Rivas
// Matrícula: A01707279
// Fecha: Jueves, 16 de mayo de 2024
// Materia: Programación orientada a objetos (Gpo 304)

/**
 * Clase padre Personas, en donde se manejan las características de
 * un individuo en general, el cual puede ser un cliente, un chef o un mesero (clases hijas).
 */

// Bibliotecas
#include <iostream>
#include <string>

#ifndef PERSONAS_H
#define PERSONAS_H

// Creación de clase padre "Personas"
class Personas{
private:
    // Declaración de variables de instancia
    std::string nombre;
    int edad;
    std::string genero;
public:
    // Constructor
    Personas(): nombre(""), edad(0), genero(""){};
    Personas(std::string nom, int ed, std::string gen): nombre(nom), edad(ed), genero(gen){};

    // Métodos miembros de la clase
    // Getters
    std::string get_nombre();
    int get_edad();
    std::string get_genero();
    // Setters
    void set_nombre(std::string);
    void set_edad(int);
    void set_genero(std::string);
};

// Especificaciones de getters
std::string Personas::get_nombre(){
    return nombre;
}
int Personas::get_edad(){
    return edad;
}
std::string Personas::get_genero(){
    return genero;
}

// Especificaciones setters
void Personas::set_nombre(std::string nom){
    nombre = nom;
}
void Personas::set_edad(int ed){
    edad = ed;
}
void Personas::set_genero(std::string gen){
    genero = gen;
}


// Creación de clase hija "Cliente", hereda de clase padre "Personas"
class Cliente: public Personas{
private:
    // Declaración de variables de instancia
    float disp_dinero;
    // Objeto de tipo Platillo, inicio composición de la clase "Platillos"
    Platillos platillo1;
    Platillos platillo2;
    Platillos platillo3;
public:
    // Constructor
    Cliente(): Personas(), disp_dinero(0){};
    Cliente(std::string nom, int ed, std::string gen, float dis_din): Personas(nom, ed, gen), disp_dinero(dis_din){};

    // Métodos miembros de la clase
    // Getters
    float get_disp_dinero();
    Platillos get_platillo1();
    Platillos get_platillo2();
    Platillos get_platillo3();
    // Setters
    void set_disp_dinero(float);
    void set_platillo1();
    void set_platillo2();
    void set_platillo3();
    void imprimir_platillo(Platillos platillo);
};

// Especificaciones getters
float Cliente::get_disp_dinero(){
    return disp_dinero;
}
Platillos Cliente::get_platillo1(){
    return platillo1;
}
Platillos Cliente::get_platillo2(){
    return platillo2;
}
Platillos Cliente::get_platillo3(){
    return platillo3;
}

// Especificaciones setters
void Cliente::set_disp_dinero(float dis_din){
    disp_dinero = dis_din;
}
// Declaración de valores predeterminados en el platillo 1
void Cliente::set_platillo1(){
    Platillos plato1("Enchiladas", 122.64, 12, 1, 168, "Verde", "Pollo", "Cebolla y cilantro");
    platillo1 = plato1;
}
// Declaración de valores predeterminados en el platillo 2
void Cliente::set_platillo2(){
    Platillos plato2("Chilaquiles", 102.46, 12, 1, 486, "Rojo", "Huevo estrellado", "Cebolla y cilantro");
    platillo2 = plato2;
}
// Declaración de valores predeterminados en el platillo 3
void Cliente::set_platillo3(){
    Platillos plato3("Pozole", 125.51, 23, 2, 240, "Rojo", "Cerdo", "Cilantro y rabano");
    platillo3 = plato3;
}
// Uso de los getters, para imprimir en consola los valores de las variables de los platillos
void Cliente::imprimir_platillo(Platillos platillo){
    std::cout << "Nombre: " << platillo.get_nombre_platillo() << std::endl;
    std::cout << "Precio: " << platillo.get_precio() << std::endl;
    std::cout << "Cantidad de ingredientes: " << platillo.get_cant_ingredientes() << std::endl;
    std::cout << "Cantidad de personas por plato: " << platillo.get_cant_personas() << std::endl;
    std::cout << "Calorias: " << platillo.get_calorias() << std::endl;
    std::cout << "Color: " << platillo.get_color() << std::endl;
    std::cout << "Tipo de proteina: " << platillo.get_proteina() << std::endl;
    std::cout << "Verduras: " << platillo.get_verduras() << std::endl;
}

// Creación de clase hija "Mesero", hereda de clase padre "Personas"
class Mesero: public Personas{
private:
    // Declaración de variables de instancia
    float salario;
    float propinas;
public:
    // Constructor
    Mesero(): Personas(), salario(0), propinas(0){};
    Mesero(std::string nom, int ed, std::string gen, float sal, float prop): Personas(nom, ed, gen), salario(sal), propinas(prop){};

    // Métodos miembros de la clas
    // Getters
    float get_salario();
    float get_propinas();
    // Setters
    void set_salario(float);
    void set_propinas(float);
};

// Especificaciones getters
float Mesero::get_salario(){
    return salario;
}
float Mesero::get_propinas(){
    return propinas;
}
// Especificaciones setters
void Mesero::set_salario(float sal){
    salario = sal;
}
void Mesero::set_propinas(float prop){
    propinas = prop;
}

// Creación de clase hija "ChefComida", hereda de clase padre "Personas"
class ChefComida: public Personas{
private:
    // Declaración de variables de instancia
    std::string especialidad1;
    int meses_experiencia1;
    std::string sousChef_SoN1;
    std::string comida_favorita;
public:
    // Constructor
    ChefComida(): Personas(), especialidad1(""), meses_experiencia1(0), sousChef_SoN1(""), comida_favorita(""){};
    ChefComida(std::string nom, int ed, std::string gen, std::string espe1, int mes_exp1, std::string soChef_sn1, std::string com_fav): Personas(nom, ed, gen), especialidad1(espe1), meses_experiencia1(mes_exp1), sousChef_SoN1(soChef_sn1), comida_favorita(com_fav){};

    // Métodos miembros de la clase
    // Getters
    std::string get_especialidad1();
    int get_meses_experiencia1();
    std::string get_sousChef_SoN1();
    std::string get_comida_favorita();
    // Setters
    void set_especialidad1(std::string);
    void set_meses_experiencia1(int);
    void set_sousChef_SoN1(std::string);
    void set_comida_favorita(std::string);
};

// Especificaciones getters
std::string ChefComida::get_especialidad1(){
    return especialidad1;
}
int ChefComida::get_meses_experiencia1(){
    return meses_experiencia1;
}
std::string ChefComida::get_sousChef_SoN1(){
    return sousChef_SoN1;
}
std::string ChefComida::get_comida_favorita(){
    return comida_favorita;
}

// Especificaciones setters
void ChefComida::set_especialidad1(std::string espe1){
    especialidad1 = espe1;
}
void ChefComida::set_meses_experiencia1(int mes_exp1){
    meses_experiencia1 = mes_exp1;
}
void ChefComida::set_sousChef_SoN1(std::string soChef_sn1){
    sousChef_SoN1 = soChef_sn1;
}
void ChefComida::set_comida_favorita(std::string com_fav){
    comida_favorita = com_fav;
}

#endif