/*
Hacer un programa para ingresar una lista 10 n�meros e informar el m�ximo de los
negativos y el m�nimo de los positivos. Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.

M�ximo Negativo: -3.
M�nimo Positivo: 2.
*/
#include <iostream>
using namespace std;

int main(){

   const int CANT_NROS = 6;
   int i, num, maximoNegativos=0, minimoPositivos=0;

   for(i=1; i<=CANT_NROS; i++){
      cout << "Nro: ";
      cin >> num;

      if (num > 0){

         if (minimoPositivos == 0 || num < minimoPositivos){
            minimoPositivos = num;
         }

      }
      else{
         if (num < 0){

            if (maximoNegativos == 0 || num > maximoNegativos){
               maximoNegativos = num;
            }

         }
      }
   }

   if (minimoPositivos != 0){
      cout << endl << "MINIMO POSITIVOS: " << minimoPositivos << endl;
   }
   if (maximoNegativos != 0) {
      cout << endl << "MAXIMO NEGATIVOS: " << maximoNegativos<< endl;
   }



   return 0;
}
