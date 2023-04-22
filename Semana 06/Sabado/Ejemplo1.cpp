/*
EJERCICIO 18 - TP 3
La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos durante la semana
pasada. Por cada movimiento se registr�:
- N�mero de movimiento
- D�a
- Tipo ('E' - Extracci�n / 'D' - Dep�sito)
- Importe

Existe un registro por movimiento. Se desea calcular e informar:
- El saldo final de la cuenta.
- El porcentaje de movimientos de extracci�n y el porcentaje de dep�sito.
- El dep�sito de mayor importe indicando tambi�n d�a y n�mero de movimiento.
- La cantidad de movimientos del d�a 10.
*/

#include <iostream>
#include <iomanip>
#include <locale.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Spanish");
    //DATOS DE ENTRADA
    const int MOVIMIENTOS = 7;
    int nroMov, dia, i, cantExt = 0, cantDep = 0, diaMayor, nroMovMayor, cantMovDia10 = 0;
    char tipo;
    float importe, saldo = 0, porcentajeExt, porcentajeDep, mayorDep;

    for(i=1; i<=MOVIMIENTOS; i++)
    {
        cout << "N�mero de movimiento: ";
        cin >> nroMov;
        cout << "D�a: ";
        cin >> dia;
        cout << "Tipo de movimiento: ";
        cin >> tipo;
        cout << "Importe: $";
        cin >> importe;

        switch(tipo)
        {
        case 'E':   //asumo que los importes de extracciones se ingresan positivos
        case 'e':
            //saldo += importe * (-1);
            saldo -= importe;
            cantExt++;   //cantExt += 1; cantExt = cantExt + 1;
            break;
        case 'D':
        case 'd':
            saldo += importe;
            cantDep++;
            if(cantDep == 1 || importe > mayorDep)
            {
                mayorDep = importe;
                diaMayor = dia;
                nroMovMayor = nroMov;
            }
            break;
        }

        if(dia == 10)
        {
            cantMovDia10 ++;
        }
    }

    //PUNTO A
    //ACLARACI�N: el saldo puede ser negativo, ya que es una cuenta corriente.
    //No hace falta validar que haya saldo positivo para poder hacer una extracci�n.

    cout << "El saldo final de la cuenta es de: $" << saldo << endl;
    //PUNTO B
    porcentajeExt = (float)cantExt * 100 / MOVIMIENTOS;
    porcentajeDep = (float)cantDep * 100 / MOVIMIENTOS;

    cout << "Porcentaje de extracciones: " << fixed << setprecision(2) << porcentajeExt << "%" << endl;
    cout << "Porcentaje de dep�sitos: " << fixed << setprecision(2) << porcentajeDep << "%" << endl;

    //PUNTO C
    if(cantDep == 0){
        cout << "No hubo ning�n dep�sito" << endl;
    }
    else
    {
        cout << "Mayor dep�sito: $" << mayorDep << endl;
        cout << "D�a del mayor dep�sito: " << diaMayor << endl;
        cout << "N�mero de movimiento del mayor dep�sito: " << nroMovMayor << endl;
    }

    /*
    if(cantDep > 0)
    {
        cout << "Mayor dep�sito: $" << mayorDep << endl;
        cout << "D�a del mayor dep�sito: " << diaMayor << endl;
        cout << "N�mero de movimiento del mayor dep�sito: " << nroMovMayor << endl;
    }
    */

    //PUNTO D
    if(cantMovDia10 > 0) {
        cout << "La cantidad de movimientos del d�a 10 es de: " << cantMovDia10 << endl;
    }

  return 0;
}
