# Pilas

***El siguiente ejemplo se trata de un programa en donde se hace uso de las estructuras lineales, en este caso de las pilas.***

------------

El programa fue realizado en el lenguaje de programación **C++**, asimismo el compilador utilizado fue **Dev C++**, el código fuente esta anexado junto con este archivo, pero aqui mismo se describe gran parte del código fuente, por último, se presenta unas capturas de pantalla de la ejecución del programa para corroborar que efectivamente el programa funciona correctamente.

------------
Concepto de una pila en programación:
> Una pila  (*stack*)  es  un  tipo  especial  de  lista  lineal  en  la  que  la  inserción  y  borrado  de  nuevos  elementos  se  realiza  sólo por un extremo que se denomina cima o tope (*top*).

------------


Para ejemplificar el uso de la pila, en este programa se hizo uso de una estructura en donde contiene variables de tipos primitivos que más adelante se harán uso para almacenar los datos de los usuarios, también vemos que la estructura contiene variables del tipo de la estructura.
A continuación, se presenta el código fuente de esta estructura:

![imagen](https://user-images.githubusercontent.com/71055467/97350069-e64c9f00-1855-11eb-937d-eb5a089c4d86.png)

Posteriormente, declaramos funciones que se harán uso para interactuar con la pila que más adelante se mandan a llamar, entre estas funciones se encuentra una con el nombre de menu, la cual servirá para mostrar al usuario las diversas opciones que tiene al ejecutar este programa.

![imagen](https://user-images.githubusercontent.com/71055467/97350711-5fe48d00-1856-11eb-8b85-6a544faa9f3d.png)


En la captura siguiente se puede apreciar el método principal main en donde se manda a llamar al método menu que se encuentra escrito en lineas siguientes.

![imagen](https://user-images.githubusercontent.com/71055467/97350760-7559b700-1856-11eb-8201-e4735c1e14db.png)

El código que vemos a continuación se trata de la función menu la cual hace una impresión por pantalla para mostrar las opciones con las que puede interactuar el usuario, para cada opción con la ayuda de una condicional switch se manda a llamar una función respecto a lo que haya digitado el usuario, el código de cada función se detalla a más adelante.

![imagen](https://user-images.githubusercontent.com/71055467/97350960-c23d8d80-1856-11eb-8d59-7bb1d5b3dae7.png)
![imagen](https://user-images.githubusercontent.com/71055467/97351026-d5505d80-1856-11eb-8b69-c298475dd641.png)

La función apilar, es sin duda una de las operaciones más usuales asociadas a las pilas, ya que en esta parte es en donde se van agregando cada uno de los elementos de la pila, esto comienza con la condicional if, si no existe la pila se crea una nueva instanciando un nuevo objeto en este caso se llama pila y pertenece a la estructura declarada anteriormente.
Ya que se ha instanciado el objeto, el programa pedirá datos al usuario los cuales se almacenarán en las variables respectivas de tipo primitivo.

Una vez que se haya pedido los diversos datos como nombre, apellido, carrera, entre otros del alumno, se procede a  igualar el puntero del nodo como NULL si este es el primer elemento insertado de la pila.

![imagen](https://user-images.githubusercontent.com/71055467/97351202-0a5cb000-1857-11eb-9695-0caf0e390b88.png)
![imagen](https://user-images.githubusercontent.com/71055467/97351270-22ccca80-1857-11eb-8b42-ef4db27710af.png)


Dentro de la misma función podemos ver que se crea un nuevo nodo esto para que sea más facilmente la impresión del nodo principal, las sentencias son casi las mismas, con la diferencia de que ahora el apuntador llamado anterior de nodo_aux se iguala a pila, asimismo se iguala la pila al nodo_aux, para que al momento de imprimir, este pueda ser llamado.

La función desapilar es otra de las funciones más usuales asociadas a las pilas, en esta función practicamente lo que ocurre es que se van sacando elementos de la pila con la única condición de que solo puede salir el último que ha entrado.

En caso de que la pila no exista, es decir está vacía, simplemente se imprime un mensaje diciendo que la pila está vacía, pero en caso contrario se crea un nuevo elemento la cual será igualado a la pila, es decir al último elemento agregado.
Para la siguiente línea de código lo que se hace es que el nodo pila se iguala al apuntador del nodo auxiliar y de esta manera con la ayuda de delete podemos eliminar el nodo o elemento recién creado.
El código fuente de esta función desapilar se muestra con una captura de pantalla a continuación.

![imagen](https://user-images.githubusercontent.com/71055467/97351360-4132c600-1857-11eb-9aea-66d163329831.png)

La función imprimir_pila como su nombre lo dice siplemente muestra en consola todos los elementos de la pila, en caso de que la pila se encuentra vacía lo que hace es imprimir un mensaje diciendo que no hay nada para mostrar.

![imagen](https://user-images.githubusercontent.com/71055467/97351454-632c4880-1857-11eb-9d28-c4749576bc1a.png)

------------


Para tener un panorama mejor acerca del programa, a continuación, se muestra el cógo fuente completo del programa.

![imagen](https://user-images.githubusercontent.com/71055467/97351587-92db5080-1857-11eb-906f-5f7d701e61b6.png)
![imagen](https://user-images.githubusercontent.com/71055467/97351651-aab2d480-1857-11eb-8f86-5b8cdc334529.png)
![imagen](https://user-images.githubusercontent.com/71055467/97351731-c4541c00-1857-11eb-860a-1e96166fec77.png)
![imagen](https://user-images.githubusercontent.com/71055467/97351798-dd5ccd00-1857-11eb-97fd-daaa75281b9f.png)
![imagen](https://user-images.githubusercontent.com/71055467/97351866-f36a8d80-1857-11eb-8ee3-d6e8263899a1.png)
![imagen](https://user-images.githubusercontent.com/71055467/97351900-ff564f80-1857-11eb-9d14-0147b7c83d08.png)

------------



Ahora una vez explicado el código se muestran la ejecución del programa mediante capturas de pantalla.

Al momento de iniciar la ejecución del programa se muestra un menú en donde el usuario decide que opción desea.

![imagen](https://user-images.githubusercontent.com/71055467/97352314-4d6b5300-1858-11eb-8443-28236bca26d1.png)

A continuación se muestra las capturas con el resultado de cada una de las opciones.

![imagen](https://user-images.githubusercontent.com/71055467/97352543-67a53100-1858-11eb-94a7-88d6eb08b82b.png) 

![imagen](https://user-images.githubusercontent.com/71055467/97352588-78ee3d80-1858-11eb-8e82-8f6bf480b879.png)


![imagen](https://user-images.githubusercontent.com/71055467/97352660-8d323a80-1858-11eb-9fe4-2aa1f9f519b5.png) 

![imagen](https://user-images.githubusercontent.com/71055467/97352689-97eccf80-1858-11eb-81a0-3748fa51b56a.png)

![imagen](https://user-images.githubusercontent.com/71055467/97352804-ba7ee880-1858-11eb-910d-5a5d82ab16f9.png)

Si el usuario digita 1, el programa pedirá datos al usuario como se muestra a continuación:

- *Elemento 1*

![imagen](https://user-images.githubusercontent.com/71055467/97352931-f5811c00-1858-11eb-9d7c-832a926d9f2a.png)

![imagen](https://user-images.githubusercontent.com/71055467/97352999-15b0db00-1859-11eb-9940-49661bb2a1f5.png)

- *Elemento 2*

![imagen](https://user-images.githubusercontent.com/71055467/97353106-39742100-1859-11eb-8df5-01d01d9fe6bd.png)

![imagen](https://user-images.githubusercontent.com/71055467/97353140-44c74c80-1859-11eb-9931-4a93cbeacb06.png)

- *Elemento 3*

![imagen](https://user-images.githubusercontent.com/71055467/97353256-6fb1a080-1859-11eb-8374-165d72020fce.png)

![imagen](https://user-images.githubusercontent.com/71055467/97353293-79d39f00-1859-11eb-94ff-ca5e649f248b.png)

Si queremos mostrar en pantalla los elementos agregados, tecleamos la opción 3 y aparecerá lo que hemos agregado.

![imagen](https://user-images.githubusercontent.com/71055467/97353340-8d7f0580-1859-11eb-94e1-2c99e0cae306.png)

![imagen](https://user-images.githubusercontent.com/71055467/97353426-a2f42f80-1859-11eb-8ee2-1bbf6d2278f2.png)


Ahora si queremos eliminar un elemento simplemente elegimos la opción 2 y con esto se ha eliminado el último elemento agregado, en este caso el elemento que tiene el nombre de Alan ya no aparecerá despues.

![imagen](https://user-images.githubusercontent.com/71055467/97353574-d3d46480-1859-11eb-83bc-221c259570cf.png)

![imagen](https://user-images.githubusercontent.com/71055467/97353626-e058bd00-1859-11eb-9b26-fbf15ddc6997.png)

![imagen](https://user-images.githubusercontent.com/71055467/97353664-ef3f6f80-1859-11eb-851f-a7e61af343ba.png)

Si queremos corroborar que efectivamente se ha eliminado, solo elegimos la opción 3 para que nos muestre lo que contiene la pila.

![imagen](https://user-images.githubusercontent.com/71055467/97353725-03836c80-185a-11eb-954b-7e254c4670f9.png)

![imagen](https://user-images.githubusercontent.com/71055467/97353757-0c743e00-185a-11eb-93f1-1283b7bf1295.png)


Ahora para finalizar el programa, simplemente, seleccionamos la opción 4, como se aprecia en la captura siguiente.

![imagen](https://user-images.githubusercontent.com/71055467/97353795-19912d00-185a-11eb-9dde-52e5854dc07f.png)

![imagen](https://user-images.githubusercontent.com/71055467/97353826-231a9500-185a-11eb-96e4-1284c6ef88ae.png)

------------


En conclusión, con la elaboración de este programa entendimos más a fondo como funciona lógicamente una pila, ya que si su significado lo comparamos con la realidad, es muy similar, es decir si hablamos de pila en la realidad es como decir una pila de libros, platos, entre muchos otros ejemplos más. Asimismo, si queremos quitar algún elemento de esta pila, necesitamos sacar primero la que se encuentra en la cima.
