#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <windows.h>


using namespace std;

/*
    Faça um programa que utilizando alocação dinâmica de memória, faça a leitura de duas matrizes,
    some uma com a outra, jogue o resultado em uma nova matriz e exiba o resultado no programa
    principal. Utilize procedimento.
*/



void tamanhoMatrizQuadrada (int &lin, int &col){

        cout<<"Digite o tamanho da linha: ";
        cin>>lin;
        cout<<endl;
        cout<<"Digite o tamanho da coluna: ";
        cin>>col;

        system("cls");
}


int **criarMatriz(int lin, int col){
    int **novaMatriz = new int *[lin];
    for(int i=0; i < lin; i++){
        novaMatriz[i] = new int[col];
    }
    return novaMatriz;
}

void preencher_matriz(int **mat, int lin, int col){
    srand(time(NULL));

    for(int i=0; i < lin; i++){
        for(int j=0; j < col; j++){
            mat[i][j] = rand() % 10;
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

int **somar_matriz(int **matA, int **matB, int lin, int col){
    int ** matrizC = criarMatriz(lin,col);

    for(int i=0; i < lin; i++){
        for(int j=0; j < col; j++){
            matrizC[i][j] = matA[i][j] + matB[i][j];
        }
    }

    return matrizC;
}


int main(){
    int lin, col;

    tamanhoMatrizQuadrada(lin, col);

    int **matrizA = criarMatriz(lin,col);
    preencher_matriz(matrizA, lin, col);

    int **matrizB = criarMatriz(lin,col);
    preencher_matriz(matrizB, lin, col);

    int **matrizC = somar_matriz(matrizA, matrizB, lin, col);

    mostrar_matriz(matrizA, lin, col, "Matriz A");
    cout<<endl;
    mostrar_matriz(matrizB, lin, col, "Matriz B");
    cout<<endl;
    mostrar_matriz(matrizC, lin, col, "Matriz C - soma");
}
