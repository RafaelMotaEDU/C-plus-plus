#include <iostream>

using namespace std;

int main(){
    // Aloca��o Din�mica de Matriz, Exemplo A:
    int LI = 3;
    int CO = 3;

    int **matriz= new int*[LI]; // cria um vetor de 3 posi��es, aonde cada uma delas � um ponteiro, logo posso guardar um endere�o de um vetor;
    matriz[0] = new int [LI*CO]; //  m[0] est� apontando para o vetor de matrizes inteira;

    for(int i=1; i < LI; i++){
        matriz[i] = matriz[i-1]+CO; // estou dizendo que a posi��o anterior � o endere�o + 3 bits, para que cada ponteiro possa apontar para o inicio de seu vetor.
    }

    for(int i=0; i < LI; i++){
        for(int j=0; j<CO; j++){
            matriz[i][j] = i+j;
        }
        cout<<endl;
    }
    for(int i=0; i < LI; i++){
        for(int j=0; j<CO; j++){
            cout<<matriz[i][j] << " ";
        }
        cout<<endl;
    }

    delete matriz[0];
    delete matriz;
}
