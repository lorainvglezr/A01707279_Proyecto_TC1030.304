// Nombre: Lorain Valeria Gonzalez Rivas
// Matricula: A01707279
// Fecha: Jueves, 23 de mayo de 2024
// Materia: Programacion orientada a objetos (Gpo 304)

// Descripcion: este es un proyecto demo para la clase de Programación orientada a objetos
// Este programa simula un restaurante mexicano, en donde se le da al cliente a elegir 1 de entre 3 opciones predeterminadas
// con datos concretos acerca de la comida que selecciono, asi como los datos de personales del cliente, del chef y
// los datos generales del mesero que se le asigno.


// Bibliotecas
#include <iostream>
#include <string>
#include "Platillos.h"
#include "Personas.h"

// Menu
void menu() {
    // Se imprimen las opciones en pantalla
    std::cout << std::endl;
    std::cout << "------------ MENU ------------"<< std::endl;
    std::cout << "1. Enchiladas" << std::endl;
    std::cout << "2. Chilaquiles" << std::endl;
    std::cout << "3. Pozole" << std::endl;
    std::cout << "4. Salir" << std::endl;
}

// Funcion principal
int main(){
    // Impresion de mensaje de bienvenida
    std::cout << "      Bienvenido al Restaurante Mexicano      " << std::endl;
    std::cout << "------------ LA CASONA DE LA ABUELA ------------" << std::endl;
    std::cout << std::endl;

    // Se llama a la clase "Cliente" y se crea un atributo de tipo "Cliente"
    Cliente cliente;

    // Atributos de clase "Cliente"
    std::string nombre;
    int edad;
    std::string genero;
    float disp_dinero;

    // Atributos del main
    std::string opcion;
    bool continua = true;

    // Interaccion con el usuario para recolectar las variables del cliente
    std::cout << "Por favor, introduzca su nombre: ";
    std::cin >> nombre;
    cliente.set_nombre(nombre);
    std::cout << "Ingrese su edad: ";
    std::cin >> edad;
    cliente.set_edad(edad);
    std::cout << "Introduzca su genero: ";
    std::cin >> genero;
    cliente.set_genero(genero);
    std::cout << "Ingrese su disponibilidad de dinero: ";
    std::cin >> disp_dinero;
    cliente.set_disp_dinero(disp_dinero);

    /** Uso de la clase "Mesero", en donde se establecen valores predeterminados
     * de las variables y se hace uso de las funciones del documento llamado
     * "Personas.h" que se establecieron para la clase "Mesero"
     */
    Mesero mesero("Lorenzo", 27, "Hombre", 43050.85, 15.6);

    /** Uso de la clase "ChefComida", en donde se establecen valores predeterminados
     * de las variables y se hace uso de las funciones del documento llamado
     * "Personas.h" que se establecieron para la clase "ChefComida"
     */
    ChefComida chef_comida("Leisa", 24, "Mujer", "Enchiladas", 41, "Si", "Pambazos");

    // Uso de los setters de la clase "Cliente" hechos para los variables de tipo Platillos
    cliente.set_platillo1();
    cliente.set_platillo2();
    cliente.set_platillo3();

    // Ciclo while que indica que mientras continua sea true, se repetira en bucle
    while (continua){
        // Impresion de instrucciones y menú
        menu();
        std::cout << "Si no desea continuar, escoja la opcion '4. Salir'" << std::endl;
        std::cout << "De lo contrario, elija una opcion del menu: ";
        std::cin >> opcion;
        std::cout << std::endl;

        // Creacion de condicional para que el usuario elija la opcion de comida predeterminada
        // En las opciones, se hacen uso de los atributos platillos y del metodo imprimir
        if (opcion == "1"){
            std::cout << "---------- PLATILLO SELECCIONADO ----------" << std::endl;

            cliente.imprimir_platillo(cliente.get_platillo1());
        }
        else if (opcion == "2"){
            std::cout << "---------- ACERCA DEL PLATILLO QUE USTED SELECCIONO... ----------" << std::endl;
            cliente.imprimir_platillo(cliente.get_platillo2());
        }
        else if (opcion == "3"){
            std::cout << "---------- ACERCA DEL PLATILLO QUE USTED SELECCIONO... ----------" << std::endl;
            cliente.imprimir_platillo(cliente.get_platillo3());
        }
        // Salir del ciclo while, debido a que continua ya no es true
        else if (opcion == "4"){
            continua = false;
        }
        // Validación de rango de opciones
        else{
            std::cout << "ERROR OPCION INVALIDA" << std::endl;
        }
    }

    // Console Output de los datos de las clases en el documento llamado "Personas.h"
    std::cout << "---------- INFORMACIÓN INDIVIDUAL DEL CLIENTE, MESERO Y CHEF ----------" << std::endl;
    std::cout<< std::endl;

    // Se usan los getters de la clase "Cliente", para imprimir los datos de la persona en la consola
    std::cout << "CLIENTE: " << std::endl;
    cliente.mostrar_info();
    //std::cout << "Nombre: " << cliente.get_nombre() << std::endl;
    //std::cout << "Edad: " << cliente.get_edad() << std::endl;
    //std::cout << "Genero: " << cliente.get_genero() << std::endl;
    //std::cout << "Disponibilidad de dinero: " << cliente.get_disp_dinero() << " pesos mexicanos" << std::endl;
    std::cout<< std::endl;
    // Se usan los getters de la clase "Mesero", para imprimir los datos de la persona en la consola
    std::cout << "MESERO: " << std::endl;
    mesero.mostrar_info();
    /*std::cout << "Nombre: " << mesero.get_nombre() << std::endl;
    std::cout << "Edad: " << mesero.get_edad() << std::endl;
    std::cout << "Genero: " << mesero.get_genero() << std::endl;
    std::cout << "Salario anual: " << mesero.get_salario() << " pesos mexicanos" << std::endl;
    std::cout << "Propinas: " << mesero.get_propinas() << " pesos mexicanos" << std::endl;*/
    std::cout<< std::endl;
    // Se usan los getters de la clase "ChefComida", para imprimir los datos de la persona en la consola
    std::cout << "CHEF: " << std::endl;
    chef_comida.mostrar_info();
    /*std::cout << "Nombre: " << chef_comida.get_nombre() << std::endl;
    std::cout << "Edad: " << chef_comida.get_edad() << std::endl;
    std::cout << "Especialidad: " << chef_comida.get_genero() << std::endl;
    std::cout << "Experiencia: " << chef_comida.get_meses_experiencia1() << " meses" << std::endl;
    std::cout << "Cuenta con un Sous Chef: " << chef_comida.get_sousChef_SoN1() << std::endl;
    std::cout << "Comida favorita: " << chef_comida.get_comida_favorita() << std::endl;*/
    std::cout<< std::endl;

    return 0;
}
