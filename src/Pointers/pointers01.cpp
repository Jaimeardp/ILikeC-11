#include<iostream>

using namespace std;

int main(){


    char arr[6] = {'J','A','I','M','E','R'};
    char * it;
    char * av;

    it = arr; // it apunta a arr[0]

    av = it + 3 ;// size(char) -> numero de bytes

    cout<<"Donde apunta mi caracter -> "<<*av <<endl; // &av -> numero de direccion de memoria

    // Iterando con un puntero 
    cout<<"Iterando una lista con punteros"<<endl;
    it = arr; //Coloco el puntero al inicio
    for(int i=0 ; i<6; i++){
        cout<< *(it + i) <<endl;
    }

    return 0;

}