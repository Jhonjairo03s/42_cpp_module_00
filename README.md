_This project has been created as part of the 42 curriculum by jhvalenc._

# C++ Module 00: Namespaces, Classes, Member Functions, and More

## Descripción
**C++ Module 00** es el primer módulo del currículo de C++ de la escuela 42, diseñado como una transición suave desde el lenguaje C hacia C++. El objetivo principal es familiarizarse con la programación orientada a objetos (POO) básica, la sintaxis fundamental de C++ y cómo estructurar clases, métodos, espacios de nombres (_namespaces_), flujos de entrada/salida (`std::cout`/`std::cin`) y la asignación básica en lugar de funciones antiguas como `printf`.

Este repositorio contiene los ejercicios desarrollados para este módulo:
- **ex00 (Megaphone):** Un programa sencillo para practicar el manejo de argumentos de línea de comandos y el uso de funciones básicas de manipulación de cadenas para convertir texto a mayúsculas.
- **ex01 (My Awesome PhoneBook):** Una aplicación interactiva de agenda telefónica basada en clases y objetos. Permite añadir contactos, buscar y listar información aplicando buenas prácticas de encapsulamiento (`public`/`private`).

## Instrucciones
Cada ejercicio cuenta con su propio **Makefile** para facilitar su compilación de manera limpia y estricta bajo los estándares exigidos por la escuela (`-Wall -Wextra -Werror` y C++98).

## Compilación y Ejecución
1. **Clonar el repositorio:**
   ```Bash
   git clone <url-del-repositorio>
   cd 42_cpp_module_00
   ```
3. **Ejecutar el ejercicio 00 (Megaphone):**
   ```Bash
   cd ex00
   make
   ./megaphone "shhh... I think the students are asleep..."
   make clean
   make fclean
   ```
5. **Ejecutar el ejercicio 01 (PhoneBook):**
   ```Bash
   cd ../ex01
   make
   ./phonebook
   make clean
   make fclean
   ```
   _Dentro de la interfaz del `phonebook`, puedes utilizar los comandos `ADD`, `SEARCH` y `EXIT`._

## Recursos
Para la realización de este proyecto se han consultado las siguientes referencias y normativas:
- **Documentación oficial y guías de C++:** CPlusPlus (cplusplus.com) para la sintaxis de flujos de E/S y manipulación de strings.
- **Normas del proyecto:** Sujetos estrictamente al estándar **C++98** tal como lo exige el _subject_ de 42.
- **Uso de Inteligencia Artificial:**
  - _Tareas asignadas a la IA_: Asistencia en la estructuración conceptual de las clases (`Contact` y `PhoneBook`) para asegurar un correcto encapsulamiento y revisión de buenas prácticas de diseño orientado a objetos.
