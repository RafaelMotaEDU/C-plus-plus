#include <iostream>
#include <stdlib.h>

using namespace std;

int positivoNegativo(int a){
    int x;

    if(a > 0 ) {
        x = 1;
    }else{
        x = 0;
    }
    return x;
}

int main(){
    int numero;
    cout<<"Digite um valor"<<endl;
    cin>> numero;
    cout<<"resultado: "<<positivoNegativo(numero)<<endl;
}