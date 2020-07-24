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
    char a = 'a';
    increase(&a, sizeof(a));
    cout << a << endl;
    return 0;
    
}


