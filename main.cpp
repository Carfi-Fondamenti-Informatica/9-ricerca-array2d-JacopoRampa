#include <iostream>
#include "lib.h"
using namespace std;
int main() {
    char lista[10][20];
    for (int i=0; i<10; i++) {
        for (int j=0; j<20; j++) {
            lista[i][j]=' ';
        }
    }
    char nome[20];
    for (int i=0; i<20; i++) {
        nome[i]=' ';
    }
    for (int i=0; i<10; i++) {
        cin >> lista[i];
    }
        cin >> nome;
    if (cerca_nome(lista,nome)<=10){
        cout << cerca_nome(lista,nome);
    }else{
        cout << "non presente" << endl;
    }
    return 0;
}
