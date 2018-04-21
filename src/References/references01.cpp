#include <iostream>

using namespace std;

int main(){


    // Data type references
    int x = 9;

    int& xRef = x;

    xRef = 19; // x Cambia de valor 

    cout<<"Valor de x -> "<< x <<endl;

    return 0;
}