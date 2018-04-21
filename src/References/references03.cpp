#include <iostream>

using namespace std;

int main(){
    
    // No compile
    //int& xRef = 7;
    // Si compila    
    //const int& xRef = 7;

    // References to Pointers and Pointers to References

    int * ptr;

    int*& ptrRef = ptr;

    ptrRef = new int;

    *ptrRef = 5;

    cout<<"---------"<<endl;
    cout<<"->  "<<*ptrRef<<endl;
    cout<<"---------"<<endl;

    //Viceversa

    int x = 3;

    int& xRef = x;

    int* xPtr = &xRef; // Address of a reference is pointer to value

    *xPtr = 100;

    cout<<"---------"<<endl;
    cout<<"->  "<<*xPtr<<endl;
    cout<<"---------"<<endl;
  
    return 0;
}