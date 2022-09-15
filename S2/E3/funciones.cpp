//
// Created by Bihonda Epiquien  on 13/09/22.
//

#include "funciones.h"
#include <iostream>
using namespace std;
int PedirNum() {
    int dias;
    do{
        cout << "Numero de dias: ";
        cin >> dias;
    }while(dias <= 0);
    return dias;
}

void PedirTemp(int dias) {
    int Max, temp, suma=0, frio=0, inte= 0, calu=0, mayor=0;
    for (int i=1; i<dias+1; i++){
        cout << "Temperatura del dia " << i << ": ";
        cin >> temp;
        suma += temp;
        if (temp < 16){
            frio += 1;
        }
        else if(temp> 15 && temp <= 21){
            inte += 1;
        }
        else if(temp > 21){
            calu += 1;
        }
        if (mayor< temp){
            mayor = temp;
        }
    }
    int Promedio = suma / dias;
    cout << "Reporte"<< endl;
    cout << "La temperatura promedio es: "<< Promedio << endl;
    cout << "La temperatura mayor es: "<< mayor<<endl;
    cout << "Dias Frios: "<< frio << endl;
    cout << "Dias Templados: "<< inte<<endl;
    cout << "Dias Calurosos: "<< calu<<endl;
}
