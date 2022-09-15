//
// Created by Bihonda Epiquien  on 13/09/22.
//

#include "funciones.h"
#include <iostream>
using namespace std;

string PedriFrase() {
    string frase;
    do {
        cout <<"Ingrese frase:"<< endl;
            getline(cin, frase);
    }while (frase == "");
    return frase;
}

void Transfor(string &Frase) {
    for (int i=0; i < Frase.length(); i++)
        Frase[i] = tolower(Frase[i]);
}

bool EsPalindrome(string frase, int i, int end) {
    if ( end - i ==1 || i == end){
        return true;
    }
    else{
        if  (frase[i] == frase[end]){
            return EsPalindrome(frase, i+1, end-1);
        }
        else{
            return false;
        }
    }
}

void ImprimirResultado(string frase, int i, int end) {
    Transfor(frase);
    if (EsPalindrome(frase, i, end)){
        cout <<"SI es Palindrome"<< endl;
    }
    else{
        cout <<"NO es Palindrome"<< endl;
    }
}