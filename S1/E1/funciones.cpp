//
// Created by Bihonda Epiquien  on 6/09/22.
//
#include <iostream>
#include "funciones.h"
using namespace std;

int PedirNumeros() {
    int n;
    do {
        cout << "Ingresa un numero > 10: ";
        cin >> n;
    }while( n <= 10);
    return n;
}

bool EsPrimo(int n) {
    bool condicion = true;
    int i=2, res;
    while (condicion==true && i<n){
        res = n % i;
        if ( res==0){
            condicion = false;
        }
        i = i+1;
    }
    return condicion;
}

void misPrimos(int &aP, int &sP, int n) {
    int  an= n-1;
    int sn = n +1;
    while (an < n){
        if (EsPrimo(an)== true){
            aP= an;
            break;
        }
        else{
            an = an -1;
        }
    }

    while (sn > n){
        if (EsPrimo(sn)== true){
            sP= sn;
            break;
        }
        else{
            sn = sn +1;
        }
    }
}
