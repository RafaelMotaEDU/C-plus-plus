#include <iostream>
#include <stdlib.h>

using namespace std;

bool perfectNumber(int a){
    int sum = 0, i;

    for(i=1; i <= a/2; i++){
        if(a%i == 0) {
            sum += i;
        }
    }

    if(sum == a){
        cout<<"true"<<endl;
        return true;
    }else{
        cout<<"false"<<endl;
        return false;
    }
}

int main(){
    int number;

    do{
        cout<<"Enter a positive integer"<<endl;
        cin>>number;
    }while(number <= 0);

    cout<<perfectNumber(number)<<endl;
}