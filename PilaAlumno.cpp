	#include <iostream>//Libreria importada para utilizar la entrada y salida de datos
	
	using namespace std;//Util para usar las palabras reservadas cout y cin
	 
	struct nodo_alum //Inicio de la declaraci�n de la estructura considerada en este caso como un nodo de la pila
	{
		//Variables declaradas dentro de la estructura
		int control;
		char nombre[50];
		char apellidos[50];
		char ing[50];
		int sem;
		nodo_alum *anterior;//apuntador a nodo_alum
	}*pila, *nodo_aux;//variables de nodos de la pila
	//Fin de la declaraci�n de la estructura

	//Inicio de la Declaraci�n de funciones necesarios para interactuar con la pila 
	void menu();
	void apilar();
	void desapilar();
	void imprimir_pila();
	//Fin de la Declaraci�n de funciones
	
	//Inicio de la funci�n principal 
	int main(){
		setlocale(LC_CTYPE,"Spanish");//Paquete util para poder escribir libremente en el lenguaje espa�ol
		menu();//Se manda a llamar la funci�n menu
		return 0;//Retorno de la funci�n main
	}
	//Fin de la funci�n principal
	
	//inicio de la funci�n menu
	void menu()
	{
		int opc;//declaraci�n de variable
		do{
			system("cls");//Limpia la pantalla de comandos
			cout << "\n\t1. Apilar";//Imprime por consola las opciones que tiene el usuario
			cout << "\n\t2. Desapilar";
			cout << "\n\t3. Ver pila";
			cout << "\n\n\t\t\t4. Exit";
			cout << "\n Ingrese opci�n: ";
			cin >>opc;//La opi�n se almacena en la variable opc
			
			//Inicio de la condicional switch
			switch(opc){				
				case 1:
					apilar();//Se manda a llamar la funci�n apilar
					break;
				
				case 2:
					desapilar();//Se manda a llamar la funci�n desapilar
					break;
				
				case 3:
					imprimir_pila();//Se manda a llamar la funci�n imprimir_pila
					break;
				
				case 4:
					system("cls");
					cout << "\t\t\tSALIDO"; exit(1);//Termina la ejecuci�n del programa
								
				default:
					cout << "\n\n\t\t\t Opci�n invalida\n\n";//Se imprime mensaje en caso de no seleccionar una de las opciones
					system("pause");
					break;
			}//Fin de la condicional switch
			
		}while(opc != 4);//Se ejecuta de nuevo las lineas anteriores en caso de que el usuario no seleccione una de esas opciones
	}
	//Fin de la funci�n menu

	 
	void apilar (){//inicio de la funci�n apilar, llenanddo una pila
		system("cls");
		if(!pila){//si no existe la pila se crea como se hace en sentencias posteriores dentro del if
			pila = new(nodo_alum);//Se crea una nuevo pila
			
			cout << "\n\tIngresa datos del alumno";//Se pide datos al usuario
			cout << "\n\t===========================";
			cout << "\n\tN�mero de control: ";
        	cin >>pila->control;//Se almacena el valor en la variable control que apunta a pila
        	while(getchar() != '\n');//Bucle que vac�a buffer de entrada
        	cout << "\n\tNombre: ";
        	gets(pila->nombre);
        	cout << "\n\tApellido: ";
        	gets(pila->apellidos);
        	cout << "\n\tIngenier�a: ";
        	gets(pila->ing);
        	cout << "\n\tSemestre: ";
        	cin >>pila->sem;
        	while(getchar() != '\n'); //Bucle que vac�a buffer de entrada
        	
			pila->anterior = NULL;//El apuntador -anterior- de pila se iguala a NULL, haciendo referencia a que es el final de la pila
								  //En caso de que no apunta a otro nodo de la pila
			system("cls");
			cout << "\n\t\t\tS U C C E S S F U L\n\t\t\tAlumno apilado correctamente\n\n";
			system("pause");
			
			return;
		}
		 
		nodo_aux = new(nodo_alum);//Se crea un nodo auxiliar, para imprimir el nodo en sentencias posteriores
		cout << "\n\tIngresa datos del alumno";
		cout << "\n\t===========================";
		cout << "\n\tN�mero de control: ";
        cin >>nodo_aux->control;
        while(getchar() != '\n');
        cout << "\n\tNombre: ";
        gets(nodo_aux->nombre);
        cout << "\n\tApellido: ";
        gets(nodo_aux->apellidos);
        cout << "\n\tIngenier�a: ";
        gets(nodo_aux->ing);
        cout << "\n\tSemestre: ";
        cin >>nodo_aux->sem;
        while(getchar() != '\n');
		nodo_aux->anterior = pila;//El apuntador anterior de nodo_aux se iguala a pila
		pila = nodo_aux;//Se iguala el nodo pila con el nodo nodo_aux
		
		system("cls");
		cout << "\n\t\t\tS U C C E S S F U L\n\t\t\tAlumno apilado correctamente\n\n";
		system("pause");
		
	}//Fin de la funci�n apilar
	
	//Inicio de la funci�n desapilar 
	void desapilar(){
		system("cls");//Limpieza de pantalla
		if(!pila){//si no existe la pila se ejecuta las sentencias posteriores dentro del if
			cout << "\n\nP I L A   V A C � A\n\n\n";//Se imprime por consola un mensaje de que la pila esta vacia
			system("pause");
			return;
		}//Fin de la condicional if
		 
		nodo_aux = new(nodo_alum);//Si no se ejecuta las lineas del if, Se crea un nuevo nodo auxiliar
		nodo_aux = pila;//El nodo creado se iguala al nodo pila
		cout << "\n\n\t\t\t\t Alumno a desapilar \n\n\t\t\t\tN�mero de control: " <<nodo_aux->control << "\n\n\n";
		system("pause");
		pila = nodo_aux->anterior;//EL nodo pila se iguala al apuntador de nodo_aux
		delete(nodo_aux);//Se elimina el nodo creado
		system("cls");
		cout << "\n\t\t\tS U C C E S S F U L\n\t\t\tAlumno desapilado correctamente\n\n\t\t\t\t"<< "\n\n";
		system("pause");
	}//Fin de la funci�n desapilar 
	
	//Inicio de la funci�n imprimir_pila 
	void imprimir_pila(){
		system("cls");
		if(!pila){//si no existe la pila se ejecuta las sentencias posteriores dentro del if
			cout << "\n\n\t\tP I L A   V A C � A\n\n\n";
			system("pause");
			return;
		}else{//si no se ejecuta el if continua la ejecuci�n con las instrucciones del else
			nodo_aux = pila;//Se iguala el nodo nodo_aux a pila
			cout << "\n\t\t\tELEMENTOS DE LA PILA\n\n";
			while(nodo_aux){//Mientras sea el nodo nodo_aux se hace la impresi�n por consola
				cout << "\n";
				cout << "  ===============================\n";
				cout <<"\t"<<nodo_aux->control <<"\n";
				cout <<"\t"<<nodo_aux->nombre <<"\n";
				cout <<"\t"<<nodo_aux->apellidos <<"\n";
				cout <<"\t"<<nodo_aux->ing <<"\n";
				cout <<"\t"<<nodo_aux->sem <<"\n";
				cout << "  ===============================";
				nodo_aux = nodo_aux->anterior;//El nodo se iguala al apuntador del nodo anterior en caso de que exista
			}
			cout << "\n\n";
			system("pause");//Pause del programa en ejecuci�n	
		}
	}//Fin de la funci�n imprimir_pila 
