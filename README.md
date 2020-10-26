# Pilas

***El siguiente ejemplo se trata de un programa en donde se hace uso de las estructuras lineales, en este caso de las pilas.***

------------

El programa fue realizado en el lenguaje de programación **C++**, asimismo el compilador utilizado fue **Dev C++**, el código fuente esta anexado junto con este archivo, pero aqui mismo se describe gran parte del código fuente, por último, se presenta unas capturas de pantalla de la ejecución del programa para corroborar que efectivamente el programa funciona correctamente.

------------

> Una pila  (*stack*)  es  un  tipo  especial  de  lista  lineal  en  la  que  la  inserción  y  borrado  de  nuevos  elementos  se  realiza  sólo por un extremo que se denomina cima o tope (*top*).

Para ejemplificar el uso de la pila, en este programa se hizo uso de una estructura en donde contiene variables de tipos primitivos que más adelante se harán uso para almacenar los datos de los usuarios, también vemos que la estructura contiene variables del tipo de la estructura.
A continuación, se presenta el código fuente de esta estructura:

imagen 1

Posteriormente, declaramos funciones que se harán uso para interactuar con la pila que más adelante se mandan a llamar, entre estas funciones se encuentra una con el nombre de menu, la cual servirá para mostrar al usuario las diversas opciones que tiene al ejecutar este programa.

imagen 2

En la captura siguiente se puede apreciar el método principal main en donde se manda a llamar al método menu que se encuentra escrito en lineas siguientes.

imagen 3

El código que vemos a continuación se trata de la función menu la cual hace una impresión por pantalla para mostrar las opciones con las que puede interactuar el usuario, para cada opción con la ayuda de una condicional switch se manda a llamar una función respecto a lo que haya digitado el usuario, el código de cada función se detalla a más adelante.

imagen 4

La función apilar, es sin duda una de as operaciones más usuales asociadas a las pilas, ya que en esta parte es en donde se van agregando cada uno de los elementos de la pila, esto comienza con la condicional if, si no existe la pila se crea una nueva instanciando un nuevo objeto en este caso se llama pila y pertenece a la estructura declarada anteriormente.
Ya que se ha instanciado el objeto, el programa pedirá datos al usuario los cuales se almacenarán en las variables respectivas de tipo primitivo.

Una vez que se haya pedido los diversos datos como nombre, apellido, carrera, entre otros del alumno, se procede a  igualar el puntero del nodo como NULL si este es el primer elemento insertado de la pila.

imagen 4

Dentro de la misma función podemos ver que se crea un nuevo nodo esto para que sea más facilmente la impresión del nodo principal, las sentencias son casi las mismas, con la diferencia de que 
