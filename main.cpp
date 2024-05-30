// Nombre: Lorain Valeria Gonzalez Rivas
// Matricula: A01707279
// Fecha: Jueves, 30 de mayo de 2024
// Materia: Programacion orientada a objetos (Gpo 304)


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
    std::cout << "4. Info del personal" << std::endl;
    std::cout << "5. Salir" << std::endl;
}

// Funcion principal
int main(){
    //Se llama a la clase "Restaurante" 
    Restaurante Casona_de_la_abuela("La Casona de la abuela", "1505 Av. Constituyentes");
    //Se crean objetos ejemplos de tipo persona dentro de Restaurante
    Casona_de_la_abuela.crea_empleados();
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
        std::cout << "Si no desea continuar, escoja la opcion '5. Salir'" << std::endl;
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
        else if (opcion == "4"){
            std::cout << "---------- INFORMACIÓN INDIVIDUAL DE LOS, MESEROS Y CHEFS ----------" << std::endl;
            std::cout<< std::endl;
            Casona_de_la_abuela.muestra_empleados();
        }
        // Salir del ciclo while, debido a que continua ya no es true
        else if (opcion == "5"){
            continua = false;
        }
        // Validación de rango de opciones
        else{
            std::cout << "ERROR OPCION INVALIDA" << std::endl;
        }
    }


    return 0;
}
