//Nombre: Gonzalez Contreras Jose Arturo
//Grupo: 2EV9
//introduccion - ejemplo #3: indicar el mayor de 3 numeros con funcion int

#include <iostream>

using namespace std;

int mayor(int x, int y);
int Nx,Ny,Nz,w;

int main(){
	
	cout << "PROGRAMA QUE IDENTIFICA EL MAYOR DE 3 NUMEROS INGRESADOS UNSANDO FUNCIONES" << endl << endl;
	cout << "engresa el primer valor:  ";
	cin >> Nx;
	cout << "engresa el segundo valor: ";
	cin >> Ny;
	cout << "engresa el tercer valor:  ";
	cin >> Nz;
	
	int mayor1 = mayor(Nx,Ny);
	int mayor2 = mayor(mayor1,Nz);
	
	cout << "_________________________________" << endl;
	cout << "El valor ingresado mayor es: " << mayor2 << endl << endl;
	system ("pause");
	return 0;
}

int mayor(int x, int y){
	
	if (x>y) { w = x; }
	else  { w = y; }
	return w;
}
	
