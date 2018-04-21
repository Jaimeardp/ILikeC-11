#include <iostream>

using namespace std;

void swap(int& x, int& y){
    int temp = x;
    x = y;
    y = temp;
}

int main(){
    
    int x=1,y=4;
    swap(x,y);
    //swap(3,4); // NOT COMPILE!
  
    cout<<" X -> "<< x <<endl;
    cout<<" Y -> "<< y <<endl;
   

    cout<<"METODO CON PARAMETROS COMO PUNTEROS"<<endl;

    int a=3,b=9;
    int *ax = &a, *bx = &b;

    cout<< "Check -> "<< ax << " - " << bx <<endl;

    swap(*ax,*bx); // Esta accionva devolver la variable a las cuales los punteros apuntan

    cout<<" A -> "<< a <<endl;
    cout<<" B -> "<< b <<endl;
    return 0;
}

