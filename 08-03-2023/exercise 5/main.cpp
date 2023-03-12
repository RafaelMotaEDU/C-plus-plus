#include <iostream>
#include <stdlib.h>

using namespace std;

int restOfDivision(int a, int b){
    int i, bigger, smaller;

    if(a < b){
        bigger = b;
        smaller = a;
    }else{
        bigger = a;
        smaller = b;
    }

    i = bigger;

    while(i >= smaller ){
        i -= smaller;
    }

    return i;
}

int main(){
    int value1, value2;

    do{
        cout<<"Enter two positive integer"<<endl;
        cin>>value1>>value2;
    }while(value1 < 0 || value2 < 0);

    restOfDivision(value1, value2);
    cout<<"The rest of the division is: "<<restOfDivision(value1, value2)<<endl;

    return 0;
}