#include "lib.h"
int cerca_nome(char lista[10][20], char nome[20]) {
    for (int i=0; i<10; i++) {
        for (int j=0; j<20; j++) {
            if (lista[i][j]!=nome[j]) {
                j = 20;
            }else if(j==19){
                return i;
            }
        }
    }
    return 11;
}
