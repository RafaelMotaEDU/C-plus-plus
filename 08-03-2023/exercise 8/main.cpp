#include <iostream>
#include <stdlib.h>

using namespace std;

bool isPrimeNumber(int x){

    for(int i=x-1; i > 1; i--){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int value = 101, c = 0;
    for(int i=0; c <= 50; i++){
        if(isPrimeNumber(i)){
            cout<<i<<endl;
            c++;
        }
    }
}