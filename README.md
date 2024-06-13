# Restaurante Mexicano
Este proyecto fue creado para la materia de Programación Orientada a Objetos que tiene clave de TC1030, específicamente hablando del grupo 304. El presente proyecto ayudó a integrar todos los temas vistos en el curso de 5 semanas de la materia anteriormente mencionada. En resumen, el objetivo del proyecto es comprender el alcance esperado de la informática, lo que se logra progresando en los temas tratados en las clases.

## Contexto
Un restaurante de comida mexicana que tiene en cuenta los productos que se venden y a las personas que hacen posible la apertura y correcta gestión del restaurante, dichas personas son los clientes, los meseros y los chefs.Este programa está diseñado para generar una estructura de categorías para que la información sobre los objetos anteriores se pueda gestionar de forma manejable. El restaurante está intentando generar informes de datos sobre las personas presentes, por lo que se generan 3 categorías de personas (Cliente, Mesero y ChefComida) que heredan propiedades de la clase padre (Personas), la cual es una clase compuesta de la clase "Restaurante" que despliega todos los objetos creados en la memoria dinámica. Asimismo, cada cliente que ingresa al restaurante puede ingresar sus datos y elegir 1 de 3 platillos mexicanos y predeterminados (Enchiladas, Chilaquiles, Pozole), cada uno con sus características ya establecidas. Finalmente, cuando el usuario presione "Info del personal", se generara un reporte de las personas involucradas en la experiencia o estancia del cliente en el restaurante, sin incluirlo a él. 

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
5. Salir

Una vez realizada la elección, se puede acceder a más información acerca de cada tipo de platillos o del personal del restaurante. Sin embargo, si el usuario escoge la opción de "Salir", se desplegará un mensaje de despedida y agradecimiento.

## Casos que haría que el proyecto deje de funcionar: 
El caso identificado en el cual el programa dejaría de funcionar es que, en la primera sección de este, en donde se piden los datos del cliente se coloquen letras en los lugares en donde debería de ir un número (edad y disponibilidad de dinero); este caso específico generaría que el programa entre en un ciclo interminable que despliegue el mensaje de "ERROR OPCION INVALIDA". 

## Consideraciones
El programa está hecho en español, pero no toma en cuenta los acentos que el usuario pueda poner en los inputs. De igual forma, el programa corre en la consola y está hecho con el estilo de C++ Standard, por lo que corre en todos los sistemas operativos.  
El programa corre con el IDE llamado *"CLion"* y el IDE llamado *"XCode"*, que se recomienda en el uso de *Apple(Mac)*. 
- **Se debe de compilar en terminal con:** "g++ Personas.h Platillos.h Restaurante.h main.cpp"
- **Para correr en linux, se utiliza:** "/a.out"
- **Y si se desea correr en windows, se usa:** "a.exe"

## Correciones
**En este programa se realizaron las siguientes correcciones:**
- **Versión 1.0:** 16 de mayo de 2024. El programa cuenta inicialmente con 4 clases de Personas, de las cuales 3 de ellas heredan de la clase principal y la clase de composición Restuarante, además del main. *Subcompetencias*. Se identificaron las clases para el problema, al igual que los casos que harían que el proyecto deje de funcionar. Se generó el UML que plantea las clases del problema y se modificó para agregar una clase faltante llamada ChefComida. Las clases se encuentran en el archivo Personas.h. 
- **Versión 2.0:** 23 de mayo de 2024. El archivo Personas.h se actualizó haciendo uso de la sobreescritura y sobrecarga, esto debido a que es aquel archivo que contiene la herencia del problema. Se modificó el UML para agregar los métodos de la sobreescritura en las clases hijas. *Subcompetencias*. Se implementó herencia, modificadores de acceso y sobrecarga en el programa. Dentro del archivo Personas.h se encuentra la herencia, en las líneas de código 128 (para la primera clase Cliente que hereda), 241 (para la segunda clase Mesero), y 332 (para la última clase llamada ChefComida). Así mismo, los modificadores se encuntran en las líneas: 29-63 para la clase Personas, 130-160 para la clase Cliente, 243-271 para la clase Mesero y 334-368 para la clase ChefComida. Por último, la sobrecarga se encuentra en: ln 42 y 49 clase Personas, ln 142 y 149 clase Cliente, ln 254 y 261 clase Mesero y ln 347 y 354 clase ChefComida.
- **Versión 3.0:** 29 de mayo de 2024. Las modificaciones para esta versión fueron con el fin de implementar polimorfismo. Primero que nada, el método mostrar_info se modificó para ser virtual. Después, se generó una clase llamada Restaurante.h donde se creó un arreglo de tipo Personas para implementar el polimorfismo y se generaron nuevos métodos crea_empleados y muestra_empleados. Por último, se agregó una nueva opción al menú, que es "Info del personal" para mandar a llamar los métodos crea_empleados y muestra_empleados que hacen uso del método virtual mostrar_info de las personas (polimorfismo). Asimismo, fue de suma importancia modificar el UML agregando los nuevos métodos empleados. *Subcompetencias*. Se implementó de manera adecuada la sobreescritura de métodos y el polimorfismo en el programa. La sobreescritura se encuentra en las líneas 63, 160, 271 y 368 del archivo Personas.h; mientras que el polimorfismo se consigue en la línea 63 del archivo Personas.h, también en toda la clase Restaurante.h y en la opción número 4 que dice "Info del personal" que se encuentra en el main.cpp.
- **Versión 4.0:** 06 de junio de 2024. La clase Personas se estableció como una clase abstracta, así como también se generó la función delete para poder borrar o desalojar la memoria dinámica de los apuntadores utilizados, esto justo después de completar la ejecución del programa. Por último, se actualizó el UML. *Subcompetencias*. Se implementó una clase abstracta. La clase abstracta se encuentra en la línea 63 del archivo Personas.h.
- **Versión 5.0:** 13 de junio de 2024. Se hicieron los cambios correspondientes en el repositorio de GitHub, así como también se agregaron comentarios en todas y cada una de los archivos, clases, funciones y métodos del programa en el formato indicado. *Subcompetencias*. Durante el desarrollo del proyecto, se ha sobreescrito en los archivos de Github para crear un historial. Se incluye toda la documentación necesaria en este espacio.
