#include <iostream>
#include <stdlib.h>

using namespace std;

float calculeE(float x){
    float cont=1, sum=0;

    for(x; x >= cont; cont++){
        sum += x / cont;
    }
    return sum;
}

int main(){
    float number, sum=0, sum2=0, result, result2;
    cout<<"Enter a number"<<endl;
    cin>>number;

    sum += calculeE(number);

    system("cls");
    for(int i=5; i<=15; i++){
        sum2 += calculeE(i);
        cout<<"E("<<i<<") = "<<sum2<<endl;
    }

    result = sum;
    result2 = sum2;

    cout<<endl;

    cout<<"Resultado do Valor: "<<result<<endl;
    cout<<"Resultado do 5 - 15 : "<<result2<<endl;

    return 0;
}

