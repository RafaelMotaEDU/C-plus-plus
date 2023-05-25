#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

using namespace std;


/*
    Faça um programa que o programa gere matriz do A, B e C seguindo as imagens abaixo e
    o tamanho da matriz (lembre-se: somente matrizes quadradas).Após, gere-as e exiba-as na tela.
    Utilize subrotinas.
*/

int **criarMatriz(int lin, int col){
    int **novaMatriz = new int *[lin];
    for(int i=0; i < lin; i++){
        novaMatriz[i] = new int[col];
    }
    return novaMatriz;
}

void tamanhoMatrizQuadrada (int &lin, int &col){
    do {
        cout<<"Digite o tamanho da linha: ";
        cin>>lin;
        cout<<endl;
        cout<<"Digite o tamanho da coluna: ";
        cin>>col;

        system("cls");
    }while(lin != col);
}


void preencher_matrizA(int **mat, int lin, int col){
    for(int i=0; i < lin; i++){
        int k = i/2;
        for(int j=0; j < col; j++){
            mat[i][j] = (i%2 == 0) ? 10*k+j*2: (10*k+j*2)+1;
        }
    }
}

void preencher_matrizB(int **mat, int lin, int col){
    for(int i=0; i < lin; i++){
        for(int j=0; j < col; j++){
            mat[i][j] = (i+j)%2;
        }
    }
}

void preencher_matrizC(int **mat, int lin, int col){
    for(int i=0; i < lin; i++){
        for(int j=0; j < col; j++){
            (j > i)? mat[i][j] = 1: mat[i][j] = 0;
        }
    }
}

void mostrar_matriz(int **mat, int lin, int col, char frase[]){
    cout<<frase<<": "<<endl;
    cout<<endl;
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout<< mat[i][j] << "\t";
        }
        cout<<endl;
    }
}

int main(){
    char opt;
    int lin, col;

    tamanhoMatrizQuadrada(lin, col);

    int **matrizA = criarMatriz(lin,col);
    int **matrizB = criarMatriz(lin,col);
    int **matrizC = criarMatriz(lin,col);

    preencher_matrizA(matrizA, lin, col);
    mostrar_matriz(matrizA, lin, col, "MATRIZ A");

    cout<<endl;

    preencher_matrizB(matrizB, lin, col);
    mostrar_matriz(matrizB, lin, col, "MATRIZ B");

    cout<<endl;

    preencher_matrizC(matrizC, lin, col);
    mostrar_matriz(matrizC, lin, col, "MATRIZ C");






}
