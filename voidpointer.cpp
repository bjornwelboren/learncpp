#include <iostream>
using namespace std;

void increase(void* data, int psize){
    if(psize == sizeof(char)){
        char * pchar;
        pchar = (char*)data; //Give datatype to void pointer
        ++(*pchar); //Increase dereferenced value
    }   
}


int main(){
    char x = 'a';
    char * p = &x;
    ++(*p);
    cout << a;
    
    char y = 'a';
    increase(&y, sizeof(y));
    cout << y << endl;
    return 0;
    
}


