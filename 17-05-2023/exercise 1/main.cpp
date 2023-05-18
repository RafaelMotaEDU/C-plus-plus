#include <iostream>

using namespace std;



int* aumentarVetor(int a[], int tam, int quantidade){
    int *temp = new int[tam+quantidade];

    for(int i=0; i < tam; i++){
        temp[i] = a[i];
    }
    delete []a;
    return temp;
}

int main(){
    int *a = new int[5];
    int quantidade = 15;
    int i;

    cout<<"Vetor A" <<endl;
    for(i=0; i<5; i++){
        a[i] = i;
    }

    for(i=0; i<5; i++){
        cout<<a[i]<<"   ";
    }

    cout<<endl;
    cout<<"Vetor A aumentado" <<endl;

    for(i=0; i<quantidade+5; i++){
        cout<<a[i]<<"   ";
    }

    a = aumentarVetor(a, 5, quantidade);

    cout<<endl;
    for(i=0; i<quantidade+5; i++){
        cout<<a[i]<<"   ";
    }
    return 0;
}
