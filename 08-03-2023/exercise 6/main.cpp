#include <iostream>
#include <stdlib.h>

using namespace std;

int greatestCommonDivisor(int a, int b){
    int remainder;

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
    float value1, value2;
    cout<<"Enter two values"<<endl;
    cin>>value1>>value2;
    greatestCommonDivisor(value1, value2);

    cout<<"The Greatest common divisor is: "<<greatestCommonDivisor(value1, value2)<<endl;
}