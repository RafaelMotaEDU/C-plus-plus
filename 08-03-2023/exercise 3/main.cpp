#include <iostream>
#include <stdlib.h>

using namespace std;

float idealWeight(float a, char b){
    float IW;

    if(b == 'M' || b == 'm'){
        IW = 72,7 * a - 58;
    }else{
        IW = 62,1 * a - 44,7;
    }
    return IW;
}

int main(){
    float height;
    char gender;
    cout<<"What is your gender?"<<endl;
    cin>>gender;

    do{
        cout<<"What is your height?"<<endl;
        cin>>height;
    }while(height <= 0);

    cout<<"your ideal weight is: "<<idealWeight(height, gender)<<endl;
}