#include <iostream>
#include <stdlib.h>

using namespace std;

void parametersSwap (int &a, int &b){
    int x = a;
    a = b;
    b = x;
}
int main(){
    int firstValue = 25;
    int secondValue = 10;
    cout<<"first value: "<<firstValue<<"\n"<<"second value: "<<secondValue<<endl;
    parametersSwap(firstValue, secondValue);
    cout<<endl;
    cout<<"Inverted values: \n\nfirst value: "<<firstValue<<"\n"<<"second value: "<<secondValue<<endl;
    return 0;
}