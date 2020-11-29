/* Este programa lee la entrada de dos n�meros y 
muestra en la salida est�ndar el resultado de una multiplicaci�n
aqu� se muestran las variables en una sola l�nea*/

# include <iostream> //Librer�a est�ndar de entrada o salida de datos
# include <locale.h> //Librer�a est�ndar de localizaci�n (regionalizaci�n)

using namespace std; //Damos acceso al espacio de nombres

int main(){ //Inicio del programa
	setlocale(LC_CTYPE, "Spanish"); //Llamamos a la librer�a y colocamos el valor para manejo de caracteres, le asignamos el idioma espa�ol
	float numero1, numero2, multiplicando; //Declaramos las variables a utilizar en una sola l�nea
		
	cout<<"Ingrese el primer n�mero a multiplicar"<<endl;//Solicitamos la entrada de la primera variable
	cin>>numero1; //Almacenamos la primera variable
	cout<<"Ingrese el segundo n�mero a multiplicar"<<endl;//Solicitamos la entrada de la segunda variable
	cin>>numero2; //Almacenamos la segunda variable
	cout<<"El resultado de la multiplicaci�n es: "<<endl;//Imprimimos este mensaje en pantalla
	multiplicando = numero1*numero2;//Realizamos la multiplicaci�n
	cout<<multiplicando<<endl; //Imprimimos la salida
	
	return 0;//Fin del programa	
}

/*Este programa fue escrito por Emilio Carca�o Bringas*/
