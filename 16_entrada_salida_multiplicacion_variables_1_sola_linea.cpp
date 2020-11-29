/* Este programa lee la entrada de dos números y 
muestra en la salida estándar el resultado de una multiplicación
aquí se muestran las variables en una sola línea*/

# include <iostream> //Librería estándar de entrada o salida de datos
# include <locale.h> //Librería estándar de localización (regionalización)

using namespace std; //Damos acceso al espacio de nombres

int main(){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librería y colocamos el valor para manejo de caracteres, le asignamos el idioma español
	float numero1, numero2, multiplicando; //Declaramos las variables a utilizar en una sola línea
		
	cout<<"Ingrese el primer número a multiplicar"<<endl;//Solicitamos la entrada de la primera variable
	cin>>numero1; //Almacenamos la primera variable
	cout<<"Ingrese el segundo número a multiplicar"<<endl;//Solicitamos la entrada de la segunda variable
	cin>>numero2; //Almacenamos la segunda variable
	cout<<"El resultado de la multiplicación es: "<<endl;//Imprimimos este mensaje en pantalla
	multiplicando = numero1*numero2;//Realizamos la multiplicación
	cout<<multiplicando<<endl; //Imprimimos la salida
	
	return 0;//Fin del programa	
}

/*Este programa fue escrito por Emilio Carcaño Bringas*/
