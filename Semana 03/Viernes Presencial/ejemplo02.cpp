/*
Un comercio solicita hacer un programa que permita ingresar el nombre de un art�culo, su
precio unitario y la cantidad de unidades vendidas (entero) y calcular e informar el nombre
del art�culo y el importe total de la venta que deber� pagar el cliente.
*/
#include <iostream>
using namespace std;

int main(){
  string nombreArticulo;
  float precioUnitario, importeTotal;
  int cantidad;

  cout << "Nombre: ";
  cin >> nombreArticulo;

  cout << "Precio unitario: $ ";
  cin >> precioUnitario;

  cout << "Cantidad: ";
  cin >> cantidad;

  importeTotal = precioUnitario * cantidad;

  cout << endl << "Articulo vendido: " << nombreArticulo << endl;
  cout << "Importe a pagar $ " << importeTotal << endl;

  return 0;
}
