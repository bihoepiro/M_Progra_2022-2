#include <iostream>
#include "funciones.h"
int main() {
    string Frase= PedriFrase();
    int i=0, end = Frase.length()-1;
    ImprimirResultado(Frase, i, end);
}
