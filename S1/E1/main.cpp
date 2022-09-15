#include <iostream>
#include "funciones.h"
using namespace std;
int main() {
    int n= PedirNumeros();
    int aP= 0;
    int sP= 0;
    misPrimos(aP, sP, n);
    cout << "Numero primo siguiente: " << sP <<endl;
    cout << "Numero primo anterior: " << aP<<endl;
}
