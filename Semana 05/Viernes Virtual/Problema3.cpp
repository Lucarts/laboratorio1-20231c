/*
Se dispone de la informaci�n de siete localidades de la zona norte de la
Provincia de Buenos Aires. Cada localidad lanz� mediante una aplicaci�n web
una campa�a de registraci�n para la vacunaci�n contra la gripe para sus
habitantes.

Por cada una de las siete localidades se registr�:
Nombre de la localidad (string)
Cantidad de registrados a vacunarse que pertenecen a grupo de riesgo (entero)
Cantidad de registrados a vacunarse que no pertenecen a grupo de riesgo (entero)
Poblaci�n total de la localidad (entero)

La Provincia de Buenos Aires estim� que se necesitar� diariamente un/a
vacunador/a por cada 70 registrados. Tambi�n estableci� que por d�a y localidad
s�lo podr�n trabajar hasta 10 vacunadores.

Se pide calcular e informar:
Por cada centro, la cantidad total de vacunadores necesarios y la cantidad total de d�as que llevar� la campa�a de vacunaci�n.

La cantidad total de registrados para vacunarse contra la gripe y qu�
porcentaje representa sobre el total de la poblaci�n de las siete localidades.

La cantidad de localidades donde se hayan registrado m�s personas que
pertenecen a grupo de riesgo que personas que no pertenecen a grupo de riesgo.

*/

#include <iostream>

using namespace std;

int main()
{
    const int LOCALIDADES = 3;

    string nombreLoc;
    int cantGR, cantNoGR, poblacion, i, cantReg, vacunadores, resto, dias;
    int acuReg = 0, acuPoblacion = 0, contLoc = 0;
    float porcentaje;

    for(i = 0; i < LOCALIDADES; i++)
    {
        cout << "Nombre localidad: ";
        cin >> nombreLoc;
        cout << "Cantidad de registrados Grupo Riesgo: ";
        cin >> cantGR;
        cout << "Cantidad de registrados Grupo NO Riesgo: ";
        cin >> cantNoGR;
        cout << "Poblaci�n total de la localidad: ";
        cin >> poblacion;

        cantReg = cantGR + cantNoGR;

        vacunadores = cantReg / 70;
        resto = cantReg % 70;

        if(resto > 0)
        {
            vacunadores++;
            //vacunadores = vacunadores + 1;
            //vacunadores += 1;
        }

        //cout << "Vacunadores: " << vacunadores << endl;

        dias = vacunadores / 10;

        if(vacunadores % 10 > 0)
        {
            dias++;
        }

        //cout << "Dias: " << dias << endl;

        acuReg += cantReg;
        acuPoblacion += poblacion;

        if(cantGR > cantNoGR)
        {
            contLoc++;
        }

        //PUNTO A
        cout << "Localidad: " << nombreLoc << endl;
        cout << "Cantidad vacunadores: " << vacunadores << endl;
        cout << "Cantidad dias: " << dias << endl;
    }

    //PUNTO B
    porcentaje = (float)acuReg / acuPoblacion * 100;
    cout << endl << "Total registrados para vacunarse: " << acuReg << endl;
    cout << "Porcentaje total poblacion: " << porcentaje << endl;

    //PUNTO C
    if(contLoc > 0)
    {
        cout << endl << "Cantidad de localidades con GR > No GR: " << contLoc << endl;
    }
    else
    {
        cout << "No se encontraron localidades donde el grupo de riesgo es mayor al grupo de no riesgo" << endl;
    }

    return 0;
}
