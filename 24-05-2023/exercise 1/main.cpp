#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

// Criando uma matriz dinamica transposta

void ler_tamanho(int &l, int &c){
    do{
        cout<<"Digite o tamanho da linha da matriz: ";
        cin>>l;
    }while(l < 1);

    cout<<endl;

    do{
        cout<<"Digite o tamanho da coluna da matriz: ";
        cin>>c;
    }while(c < 1);
}

void preencher_matriz(int **mat, int lin, int col){
    srand(time(NULL));
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            mat[i][j] = rand() % 10;
        }
    }
}


void mostrar_matriz(int **mat, int lin, int col, char frase[]){
    cout<<frase<<endl;
    cout<<endl;
    for(int i=0; i<lin; i++){
        for(int j=0; j<col; j++){
            cout<< mat[i][j] << "\t";
        }
        cout<<endl;
    }
}


int **transpostar_matriz(int **mat, int lin, int col){
    int **aux = new int*[col];
    for(int i=0; i < col; i++){
        aux[i] = new int[lin];
    }

    for(int i=0; i < lin; i++){
        for(int j=0; j< col; j++){
            aux[j][i] = mat[i][j];
        }
    }

    return aux;
}
int main(){
    int lin, col;


    ler_tamanho(lin, col);

    // Matriz Principal
    int **mat = new int*[lin];
    for(int i=0; i < lin; i++){
        mat[i] = new int[col];
    }

    preencher_matriz(mat, lin, col);
    mostrar_matriz(mat, lin, col, "Matriz Principal");

    cout<<endl;

    int **matTransposta = transpostar_matriz(mat, lin, col);
    mostrar_matriz(matTransposta, col, lin, "Matriz Principal Transposta");

    for(int i=0; i<lin; i++){
        delete mat[i];
    }

    delete mat;


    for(int i=0; i<col; i++){
        delete matTransposta[i];
    }

    delete matTransposta;

}
