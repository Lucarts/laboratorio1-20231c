#include <iostream>
using namespace std;
#include <string>
#include "matematica.h"

/// Definici�n de funciones

/**
   Suma los dos n�meros que recibe como par�metros y devuelve el resultado de la suma.
*/
int sumar(int num1, int num2){
   int r;
   r = num1 + num2;
   return r;
}

/**
   Divide al primer par�metro por el segundo y devuelve el resultado de la divisi�n real.
   ATENCI�N: No contempla la divisi�n por cero.
*/
float dividir(int numero1, int numero2){
   float resu;
   resu = (float) numero1 / numero2;
   return resu;
}

/**
   Saludar es una funci�n que saluda
*/
void saludar(){
   cout << "Bienvenido/a a mi programa hecho con funciones" << endl;
}

/**
   Saludar recibe el nombre de la persona y la saluda
*/
void saludar(string nombre){
   cout << "Bienvenido/a " << nombre << " a mi programa hecho con funciones" << endl;
}
