#include <iostream>

using namespace std;

void cargarVector(int v[], int tam);
void mostrarVector(int v[], int tam);

int main()
{
	const int TAM = 5;
	int vec[TAM];

	cout << vec << endl;

	cargarVector(vec, TAM);
	cout << endl;
	mostrarVector(vec, TAM);

	return 0;
}

//cargarVector recibe el primer par�metro por direcci�n y el segundo par�metro por valor
void cargarVector(int v[], int tam){
  int i;
  for(i=0; i<tam; i++){
    cin >> v[i];
  }
}

//mostrarVector recibe el primer par�metro por direcci�n y el segundo par�metro por valor
void mostrarVector(int v[], int tam){
  int i;
  for(i=0; i<tam; i++){
    cout << v[i] << endl;
  }
}
