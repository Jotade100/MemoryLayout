# Memory Layout SO 2020
 Un programa en C++ que obtiene las direcciones de una página de memoria del proceso actual. 

## ¿Cómo se compone un _Memory Layout_?
La segmentación es un esquema de administración lógica de la memoria física de acuerdo a un modelo. Cada segmento tiene un nombre y una longitud. Un segmento de memoria contiene el siguiente esquema básico:

* **.code**: Es de tamaño fijo y de solo lectura. En esta parte se almacenan todas y cada una de las instrucciones en código máquina que componen el programa que se está ejecutando.

* **.data**: Aquí se almacenan las variables globales inicializadas del programa. De tamaño fijo y permite la escritura, se puede escribir en él.

* **.bss**: Aquí se almacenan las variables globales sin inicializar. De tamaño fijo y permite la escritura, se puede escribir en él.

* **stack** & **heap**: El stack y heap se usan para guardar argumentos de las funciones, para operaciones de memoria entre otros.

![Composición de memoria](https://netting.files.wordpress.com/2016/10/memoriastack.png)

 
## ¿En qué consiste el proyecto?
Utilizando un programa en C++, captar las direcciones de memoria de los distintos segmentos de memoria de este programa en ejecución.

### Requisitos
* Computadora
* Compilador para C++
* Editor de texto

### Archivos del proyecto
El archivo _tarea.cpp_ contiene la implementación del proyecto.

### Explicación del programa
#### Variables globales
El segmento _.data_ corresponde a las variables globales. Por ello se hizo un entero global que marcará el inicio del bloque.
```
int temp_data = 1523; 
```
#### Variables estáticas
El segmento _.bss_ corresponde a las variables estáticas sin inicializar. Por ello se hizo un entero que marcará el inicio del bloque.
```
static int temp_bss;  
```
#### Segmento de _text_ o código
El segmento comenzará con nuestro programa por lo que se pide la referencia del primer método.
```
int *code_segment_address = ( int* ) &print_addr; 
```
#### Stack
El segmento de _stack_ posee su uso para varias implementaciones, como pasar parámetros de funciones, hasta guardar variables locales.
```
int local_var = 1997; 
```



# Autor
**Juan Diego Sique Martínez** :musical_keyboard: *Universidad Francisco Marroquín* :notes: [Correo](juandiegosique@ufm.edu)
