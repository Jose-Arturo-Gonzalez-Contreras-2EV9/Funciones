//Nombre: Gonzalez Contreras Jose Arturo
//Grupo: 2EV9
//introduccion - ejemplo #1 suma de dos numeros usando funcion void

#include <iostream>

using namespace std;

void suma (int x,int y);

int main (){

 int Nx,Ny;
 cout << "PROGRAMA QUE SUMA DOS NUMEROS MEDIANTE FUNCIONES" << endl << endl;
 cout << "introduzca el valor de x: ";
 cin >> Nx;
 cout << "introduzca el valor de y: ";
 cin >> Ny;
 
 suma(Nx,Ny);	
}

void suma(int x,int y){
  	
  int z=x+y;
  cout << "__________________________" << endl;
  cout << "la suma de x con y es: " << z << endl;
}
