#include <iostream>

using namespace std;

int main(){
    
    int x = 9, y=8;
    // Data type references
    int& xRef = x;
    int& yRef = y;

    xRef = y; // Asigna valor a x, mas no hace referencia a y

    cout<<"Valor de x -> "<< xRef <<endl;    
    
    return 0;
}