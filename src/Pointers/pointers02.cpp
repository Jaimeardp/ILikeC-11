#include<iostream>

using namespace std;

int main(){


    int * ptr;

    int val = 9;

    //ptr = &val;
    *ptr = val;

    cout<<*ptr<<endl;

    return 0;

}