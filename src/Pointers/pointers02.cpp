#include<iostream>

using namespace std;

int main(){


    int * ptr;

    int val = 9;
    
    //ptr = &val; // Son equivalentes
    *ptr = val;

    cout<<*ptr<<endl;

    int *xPtr = 9; // error: invalid conversion from 'int' to 'int*'


    return 0;

}