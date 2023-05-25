#include <iostream>

using namespace std;

int main(){
    int LI = 3;
    int CO = 3;

    int **matriz = new int *[LI];

    for(int i=0; i < LI; i++){
        matriz[i] = new int [CO];
    }

    //...Laços do teste...

    for(int i=0; i<LI; i++){
        delete matriz[i];
    }

    delete matriz;

    return 0;
}
