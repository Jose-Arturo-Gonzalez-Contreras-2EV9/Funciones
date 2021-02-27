//Nombre: Gonzalez Contreras Jose Arturo
//Grupo: 2EV9
//introduccion - ejemplo #2: indicar el mayor de 2 numeros con funcion void

#include <iostream>

using namespace std;

void mayor(int x, int y);

int main(){
	
	int Nx, Ny;
	cout << "PROGRAMA QUE IDENTIFICA EL NUMERO MAYOR DE 2 INGRESADOS USANDO FUNCIONES" << endl << endl;
	cout << "introduzca el primer numero: ";
	cin>>Nx;
	cout << "introduzca el segundo numero: ";
	cin>>Ny;
	
	mayor(Nx,Ny);
	system ("pause");
	return 0;
}

void mayor(int x, int y){
	
	if (x>y){
		
		cout << "_________________________________" << endl;
		cout << "el valor ingresado mayor es: " << x << endl << endl;
	}
	else if (x==y){
		
		cout << "_________________________________" << endl;
		cout << "el valor de ambos numeros es el mismo." << endl << endl;
	}
	else{	
		
		cout << "_________________________________" << endl;
		cout << "el valor ingresado mayor es: " << y << endl << endl;
	}
}
