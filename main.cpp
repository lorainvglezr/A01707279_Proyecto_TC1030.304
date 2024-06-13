/*
 * Proyecto Restaurante
 * Lorain Valeria González Rivas
 * A01707279
 * 13 de junio de 2024
 */

/* 
 * Proyecto realizado para Programación Orientada a Objetos
 * Es un programa basado en un Restaurante y su funcionamiento, este programa proporciona
 * información acerca de 3 tipos de platillos, también menciona los datos de los trabajadores
 * del lugar (Meseros y Chefs). Por otra parte, el usuario puede agregar
 * sus datos personales y guardarlos en variables (input del usuario)
 */

// Bibliotecas
#include <iostream> // Para imprimir
#include <string> // Para usar strings

//Archivos del proyecto para desempeñar las funciones necesarias
#include "Platillos.h" // Clase de mi proyecto
#include "Personas.h" // Clases de mi proyecto
#include "Restaurante.h" // Clase que implementa polimorfismo

// Función menú
void menu() {
    // Se imprimen las opciones del menúque contendrá el programa
    std::cout << std::endl;
    std::cout << "------------ MENU ------------"<< std::endl;
    std::cout << "1. Enchiladas" << std::endl;
    std::cout << "2. Chilaquiles" << std::endl;
    std::cout << "3. Pozole" << std::endl;
    std::cout << "4. Info del personal" << std::endl;
    std::cout << "5. Salir" << std::endl;
}

int main(){
    // Creación de un objeto Restaurante que representa "La Taberna del Mariachi"
    Restaurante Taberna_del_Mariachi("La Taberna del Mariachi", "1505 Av. Constituyentes");
    
    // Creación de empleados en el restaurante
    Taberna_del_Mariachi.crea_empleados();
    
    // Mensaje de bienvenida al restaurante
    std::cout << "      Bienvenido al Restaurante Mexicano      " << std::endl;
    std::cout << "------------ LA TABERNA DEL MARIACHI ------------" << std::endl;
    std::cout << std::endl;
    
    // Creación de un objeto Cliente que controlará todo
    Cliente cliente;

    // Variables para almacenar los datos del cliente
    std::string nombre; // Variable nombre de tipo string
    int edad; // Variable edad de tipo integer
    std::string genero; // Variable genero de tipo string
    float dineroDisponible; // Variable dineroDisponible de tipo float

    std::string opcion; // Variable para almacenar la opción del menú seleccionada por el usuario
    
    bool continua = true; // Variable para ciclar el programa

    // Ingreso de datos del cliente y uso de setters de la clase Cliente
    //Se pide el nombre del cliente para su almacenamiento
    std::cout << "Por favor, introduzca su nombre completo: ";
    std::getline(std::cin, nombre); // Console input que guarda más de una palabra en la variable nombre
    cliente.set_nombre(nombre);
    std::cout << "Ingrese su edad: ";
    std::cin >> edad; // Console input que guarda en variable edad
    cliente.set_edad(edad);
    std::cout << "Introduzca su genero: ";
    std::cin >> genero; // Console input que guarda en variable genero
    cliente.set_genero(genero);
    std::cout << "Ingrese su disponibilidad de dinero: ";
    std::cin >> dineroDisponible;// Console input que guarda en variable dineroDisponible
    cliente.set_dineroDisponible(dineroDisponible);

    // Creación de objetos Platillos predeterminados
    Platillos plato1("Enchiladas", 122.64, 12, 1, 168, "Verde", "Pollo", "Cebolla y cilantro");
    Platillos plato2("Chilaquiles", 102.46, 12, 1, 486, "Rojo", "Huevo estrellado", "Cebolla y cilantro");
    Platillos plato3("Pozole", 125.51, 23, 2, 240, "Rojo", "Cerdo", "Cilantro y rabano");
    
    // Asignación de una opción de platillo tipo Platillos al cliente
    cliente.add_plato(plato1);
    cliente.add_plato(plato2);
    cliente.add_plato(plato3);

    // Bucle principal
    while (continua){
        // Llamada a la función menu()
        menu();
        // Console output de instrucciones finales del menú
        std::cout << "Si no desea continuar, escoja la opción '5. Salir'" << std::endl;
        std::cout << "De lo contrario, elija una opción del menú: ";
        std::cin >> opcion;
        std::cout << std::endl;
        
        // Condicional if que verifica la opción seleccionada por el usuario
        // Depeniendo de la opción elegida se muestran los objetos almacenados de los platos del cliente (del 1 al 3)
        if (opcion == "1"){
            std::cout << "---------- ACERCA DEL PLATILLO QUE USTED SELECCIONO... ----------" << std::endl;

            cliente.imprimir_plato(0);
        }
        else if (opcion == "2"){
            std::cout << "---------- ACERCA DEL PLATILLO QUE USTED SELECCIONO... ----------" << std::endl;
            cliente.imprimir_plato(1);
        }
        else if (opcion == "3"){
            std::cout << "---------- ACERCA DEL PLATILLO QUE USTED SELECCIONO... ----------" << std::endl;
            cliente.imprimir_plato(2);
        }
        // Opción que muestra los objetos creados por polimorfismo de los empleados del restaurante
        else if (opcion == "4"){
            std::cout << "---------- INFORMACIÓN INDIVIDUAL DE LOS MESEROS Y CHEFS DEL RESTAURANTE ----------" << std::endl;
            std::cout<< std::endl;
            Taberna_del_Mariachi.muestra_empleados();
        }
        // Opción para salir del bucle y terminar el programa
        else if (opcion == "5"){
            continua = false;
        }
        // Mensaje de error al seleccionar alguna opción inválida
        else{
            std::cout << "ERROR OPCION INVALIDA" << std::endl;
        }
    }
    return 0;
}
