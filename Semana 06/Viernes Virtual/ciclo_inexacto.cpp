/*
   El famoso influencer Santi Laratea decidi� hacer una colecta de dinero para pagar la deuda de
   550000 de una instituci�n. Para ello le pidi� a sus seguidores que donen el dinero que les
   sea posible. Utiliz� un sistema que aceptaba donaciones hasta que se cubriera el monto de la deuda.

   Hacer un programa que emule dicho sistema. El programa debe indicar la cantidad de donaciones
   que se registraron.

*/
#include <iostream>
using namespace std;

int main(){
   /// Datos de entrada (qu� tipo y cu�ntos?)
   /// float montoDonacion
   /// Cu�ntos ingresos? Indeterminado

   /// Info de salida
   /// Cu�ntas donaciones se hicieron (se muestra una vez al final de cargar todas las donaciones)
   /// int cantidadDonaciones

   const float OBJETIVO = 550000;
   float montoDonacion, recaudacion = 0;
   int cantidadDonaciones = 0;

   while (recaudacion < OBJETIVO){
      cout << "Importe de donacion: $";
      cin >> montoDonacion;

      cantidadDonaciones++;
      recaudacion += montoDonacion;
   }

   cout << endl << "Cantidad de donaciones necesarias: " << cantidadDonaciones << endl;

   return 0;
}
