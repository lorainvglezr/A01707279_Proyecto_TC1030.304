# A01707279_Proyecto_TC1030.304
Este proyecto se basa en un proyecto de demostración con el objetivo de crear un programa que eventualmente ayudará a integrar todos los temas vistos en el curso de Programación Orientado a Objetos 1 y 2. En resumen, el objetivo del proyecto es comprender el alcance esperado de la informática al final del curso, lo que se logra progresando en los temas tratados en el curso.

## Contexto
Un restaurante que se centra en la cocina mexicana que tiene en cuenta los productos que se venden, así como las personas que hacen posible la apertura y gestión de un restaurante, como clientes, cocineros y camareros. Este programa está diseñado para generar una estructura de categorías para que la información sobre los objetos anteriores se pueda gestionar de forma manejable. El restaurante está intentando generar informes de datos sobre las personas presentes, por lo que se generan 3 categorías de personas (Cliente, Mesero y Chef) que heredan propiedades de la clase padre (Personas), la cual es una clase compuesta de la clase "Restaurante". Asimismo, cada cliente que ingresa al restaurante puede ingresar sus datos y elegir uno de 3 platillos mexicanos (Enchiladas, Chilaquiles, Pozole), cada uno con sus características predeterminadas. Finalmente, cuando el usuario presione "Salir", se generara un reporte solamente de las personas involucradas en la estancia del cliente, incluyéndolo a él. 

## Funcionalidad
- La funcionalidad es básica.
- El programa permite que los clientes almacenen su información hasta el final de la estancia en el restaurante. 
- El programa despliega la información de los trabajadores del lugar, que son meseros y chefs.
- El programa permite visualizar información predeterminada de los platillos que se tienen de opción en el menú.

Primeramente, el programa realiza una pequeña encuesta al usuario, acerca de sus datos personales; luego de esto, se imprime un menú que le permite al usuario elegir alguna de las siguientes opciones que son: 
1. Enchiladas
2. Chilaquiles
3. Pozole
4. Info del personal

Una vez realizada la elección, se puede acceder a más información acerca de cada tipo de platillos o del personal del restaurante. Si el usuario escoge la opción de "Salir", se despliegarán los datos del clientes, previamente establecidos por él, y los datos predeterminados del mesero y el cocinero.

## Consideraciones
El programa corre en la consola y está hecho con el estilo de C++ Standard, por lo que corre en todos los sistemas operativos.  
El programa corre con el IDE llamado *"CLion"* y el IDE llamado *"XCode"*, que se recomienda en el uso de *Apple (Mac)*. 
- **Se debe de compilar en terminal con:** "g++ Personas.h Platillos.h main.cpp"
- **Para correr en linux, se utiliza:** "/a.out"
- **Y si se desea correr en windows, se usa:** "a.exe"

## Correciones
**En este programa se realizaron las siguientes correcciones (por ahora):**
1. Se arregló el tipo de variable de la llamada "precio" en la sección de los *Set variables*, para que en todos los lugares donde se mencionara, hubiera concordancia de tipos de variables.
2. Se omitió el uso de "using namespace std;", en cambión se utilizó el prefijo "std::" antes de cada "cout", "cin", "string" y "endl".

## Casos que harían que el proyecto deje de funcionar
El caso identificado en el cual el programa dejaría de funcionar es que, en la primera sección de este, en donde se piden los datos del cliente se coloquen letras en los lugares en donde debería de ir un número (edad y disponibilidad de dinero); este caso específico generaría que el programa entre en un ciclo interminable que despliegue el mensaje de "ERROR OPCION INVALIDA". 
