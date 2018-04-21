#include<iostream>

using namespace std;

int main(){


    char arr[6] = {'J','A','I','M','E','R'};
    char * it;
    char * av;

    it = arr;

    av = it + 3 ;// size(char) -> numero de bytes

    cout<<"Donde apunta mi caracter -> "<<*av <<endl; // &av -> numero de direccion de memoria

    return 0;

}