#include <iostream>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

// Exercício: criar duas funções para preencher e mostrar uma matriz dinâmica.

void preencher_matriz(int **mat, int lin, int col){
    srand(time(NULL));
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            mat[i][j] = rand() % 10;
        }
    }
}


void mostrar_matriz(int **mat, int lin, int col, char frase[]){
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout<< mat[i][j] << "\t";
        }
        cout<<endl;
    }
}

int main(){
    int l=20, c=10;

    int **mat = new int*[l];

    for(int i=0; i<l; i++){
        mat[i] = new int[c];
    }

    preencher_matriz(mat, l, c);
    mostrar_matriz(mat, l, c, "Matriz");

    for(int i=0; i<l; i++){
        delete mat[i];
    }

    delete mat;

    return 0;
}
