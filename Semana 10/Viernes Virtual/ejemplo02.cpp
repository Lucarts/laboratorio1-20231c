/**

Cargar las notas del primer parcial (float) de los 78 estudiantes de un curso. Luego
de cargar todas las notas:
- Listar cu�ntos estudiantes obtuvieron una nota mayor al promedio.
- Obtener la mejor calificaci�n y cu�ntos estudiantes lograron dicha
calificaci�n
*/

#include <iostream>
using namespace std;

int main(){
   const int CANT_NOTAS = 10;
   float notas[CANT_NOTAS];
   int i;
   // Punto A
   float sumaNotas = 0, promedio;
   int cantidadExamenesMayoresAlPromedio=0;

   // Punto B
   float notaMaxima;
   int cantidadExamenesConNotaMaxima=0;


   for(i=0; i<CANT_NOTAS; i++){
      cout << "Nota # " << i+1 << ": ";
      cin >> notas[i];
   }
   cout << endl;
   for(i=0; i<CANT_NOTAS; i++){
      sumaNotas += notas[i];
   }
   promedio = sumaNotas / CANT_NOTAS;

   for(i=0; i<CANT_NOTAS; i++){
      if (notas[i] > promedio){
         cantidadExamenesMayoresAlPromedio++;
      }
   }

   cout << "PUNTO A: " << cantidadExamenesMayoresAlPromedio << endl;

   // C�lculo del m�ximo
   notaMaxima = notas[0];
   for(i=1; i<CANT_NOTAS; i++){
      if (notas[i] > notaMaxima){
         notaMaxima = notas[i];
      }
   }
   // Comparar cu�ntos tienen una nota igual a la m�xima
   for(i=0; i < CANT_NOTAS; i++){
      if (notas[i] == notaMaxima){
         cantidadExamenesConNotaMaxima++;
      }
   }

   cout << "PUNTO B: " << cantidadExamenesConNotaMaxima << endl;


   return 0;
}
