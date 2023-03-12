#include <iostream>
#include <stdlib.h>

using namespace std;

int maximoDivisorComum(int a, int b){
    int resto;

    while(a != b){
        if(a > b){
            a = a - b;
        }else{
            b = b - a;
        }
}
    return a;
}

int main(){
    float valor1, valor2;
    cout<<"Digite dois valores"<<endl;
    cin>>valor1>>valor2;
    maximoDivisorComum(valor1, valor2);

    cout<<"O maximo divisor comum e: "<<maximoDivisorComum(valor1, valor2)<<endl;
}