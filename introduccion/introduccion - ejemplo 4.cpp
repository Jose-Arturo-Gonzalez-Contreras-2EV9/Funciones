//Nombre: Gonzalez Contreras Jose Arturo
//Grupo: 2EV9
//introduccion - ejemplo #4: obtener el factorial de un numero.

#include <iostream>

using namespace std;

int factorial(int x);
int Nx;

int main(){
	
	cout << "PROGRAMA QUE CALCULA EL FACTORIAL DE UN NUMERO INGRESADO" << endl << endl;
	cout << "ingresa el valor del que se obtendra el factorial: ";
	cin >> Nx;
	
	int y = factorial(Nx);
	
	cout << "______________________________________" << endl << endl;
	cout << "el factorial del valor ingresado es: " 
	<< y << endl << endl;
	system ("pause");
	return 0;
} 

int factorial(int x){
	
	int z;
	int w=1;
	
//recordatorio: el for realiza lo que contiene en su bloque de codigo si la condicion responde a un SI, no a un NO.

	for(z=x;z>=1;z--){
		w=w*z;
	}
	
	return w;
}
